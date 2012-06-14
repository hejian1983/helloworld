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
		DT_ALL = 0,//全部解析
		DT_SQL,//只解析sql的方式
		DT_PART,//部分解析,需要指定strexp
		DT_MESSAGE,//只解析控制字段
		DT_ONLYD,
	};

	std::ostream& dendl(std::ostream& os);

	//数据类型ID，每一种数据类型一个DID，比如日线、分时线、资产负债表等
	typedef int DID;
	const int INVALID_DID = 0;
	const int MIN_DID = 1;
	const int MAX_DID = 100000;

	//数据结构ID，每一种数据结构一个SID，每一个DID必然对应于一个SID，反之一个SID则可以对应多个数据结构相同或者类似的DID，比如日线、1分钟线、5分钟线等结构相同的数据可以对应同一个SID
	typedef int SID;
	const int INVALID_SID = 0;
	const int MIN_SID = 1;
	const int MAX_SID = 100000;

	//字段ID
	typedef int FID;
	const int INVALID_FID = 0;
	const int MIN_FID = 1;
	const int MAX_FID = 10000;

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//字段定义

	typedef std::set<FID> CFieldSet;	//字段集定义

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
		FID				m_fid;				//字段ID
		std::string		m_strName;			//字段名
		std::string		m_strDes;			//显示(本地化)名称
		std::string		m_strDefault;		//默认值，用于FAST压缩编码
		std::string		m_strInit;			//初始值
		int				m_nStrMaxLen;		//String_Field,Url_Field最大长度
		int				m_nStrIdxLen;		//String_Field,Url_Field索引值长度
		union
		{
			struct
			{
				int	m_nFieldType	: 8;	//FIELDTYPE,字段数据类型
				int	m_nEncode		: 8;	//FIELDENCODE,FAST编码方式
				int	m_nSave			: 6;	//FIELD_SAVEPOS,保存位置
				unsigned int	m_bIndexed		: 1;	//索引
				unsigned int	m_bUnique		: 1;	//主键
				unsigned int	m_bMandatory	: 1;	//强制字段，消息中必须存在
				//unsigned int	m_bzipped		: 1;	//raw数据是否zlib压缩
				//不能超过32bit,否则修改operator=
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
	//DID数据类型定义
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
		SID		m_sid;						//数据结构号
		int		m_org;						//数据源
		int		m_nServer;					//服务器类型
		std::string m_strName;				//数据名称
		std::string m_strDes;				//显示(本地化)名称
		int		m_nInterval;				//delta_interval字段压缩间隔
		int		m_nReload;					//客户端重载有效期
		int		m_nTimeOut;					//缓存数据有效期
		int		m_nPack;					//压缩多少数据到一个存储包中
		//int		m_nMaxdatalen;				//这种dfix数据的最大长度
		union
		{
			struct
			{
				int	m_nClntSav		: 4;	//DID_SAVE,客户端保存方式
				int	m_nTrans		: 4;	//DID_TRANS,客户端传送方式	
				int	m_nAuth			: 8;	//权限组
				unsigned int m_bMultiLan	: 1;	//多语言支持
				unsigned int m_bUnique : 1;

				unsigned int m_bRecAuth : 1;	//是否记录有权限
				unsigned int m_bComid : 1;	//obj里是不是放comid
				unsigned int m_bNeedST : 1;	//是否需要写入st表
				unsigned int m_bNeedKV : 1;	//是否要写kvdb,0--要写kv,1--不要写kv
				unsigned int m_bNeedObj : 1;	//是否需要obj,0--要obj,1--不要obj
				//unsigned int m_bTimeIndex	: 1;	//使用时间作为索引，1号数据是YYYYMMDDHHMMSS格式的数据
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
