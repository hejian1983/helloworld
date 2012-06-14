#pragma once

#include "message.h"
#include <map>
#include <list>

namespace DFIX
{
	struct RawInfo
	{
		string m_raw;
		bool m_isfile;
		bool m_iszlib;
	};
	class DATAUNIT_CLASS CDataArray
	{
		friend class DatasParser_DataArray;

		protected:
			FIELDTYPE	m_fieldType;
			FID			m_fid;

			void Copy(CDataArray &destdataarray, const CDataArray &srcdataarray);

		public:
			union
			{
				vector<pair<bool,int32_t> >		*m_pIntVector;		//Int_Field,Int8_Field,Int16_Field
				vector<pair<bool,uint32_t> >	*m_pUIntVector;		//Uint_Field,UInt8_Field,UInt16_Field,BIT1_Field,BIT2_Field,BIT3_Field,BIT4_Field,BIT5_Field,BIT6_Field,BIT7_Field
				vector<pair<bool,int64_t> >		*m_pInt64Vector;	//Int64_Field,Time_Field
				vector<pair<bool,uint64_t> >	*m_pUInt64Vector;	//Uint64_Field
				vector<pair<bool,float> >		*m_pFloatVector;	//Float_Field,Price_Field
				vector<pair<bool,double> >		*m_pDoubleVector;	//Double_Field,Money_Field
				vector<pair<bool,string> >		*m_pStringVector;	//String_Field,StrEnum_Field(值),Url_Field
				vector<pair<bool,RawInfo> >		*m_pRawVector;		//Raw_Field
				list<pair<bool,CDataArray> >	*m_pRepeatVector;	//Repeat_Field
			};

			CDataArray(FIELDTYPE type);
			~CDataArray();

			CDataArray(const CDataArray &dataarray);
			CDataArray& operator = (const CDataArray &dataarray);
			
			FIELDTYPE GetFieldType()const {return m_fieldType;}
			FID GetFID()const {return m_fid;}
			void SetFID(FID fid) {m_fid = fid;}
			
			const vector<pair<bool,int32_t> >*		GetIntVector() const {return m_fieldType==Int_Field||m_fieldType==Int8_Field||m_fieldType==Int16_Field ? m_pIntVector : NULL;}
			const vector<pair<bool,uint32_t> >*		GetUIntVector() const {return m_fieldType==Uint_Field||m_fieldType==UInt8_Field||m_fieldType==UInt16_Field||m_fieldType==BIT1_Field||m_fieldType==BIT2_Field||m_fieldType==BIT3_Field||m_fieldType==BIT4_Field||m_fieldType==BIT5_Field||m_fieldType==BIT6_Field||m_fieldType==BIT7_Field ? m_pUIntVector : NULL;}
			const vector<pair<bool,int64_t> >*		GetInt64Vector() const {return m_fieldType==Int64_Field||m_fieldType==Time_Field ? m_pInt64Vector : NULL;}
			const vector<pair<bool,uint64_t> >*		GetIntU64Vector() const {return m_fieldType==Uint64_Field ? m_pUInt64Vector : NULL;}
			const vector<pair<bool,float> >*		GetFloatVector() const {return m_fieldType==Float_Field||m_fieldType==Price_Field ? m_pFloatVector : NULL;}
			const vector<pair<bool,double> >*		GetDoubleVector() const {return m_fieldType==Double_Field||m_fieldType==Money_Field ? m_pDoubleVector : NULL;}
			const vector<pair<bool,string> >*		GetStringVector() const {return m_fieldType==String_Field||m_fieldType==StrEnum_Field||m_fieldType==Url_Field ? m_pStringVector : NULL;}
			const vector<pair<bool,RawInfo> >*		GetRawVector() const {return m_fieldType==Raw_Field ? m_pRawVector : NULL;}
			const list<pair<bool,CDataArray> >*		GetRepeatVector() const {return m_fieldType==Repeat_Field ? m_pRepeatVector : NULL;}

			friend ostream& operator<< (ostream &os,CDataArray &dataarray);
	};

	class DATAUNIT_CLASS CTimeArray
	{
		friend class DatasParser_DataArray;

		protected:
			FIELDTYPE	m_fieldType;
			FID			m_fid;

			void Copy(CTimeArray &desttimearray, const CTimeArray &srctimearray);

		public:
			union
			{
				vector<pair<int64_t,int32_t> >	*m_pIntVector;		//Int_Field,Int8_Field,Int16_Field
				vector<pair<int64_t,uint32_t> >	*m_pUIntVector;		//Uint_Field,UInt8_Field,UInt16_Field,BIT1_Field,BIT2_Field,BIT3_Field,BIT4_Field,BIT5_Field,BIT6_Field,BIT7_Field
				vector<pair<int64_t,int64_t> >	*m_pInt64Vector;	//Int64_Field,Time_Field
				vector<pair<int64_t,uint64_t> >	*m_pUInt64Vector;	//Uint64_Field
				vector<pair<int64_t,float> >	*m_pFloatVector;	//Float_Field,Price_Field
				vector<pair<int64_t,double> >	*m_pDoubleVector;	//Double_Field,Money_Field
				vector<pair<int64_t,string> >	*m_pStringVector;	//String_Field,StrEnum_Field(值),Url_Field
				vector<pair<int64_t,RawInfo> >	*m_pRawVector;		//Raw_Field
				list<pair<int64_t,CTimeArray> >	*m_pRepeatVector;	//Repeat_Field
			};

			CTimeArray(FIELDTYPE type);
			~CTimeArray();

			CTimeArray(const CTimeArray &timearray);
			CTimeArray& operator = (const CTimeArray &timearray);

			FIELDTYPE GetFieldType()const {return m_fieldType;}
			FID GetFID()const {return m_fid;}
			void SetFID(FID fid) {m_fid = fid;}

			const vector<pair<int64_t,int32_t> >*	GetIntVector() const {return m_fieldType==Int_Field||m_fieldType==Int8_Field||m_fieldType==Int16_Field ? m_pIntVector : NULL;}
			const vector<pair<int64_t,uint32_t> >*	GetUIntVector() const {return m_fieldType==Uint_Field||m_fieldType==UInt8_Field||m_fieldType==UInt16_Field||m_fieldType==BIT1_Field||m_fieldType==BIT2_Field||m_fieldType==BIT3_Field||m_fieldType==BIT4_Field||m_fieldType==BIT5_Field||m_fieldType==BIT6_Field||m_fieldType==BIT7_Field ? m_pUIntVector : NULL;}
			const vector<pair<int64_t,int64_t> >*	GetInt64Vector() const {return m_fieldType==Int64_Field||m_fieldType==Time_Field ? m_pInt64Vector : NULL;}
			const vector<pair<int64_t,uint64_t> >*	GetIntU64Vector() const {return m_fieldType==Uint64_Field ? m_pUInt64Vector : NULL;}
			const vector<pair<int64_t,float> >*		GetFloatVector() const {return m_fieldType==Float_Field||m_fieldType==Price_Field ? m_pFloatVector : NULL;}
			const vector<pair<int64_t,double> >*	GetDoubleVector() const {return m_fieldType==Double_Field||m_fieldType==Money_Field ? m_pDoubleVector : NULL;}
			const vector<pair<int64_t,string> >*	GetStringVector() const {return m_fieldType==String_Field||m_fieldType==StrEnum_Field||m_fieldType==Url_Field ? m_pStringVector : NULL;}
			const vector<pair<int64_t,RawInfo> >*	GetRawVector() const {return m_fieldType==Raw_Field ? m_pRawVector : NULL;}
			const list<pair<int64_t,CTimeArray> >*	GetRepeatVector() const {return m_fieldType==Repeat_Field ? m_pRepeatVector : NULL;}

			friend ostream& operator<< (ostream &os,CTimeArray &dataarray);
	};

	class DATAUNIT_CLASS DataParserBase
	{
		public:
			DataParserBase(DID did) : m_did(did){}
			virtual ~DataParserBase() {}
			virtual bool Parse(const vector<string> &messagearray) = 0;
		protected:
			DID m_did;
	};

	class DATAUNIT_CLASS DatasParser_MessageArray : public DataParserBase
	{
		public:
			DatasParser_MessageArray(DID did) : DataParserBase(did), m_nMessageArrayLen(0){}
			virtual ~DatasParser_MessageArray();
			vector<Message*>& GetMessageArray() {return m_messagearray;}
			virtual bool Parse(const vector<string> &messagearray);
			void AddInterestField(FID fid);//添加感兴趣的字段
			bool ConvertRepeat2Array(FID rfid,vector<FieldValueMap::FIELDVALUEMAP > &array);
			int GetMessageArrayLen() {return m_nMessageArrayLen;}
		private:
			vector<Message*> m_messagearray;
			set<FID> m_ifset;
			int m_nMessageArrayLen;
	};

	class DATAUNIT_CLASS DatasParser_DataArray : public DataParserBase
	{
		public:
			typedef map<FID,CDataArray>::const_iterator mdconst_iterator;
			typedef map<FID,CTimeArray>::const_iterator mtconst_iterator;

			enum PARSETYPE
			{
				PARSETYPE_DATA = 0,
				PARSETYPE_TIME,
				PARSETYPE_ALL,
			};

			DatasParser_DataArray(DID did) 
				: DataParserBase(did), m_parsetype(PARSETYPE_DATA), m_nDataArrayLen(0)
			{
			}
			virtual ~DatasParser_DataArray();
			
			virtual bool Parse(const vector<string> &messagearray);
			bool Parse(const vector<vector<string> > &messagearray);

			void SetParseType(PARSETYPE parsetype) {m_parsetype=parsetype;}
			bool AddInterestField(FID fid);//添加感兴趣的字段
			int GetDataArrayLen() {return m_nDataArrayLen;}

			//const map<FID,CDataArray>& GetDataArray() const {return m_dataarray;}
			mdconst_iterator GetDataArray(FID fid) const {return m_dataarray.find(fid);}
			mdconst_iterator mdbegin() const {return m_dataarray.begin();}
			mdconst_iterator mdend() const {return m_dataarray.end();}

			mtconst_iterator GetTimeArray(FID fid) const {return m_timearray.find(fid);}
			mtconst_iterator mtbegin() const {return m_timearray.begin();}
			mtconst_iterator mtend() const {return m_timearray.end();}

			friend ostream& operator<< (ostream &os,DatasParser_DataArray &dp);
			
		private:
			bool ParseDataArray(const vector<string> &messagearray);
			bool ParseTimeArray(const vector<string> &messagearray);
			bool ParseAllArray(const vector<string> &messagearray);

			bool ParseDataArray(const vector<vector<string> > &messagearray);
			bool ParseTimeArray(const vector<vector<string> > &messagearray);
			bool ParseAllArray(const vector<vector<string> > &messagearray);

			//static bool GetFieldVector(FID fid,const CFieldDict *dict,vector<FIELD_ATTR> &fidvector);
			bool ConvertFieldValueMap2DataArray(const CFieldDef *def,vector<FIELD_ATTR> v,FieldValueMap *fieldvaluemap,CDataArray *dataarray);
			bool ConvertFieldValueMap2TimeArray(const CFieldDef *def,vector<FIELD_ATTR> v,FieldValueMap *fieldvaluemap,CTimeArray *timearray,int64_t t);
			bool ConvertFieldValueMap2AllArray(const CFieldDef *def,vector<FIELD_ATTR> v,FieldValueMap *fieldvaluemap,CDataArray *dataarray,CTimeArray *timearray,int64_t t);

			bool ConvertString2DataArray(const string &str,vector<FIELD_ATTR> v,CDataArray *dataarray);
			bool ConvertString2TimeArray(const string &str,vector<FIELD_ATTR> v,CTimeArray *timearray,int64_t t);
			bool ConvertString2AllArray(const string &str,vector<FIELD_ATTR> v,CDataArray *dataarray,CTimeArray *timearray,int64_t t);
			
			void AddAllField(const CFieldDict *dict);

		private:
			PARSETYPE m_parsetype;	
			int m_nDataArrayLen;

			map<FID,CDataArray> m_dataarray;
			map<FID,CTimeArray> m_timearray;
			
			set<FID> m_InterestFieldSet;
			set<FID> m_ParseFieldSet;
			map<FID,vector<FIELD_ATTR> > m_fidmap;
	};
}
