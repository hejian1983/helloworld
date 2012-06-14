#pragma once

#include "dfix.h"

#include <map>
#include <set>
#include <string>
#include <vector>
#include "DOMDocument.h"
#include "exceptions.h"

#ifdef FASTMESSAGE
#include "fastmessage.h"
#endif

#include "./include/memory_dfix_fastcodec.h"
#include "./include/string_dfix_fastcodec.h"
#include "./include/memstr_dfix_fastcodec.h"
#include <strstream>

namespace DFIX
{
	class CFieldDefMan;
	class MemoryDFIXCodec;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ģ�嶨�壬ģ�������ģ���а�����Щ�ֶ�
	class DATAUNIT_CLASS CFieldSetTemplate : public CFieldSet
	{
		public:
			CFieldSetTemplate(){}
			//CFieldSetTemplate(const CFieldSetTemplate& d){*this=d;}
			virtual ~CFieldSetTemplate(){}
			CFieldSetTemplate& operator=(const CFieldSetTemplate& d);

			bool HasField(const FID f) const {return find(f)!=end();}
			bool HasAllFields(const CFieldSet& fs) const;
			int GetFieldCount() const {return size();}
			int MatchScore(const CFieldSet& fs) const;	//������϶ȣ�����0-1000��1000��ʾ��ȫ��ϣ�0��ʾ��ȫ�����

			bool AddField(const FID f){return insert(f).second;}

			void AddStringToFieldSet(const std::string& s){AddStringToFieldSet(s,*this);}
			static void AddStringToFieldSet(const std::string& s,CFieldSet& fs) throw(DFixException);		//��"1-7,9,10"���������ͼ��뵽fs�� 

		public:
			std::string		m_strDes;
	};

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	//��Ϣ�ֶζ��壬������Ϣ�ṹ�а�����Щ�ֶμ�������(m_fieldAttrs),�Լ�Repeat�ֶμ������ڶ������νṹ
	class DATAUNIT_CLASS CFieldDict
	{
		friend class CFieldDefMan;
		friend class FieldValueMap;

		public:
			typedef std::map<FID,FIELD_ATTR>	FieldAttrs;
			typedef std::map<FID,CFieldDict*>	Repeats;
			typedef std::map<std::string,FID>	NameMap;
			typedef std::vector<FID>			FieldOrder;

			typedef FieldOrder::const_iterator const_iterator;
			typedef FieldOrder::iterator iterator;

			typedef FieldAttrs::const_iterator fconst_iterator;
			typedef std::map<FID,CFieldDict*>::const_iterator rconst_iterator;
		public:
			CFieldDict();
			virtual ~CFieldDict();
			CFieldDict(const CFieldDict& d){*this = d;}
			CFieldDict& operator=(const CFieldDict& d);

			

			//�ֶ�
			bool GetFidFromName(const std::string& sName,FID& fid) const;
			int  GetFieldCount()const {return m_fieldAttrs.size();}
			void GetSqlField(std::vector<const FIELD_ATTR*> *sqlfids) const;
			bool GetFieldAttr(const FID fid,const FIELD_ATTR*& pAttr)const;
			int  GetFieldSet(const bool bGetRepeat,CFieldSet& s)const;
			bool IsField(const FID fid)const {return m_fieldAttrs.find(fid)!=m_fieldAttrs.end();}
			bool AddField(const FIELD_ATTR& fieldAttr);

			//Repeat����
			bool AddRepeat(const FID fid,const CFieldDict& dict);
			bool IsRepeat(const FID fid)const {return m_repeats.find(fid)!=m_repeats.end();}
			bool GetRepeat(const FID fid,const CFieldDict*& pDict)const;

			//�ֶ�˳�����
			const_iterator begin()const {return m_fieldOrder.begin();}
			const_iterator end()const {return m_fieldOrder.end();}
			iterator begin(){return m_fieldOrder.begin();}
			iterator end(){return m_fieldOrder.end();}

			fconst_iterator fbegin() const {return m_fieldAttrs.begin();}
			fconst_iterator fend() const {return m_fieldAttrs.end();}

			rconst_iterator rbegin() const {return m_repeats.begin();}
			rconst_iterator rend() const {return m_repeats.end();}

			inline FID GetDelim() const{return m_delim;}

			friend std::ostream& operator<< (std::ostream &os,const CFieldDict &fd);

		protected:
			FID		m_delim;			//������Repeat���ֶηָ�ID����������FID�Ͳ����µ�Repeat��¼
			FieldAttrs	m_fieldAttrs;		//�ֶ����Լ��ϣ�FID�õ�FIELD_ATTR
			Repeats		m_repeats;			//Repeat�ֶμ��ϣ�FID�õ�repeat�ֶ�
			NameMap		m_fieldNameMap;		//�����Ʋ�FID
			FieldOrder	m_fieldOrder;		//�ֶ�˳��
	};

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	//��Ϣ���壬�̳�����Ϣ�ֶζ��壬ÿһ�����ݽṹ��Ӧ��һ��CFieldDef
	class DATAUNIT_CLASS CFieldDef : public CFieldDict
	{
		friend class CFieldDefMan;
		typedef std::map<int,CFieldSetTemplate>			DataTemplateMap;
		
		public:
			typedef std::map<std::pair<FID,int>,std::string>	EnumStringMap;
			typedef std::set<std::string>						UnionIndexSet;
			CFieldDef(){m_sid = 0;m_nDefPriceDec = 2;m_nTimeidx = 0;m_nSubType = 0;m_cv = 0;}
			//CFieldDef(const CFieldDef& d){*this=d;}
			virtual ~CFieldDef(){}
			//CFieldDef& operator=(const CFieldDef& d);

			//�ֶμ�
			int  GetFieldSet(const bool bGetRepeat,CFieldSet& s)const	//�õ��ֶμ�
			{
				s.clear();
				return CFieldDict::GetFieldSet(bGetRepeat,s);
			}

			//ģ��
			int  FindTemplate(const CFieldSet& fields)const;	//���Һ��ʵ�template������ģ���ţ�-1��ʾδ�ҵ�
			bool AddTemplate(int nID,const CFieldSetTemplate& t)	//�������ģ��
			{
				if(!m_templates.insert(std::make_pair(nID,t)).second)
					throw DFixException("Template Duplicated","",nID);
				return true;
			}
			void AddUnionIndex(const std::string& s)					//�����������
			{
				m_unionindexes.insert(s);
			}

			//ö��
			bool GetEnumString(const FID fid,const int nValue,const std::string*& s) const;
			bool GetEnumString(const FID fid,const int nValue,std::string& s) const;
			bool AddEnum(const FID fid,int nnValue,const std::string& s) throw(DFixException);

			const EnumStringMap& GetESMap() const {return m_enumMap;}
			const UnionIndexSet& GetUISet() const {return m_unionindexes;}
		public:
			SID			m_sid;				//���ݽṹID
			int			m_nDefPriceDec;		//�۸�С����λ��
			int			m_nTimeidx;
			int			m_nSubType;
			uint64_t	m_cv;
		protected:
			EnumStringMap m_enumMap;		//StrEnum��Ӧ���ַ�
			DataTemplateMap m_templates;	//ģ��
			UnionIndexSet	m_unionindexes;	//��������
	};

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	//CFieldDef�ܵļ��ϣ�����ȫ����Ϣ����
	class DATAUNIT_CLASS CFieldDefMan
	{
		public:
			typedef std::map<SID,CFieldDef*>	DataTypeMap;
			typedef std::map<DID,DID_ATTRIB>	DataAttrMap;
			typedef std::map<std::string,DID>	DataNameMap;

			typedef DataAttrMap::const_iterator daconst_iterator;
		public:
			CFieldDefMan();
			//CFieldDefMan(std::string strFilePath);		//��strFilePathָ��·���µ�һϵ��xml�ļ���ʼ��
			virtual ~CFieldDefMan();

			static CFieldDefMan& Instance();


			//DID,SID�����Ϣ���塢��������
			bool GetDataDefFromDID(DID did,const CFieldDef*& pDef) const;			//��DID�õ�CFieldDef*
			bool GetDataDefFromType(SID sid,const CFieldDef*& pDef) const;			//��SID�õ�CFieldDef*
			bool GetDIDAttrib(DID did,const DID_ATTRIB*& pAttr) const;

			bool GetOrg(DID did,int &org) const;

			void DelDataDefFromDID(DID did);

			//�����Ƶõ�DID����Ϣ����
			bool GetDataDefFromName(const std::string& s,const CFieldDef*& pDef) const;	//�����Ƶõ�CFieldDef*
			bool GetDIDFromName(const std::string& s,DID& did) const;			//�����Ƶõ�DID

			//�ļ���д
			bool LoadFromXml(std::string strFileName,uint64_t cv = 0);
			bool LoadFromStream(std::istrstream& stream,uint64_t cv = 0);
			bool SaveXml(std::string strFileName,int nMinID,int nMaxID) const;//�����[nMinID-nMaxID)������������ݽṹ

			//������Ϣ���塢DID
			bool AddDataType(const CFieldDef& def) throw(DFixException);
			bool AddDID(const DID_ATTRIB& did) throw(DFixException);

			daconst_iterator dabegin() const{return m_didToDictType.begin();}
			daconst_iterator daend() const{return m_didToDictType.end();}

			//��ý�ѹ������
			FAST::MemStrDFIXCodec *GetDFixCodecPtr() { return &m_cDFixCodec; }
#ifdef FASTMESSAGE
			MsgFastCode *GetMsgFastCodePtr() { return &m_msgFastCode; }
#endif
		protected:
			bool ReadFromDocument(DOMDocumentPtr pDoc,uint64_t cv) throw(DFixException);
			bool ReadFields(DOMNode* pNode,CFieldDict& dict,CFieldDef& dataDef) throw(DFixException);
			bool ReadDidAttr(DOMNode* pNode,SID sid) throw(DFixException);
			bool ReadTemplate(DOMNode* pNode,CFieldDef& def) throw(DFixException);
			bool ReadEnums(DOMNode* pNode,FID fid,CFieldDef& def) throw(DFixException);
			bool ReadUnionIndex(DOMNode* pNode,CFieldDef& def) throw(DFixException);

			bool WriteDids(DOMDocument* pDoc,DOMNode* pNode,const CFieldDef& def)const throw(DFixException);
			bool WriteFields(DOMDocument* pDoc,DOMNode* pNode,const CFieldDict& dict,const CFieldDef& def)const throw(DFixException);
			bool WriteTemplate(DOMDocument* pDoc,DOMNode* pNode,const CFieldDef& def)const throw(DFixException);
			bool WriteEnums(DOMDocument* pDoc,DOMNode* pNode,const CFieldDict& dict)const throw(DFixException);
			bool WriteUnionIndex(DOMDocument* pDoc,DOMNode* pNode,const CFieldDef& def)const throw(DFixException);

		public:
			static FIELDTYPE FieldTypeFromString(const std::string& s) throw(DFixException);
			static const char* StringFromFieldType(const FIELDTYPE t);
			static FIELDENCODE FieldEncodeFromString(const std::string& s);
			static const char* StringFromFieldEncode(const FIELDENCODE e);
			static FIELD_SAVEPOS FieldSavePosFromString(const std::string& s);
			static const char* StringFromFieldSavePos(const FIELD_SAVEPOS s);
			static int StrToPack(const std::string& s) throw(DFixException);
			static bool PackToStr(int pack,std::string& s);
			static bool OrgToStr(int org,std::string& s);
			static int StrToOrg(const std::string &s);

			bool IsPushDid(DID did);
			bool IsAutoReqDid(DID did);
			bool IsPushReqDid(DID did);
			bool IsDidExist(DID did);
			bool IsComid(DID did);
			bool IsNeedST(DID did);
			bool IsNeedKV(DID did);
			bool IsNeedObj(DID did);

			bool GetFieldVector(DID did,FID fid,std::vector<FID> &fidvector);

			void Clear(){
				m_dataTypeMap.clear();
				m_didToDictType.clear();
				m_dataNameMap.clear();
				m_cDFixCodec.clear();
				#ifdef FASTMESSAGE
					m_msgFastCode.clear();
				#endif
			}

			friend std::ostream& operator<< (std::ostream &os,const CFieldDefMan &man);
		protected:
			DataTypeMap m_dataTypeMap;			//ÿһ�����ݽṹһ��CFieldDict
			DataAttrMap m_didToDictType;		//ÿһ��DIDһ�����ͣ���DID_ATTRIB::m_nDataTypeȥ���ҽṹ
			DataNameMap m_dataNameMap;			//�����Ʋ���DID
			FAST::MemStrDFIXCodec m_cDFixCodec;	//��ѹ������

#ifdef FASTMESSAGE
			MsgFastCode m_msgFastCode;			//fastmessage����
#endif
	};
	bool GetFieldVector2(FID fid,const CFieldDict *dict,std::vector<FID> &fidvector);
	bool GetFieldVector2(FID fid,const CFieldDict *dict,std::vector<FIELD_ATTR> &fidvector);
}	//DFIX
