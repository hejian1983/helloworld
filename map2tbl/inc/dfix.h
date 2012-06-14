#pragma once

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif 

#include <string>
#include <set>
#include <iostream>
#include "dzhtype.h"

namespace DFIX
{
#ifdef ZHOULITEST
	static const char SEPERATE = '|';
#else
	static const char SEPERATE = 0x01;
#endif
#ifdef ZHOULITEST2
	#define DATAUNIT_API
	#define DATAUNIT_CLASS
#else
	//static const char SEPERATE = 0x01;
	#ifdef _MSC_VER
		#ifdef DATA_EXPORT
			#define DATAUNIT_API __declspec(dllexport)
			#define DATAUNIT_CLASS __declspec(dllexport)
		#else
			#define DATAUNIT_API __declspec(dllimport)
			#define DATAUNIT_CLASS __declspec(dllimport)
		#endif
	#else
		#define DATAUNIT_CLASS
	#endif
#endif
	static const size_t MAXDATALEN = 131072 - 256;
	//static const int MAXMESSAGELEN = 65536 + 1024;
	//static const int MAXRAWDATALEN = 4096;

	enum DECODETYPE
	{
		DT_ALL = 0,//ȫ������
		DT_SQL,//ֻ����sql�ķ�ʽ
		DT_PART,//���ֽ���,��Ҫָ��strexp
		DT_MESSAGE,//ֻ���������ֶ�
		DT_ONLYD,
	};

	std::ostream& dendl(std::ostream& os);

	//��������ID��ÿһ����������һ��DID���������ߡ���ʱ�ߡ��ʲ���ծ���
	typedef int DID;
	const int INVALID_DID = 0;
	const int MIN_DID = 1;
	const int MAX_DID = 100000;

	//���ݽṹID��ÿһ�����ݽṹһ��SID��ÿһ��DID��Ȼ��Ӧ��һ��SID����֮һ��SID����Զ�Ӧ������ݽṹ��ͬ�������Ƶ�DID���������ߡ�1�����ߡ�5�����ߵȽṹ��ͬ�����ݿ��Զ�Ӧͬһ��SID
	typedef int SID;
	const int INVALID_SID = 0;
	const int MIN_SID = 1;
	const int MAX_SID = 100000;

	//�ֶ�ID
	typedef int FID;
	const int INVALID_FID = 0;
	const int MIN_FID = 1;
	const int MAX_FID = 10000;

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//�ֶζ���

	typedef std::set<FID> CFieldSet;	//�ֶμ�����

	enum FIELDTYPE
	{
		String_Field = 0,
		StrEnum_Field,
		Int_Field,
		Int64_Field,
		Uint_Field,
		Uint64_Field,
		Float_Field,
		Double_Field,
		Price_Field,
		Money_Field,
		Raw_Field,
		Repeat_Field,
		Url_Field,
		Time_Field,
		Int8_Field,
		UInt8_Field,
		Int16_Field,
		UInt16_Field,
		BIT1_Field,
		BIT2_Field,
		BIT3_Field,
		BIT4_Field,
		BIT5_Field,
		BIT6_Field,
		BIT7_Field,
	};

	enum FIELDENCODE		
	{
		EC_Nil = 0,
		EC_Const,
		EC_Default,
		EC_Copy,
		EC_Increment,
		EC_Delta,
		EC_Delata_Inter
	};

	enum FIELD_SAVEPOS
	{
		FS_BLOB = 0,
		FS_BOTH,
		FS_SQL,
	};

	struct FIELD_ATTR
	{
		FID				m_fid;				//�ֶ�ID
		std::string		m_strName;			//�ֶ���
		std::string		m_strDes;			//��ʾ(���ػ�)����
		std::string		m_strDefault;		//Ĭ��ֵ������FASTѹ������
		std::string		m_strInit;			//��ʼֵ
		int				m_nStrMaxLen;		//String_Field,Url_Field��󳤶�
		int				m_nStrIdxLen;		//String_Field,Url_Field����ֵ����
		union
		{
			struct
			{
				int	m_nFieldType	: 8;	//FIELDTYPE,�ֶ���������
				int	m_nEncode		: 8;	//FIELDENCODE,FAST���뷽ʽ
				int	m_nSave			: 6;	//FIELD_SAVEPOS,����λ��
				unsigned int	m_bIndexed		: 1;	//����
				unsigned int	m_bUnique		: 1;	//����
				unsigned int	m_bMandatory	: 1;	//ǿ���ֶΣ���Ϣ�б������
				//unsigned int	m_bzipped		: 1;	//raw�����Ƿ�zlibѹ��
				//���ܳ���32bit,�����޸�operator=
			};
			unsigned int m_nAttr;
		};
		FIELD_ATTR()
		{
			m_fid = 0;
			m_nStrMaxLen = 0;
			m_nStrIdxLen = 0;
			m_nAttr =  0;
		}
		FIELD_ATTR(const FIELD_ATTR& fa){*this = fa;}
		FIELD_ATTR& operator=(const FIELD_ATTR& fa)
		{
			m_strName = fa.m_strName;
			m_strDes = fa.m_strDes;
			m_strInit = fa.m_strInit;
			m_fid = fa.m_fid;
			m_nStrMaxLen = fa.m_nStrMaxLen;
			m_nStrIdxLen = fa.m_nStrIdxLen;
			m_nAttr = fa.m_nAttr;
			return *this;
		}

		FIELDTYPE GetFieldType() const {return (FIELDTYPE)m_nFieldType;}
		void SetFieldType(const FIELDTYPE t){m_nFieldType = t;}

		FIELDENCODE GetFieldEncode() const {return (FIELDENCODE)m_nEncode;}
		void SetFieldEncode(const FIELDENCODE e){m_nEncode = e;}

		FIELD_SAVEPOS GetSavePos() const {return (FIELD_SAVEPOS)m_nSave;}
		void SetSavePos(const FIELD_SAVEPOS p){m_nSave = p;}

		int GetStrMaxLen() const {return m_nStrMaxLen;}
		void SetStrMaxLen(int len){m_nStrMaxLen=len;}

		int GetStrIdxLen() const {return m_nStrIdxLen;}
		void SetStrIdxLen(int len){m_nStrIdxLen=len;}
	};
	std::ostream& operator<< (std::ostream &os,const FIELD_ATTR &fa);

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//DID�������Ͷ���
	const int DEFAULT_RELOAD = 60/*86400*/;
	const int DEFAULT_TIMEOUT = 86400;

	struct DIDFID
	{
		DID m_did;
		FID m_fid;
		std::string m_strSql;
	};
	enum DID_SAVE
	{
		DID_Save = 0,
		DID_NoSave,
		DID_EncSave
	};

	enum DID_TRANS
	{
		DID_Req = 0,
		DID_Push,
		DID_AutoReq,
		DID_PushReq,
	};

	enum DID_PACK
	{
		DID_Minutely = -1,
		DID_Hourly = -2,
		DID_Daily = -3,
		DID_Weekly = -4,
		DID_Monthly = -5,
		DID_Quaterly = -6,
		DID_Yearly = -7
	};

	enum DID_ORG
	{
		DIDORG_DATASVR_MYSQL = 0,
		DIDORG_DATASVR_MYSQLMEM,
		DIDORG_DATASVR_MONGODB,
		DIDORG_BIGFILE,
		DIDORG_DYNASVR,
		DIDORG_LOCAL,
	};
	struct DID_ATTRIB
	{
		DID		m_did;						//DID
		SID		m_sid;						//���ݽṹ��
		int		m_org;						//����Դ
		int		m_nServer;					//����������
		std::string m_strName;				//��������
		std::string m_strDes;				//��ʾ(���ػ�)����
		int		m_nInterval;				//delta_interval�ֶ�ѹ�����
		int		m_nReload;					//�ͻ���������Ч��
		int		m_nTimeOut;					//����������Ч��
		int		m_nPack;					//ѹ���������ݵ�һ���洢����
		//int		m_nMaxdatalen;				//����dfix���ݵ���󳤶�
		union
		{
			struct
			{
				int	m_nClntSav		: 4;	//DID_SAVE,�ͻ��˱��淽ʽ
				int	m_nTrans		: 4;	//DID_TRANS,�ͻ��˴��ͷ�ʽ	
				int	m_nAuth			: 8;	//Ȩ����
				unsigned int m_bMultiLan	: 1;	//������֧��
				unsigned int m_bUnique : 1;

				unsigned int m_bRecAuth : 1;	//�Ƿ��¼��Ȩ��
				unsigned int m_bComid : 1;	//obj���ǲ��Ƿ�comid
				unsigned int m_bNeedST : 1;	//�Ƿ���Ҫд��st��
				unsigned int m_bNeedKV : 1;	//�Ƿ�Ҫдkvdb,0--Ҫдkv,1--��Ҫдkv
				unsigned int m_bNeedObj : 1;	//�Ƿ���Ҫobj,0--Ҫobj,1--��Ҫobj
				//unsigned int m_bTimeIndex	: 1;	//ʹ��ʱ����Ϊ������1��������YYYYMMDDHHMMSS��ʽ������
				//must not exceed 32 bit
			};
			int m_nData;
		};
		DID_ATTRIB()
		{
			m_did = 0;
			m_sid = 0;
			m_nServer = 0;
			m_org = DIDORG_DATASVR_MYSQL;
			m_nInterval = 1;
			m_nReload = DEFAULT_RELOAD;
			m_nTimeOut = DEFAULT_TIMEOUT;
			m_nPack = 0;
			m_nData = 0;
			//m_nMaxdatalen = 0;
		}
		DID_ATTRIB(const DID_ATTRIB& d){*this=d;}
		DID_ATTRIB& operator=(const DID_ATTRIB& d)
		{
			m_did = d.m_did;
			m_sid = d.m_sid;
			m_nServer = d.m_nServer;
			m_org = d.m_org;
			m_strName = d.m_strName;
			m_strDes = d.m_strDes;
			m_nInterval = d.m_nInterval;
			m_nReload = d.m_nReload;
			m_nTimeOut = d.m_nTimeOut;
			m_nPack = d.m_nPack;
			m_nData = d.m_nData;
			//m_nMaxdatalen = d.m_nMaxdatalen;
			return *this;
		}
	};
	std::ostream& operator<< (std::ostream &os,const DID_ATTRIB &da);
}
