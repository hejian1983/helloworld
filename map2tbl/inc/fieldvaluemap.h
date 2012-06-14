#pragma once

#include "fieldvalue.h"
#include "exceptions.h"
#include "fielddef.h"
#include <vector>
#include <list>
#include <map>
#include <strstream>

using namespace std;

namespace DFIX
{
	typedef void (*OnField)(const char*,bool,const char*,size_t);

	struct FVMInfo
	{
		//FVMInfo() : m_flag(false){}

		DECODETYPE m_dtype;

		int m_sqlfieldcount;
		int m_sqlfieldcountread;

		int m_nDepth;
		set<FID> m_interestfidset;
		set<string> *m_fileset;

		OnField m_fun;
		vector<pair<int,int> > m_fidvec;

		/*void Print()
		{
			for(size_t i = 0;i < m_fidvec.size();i++)
			{
				if(m_fidvec[i].second == -1)
					cout << "[" << m_fidvec[i].first << "]";
				else
					cout << "(" << m_fidvec[i].first << "," << m_fidvec[i].second << ")";
			}
			cout << endl;
		}*/
	};

	class DATAUNIT_CLASS FieldValueMap
	{
		public:

			friend class Message;
			friend class MsgFIXStream;
		
			typedef vector<pair<FID,int> > FIDVECTOR;
			typedef map<FID,FieldValue> FIELDVALUEMAP;
			typedef map<FID,vector<FieldValueMap*> > REPEATFIELDVALUEMAP;

			typedef FIELDVALUEMAP::iterator value_iterator;
			typedef FIELDVALUEMAP::const_iterator const_value_iterator;
			typedef REPEATFIELDVALUEMAP::iterator repeat_iterator;
			typedef REPEATFIELDVALUEMAP::const_iterator const_repeat_iterator;
		public:
			FieldValueMap();
			FieldValueMap(const CFieldDict *dict);
			~FieldValueMap();

			static void ReadBufFromStream(istream &is,char *buf,size_t &buflen,char c);
			void Print();

			void SetFieldDict(const CFieldDict *dict);
		
			inline value_iterator vbegin();
			inline const_value_iterator vbegin() const;
			inline repeat_iterator rbegin();
			inline const_repeat_iterator rbegin() const;
			inline value_iterator vend();
			inline const_value_iterator vend() const;
			inline repeat_iterator rend();
			inline const_repeat_iterator rend() const;

			bool GetRepeatCount(FID fid,size_t &count) const;
			inline bool IsRepeat(FID fid) const{
				size_t count;
				return GetRepeatCount(fid,count);
			}
			bool HasField(FID fid) const{
				return m_fieldvaluemap.find(fid) != m_fieldvaluemap.end();
			}
			void GenerateKey(string &str) throw(DFixException);

			FieldValue& operator[](FID fid) throw(DFixException);
			bool GetFieldValue(FID fid,FieldValue **fv);
			FieldValueMap& operator()(FID fid,unsigned int index) throw(DFixException);
			bool GetFieldValueMap(FID fid,unsigned int index,FieldValueMap **fvmap);
			
			friend ostream& operator<< (ostream &os,FieldValueMap &fvmap);
			void tostr(string &os);
			void Decode(istrstream &is,FVMInfo *info) throw(DFixException);
			inline void freeze(bool freeze = true){m_freeze = freeze;}
			inline void WantCache(bool bwantcache = true) {m_bwantcache = bwantcache;}

		private:
			FieldValueMap* Copy(const FieldValueMap& fvp);
			FieldValueMap& operator =(const FieldValueMap &fvp);

		private:
			const CFieldDict *m_dict;

			FID m_delim;//0--代表上一层不是repeat，非0--代表从repeat过来的分界符
			FIELDVALUEMAP m_fieldvaluemap;
			REPEATFIELDVALUEMAP m_repeatfieldvaluemap;
			bool m_readdelimflag;

			bool m_freeze;

		protected:
			bool m_commmessage;//是否是通用报文，加入字段不比较模版
			bool m_bwantcache;//是否需要拷贝内存
	};
}
