#pragma once

#include "fieldvaluemap.h"
#include "bufgurad.h"

namespace DFIX
{
	#define MESSAGE_OBJ_LEN 128

	class DATAUNIT_CLASS Message : public FieldValueMap
	{
		friend class MsgFIXStream;
		friend class MsgCopy;

		public:
			enum EmLanType
			{
				emChinese = 0,
				emEnglish,
			};
			enum EmComprsType
			{
				emNone,
				emFast,
				emZlib,
			};
			Message();
			Message(DID did,const char *obj,uint64_t version,int pricedec = 0,int del = 0,int64_t AU = 0) throw (DFixException);
			~Message();
			void tostr(string &s, EmComprsType emType = emNone,int templateid = 0,bool isgenkey = true) throw(DFixException);
			void Decode(const char *buf,size_t buflen,DECODETYPE dt = DT_ALL,int sqlfieldcount = 0,const set<FID> *interestfidset = NULL,set<string> *fileset = NULL,OnField fun = NULL) throw(DFixException);
			
			bool ConvertRepeat2Array(FID rfid,vector<FIELDVALUEMAP > &array);

			inline void SetDid(DID did) {m_did = did;} 
			inline DID GetDid() const{return m_did;}
			inline string GetObj() const{return m_obj;}
			inline string GetKey() const{return m_key;}
			inline uint64_t GetVersion() const{return m_version;}
			inline int GetPriceDec() const{return m_pricedec;}
			inline bool IsDel() const{return m_del==1 ? true : false;}
			inline bool IsBatchDel() const{return m_del==2 ? true : false;}
			inline int64_t GetAU() const{return m_AU;}
			int GetLen() const{return atoi(m_len);}
			void SetLanType(EmLanType lantype){m_lantype = lantype;}
			EmLanType GetLanType(){return m_lantype;}
			void SetBatchDelWhere(const string& sql) {m_sql = sql;}
			inline string GetBatchDelWhere() const {return m_sql;}
		private:
			Message* Copy(const Message &msg);
			Message& operator = (const Message &msg);
			friend ostream& operator<< (ostream &os,Message &m);
		private:
			char m_len[8];
			DID m_did;
			char m_obj[MESSAGE_OBJ_LEN];
			uint64_t m_version;
			string m_key;
			int m_pricedec;
		
			int m_del;
			DECODETYPE m_dtype;

			int64_t m_AU;

			char *m_buf;
			string m_sql;
			string m_fixstr;

			EmLanType m_lantype;
	};

	class DATAUNIT_CLASS MsgCopy
	{
	public:
		MsgCopy(const Message& msg);
		~MsgCopy();
		Message* GetMessage() {return m_pMessage;}
	private:
		Message *m_pMessage;
	};
}
