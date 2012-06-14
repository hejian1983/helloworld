#pragma once

#include "dfix.h"
#include <utility>
#include <math.h>
#include <string>
#include "exceptions.h"

using namespace std;

namespace DFIX
{
	struct FieldValue
	{
		FIELDTYPE m_vtype;
		FID m_fid;
		pair<const char*,int> m_data;
		string m_data2;

		bool m_bcopymem;
		bool m_rawfile;
		bool m_zlib;
		inline void SetRF(bool rawfile = true){
			m_rawfile = rawfile;
		}
		inline void SetZlib(bool zlib = true){
			m_zlib = zlib;
		}
		inline bool IsRF() const {return m_rawfile;}
		inline bool IsZlib() const {return m_zlib;}
		FieldValue()
		{
			m_bcopymem = false;	
			m_rawfile = false;
			m_zlib = false;
			m_data.first = NULL;
			m_data.second = 0;
		}
		template<class T>
		FieldValue(FIELDTYPE t,T i,bool bcopymem)
		{
			m_bcopymem = bcopymem;
			m_rawfile = false;
			m_zlib = false;
			m_data.first = NULL;
			m_data.second = 0;
			m_vtype = t;

			*this = i;
		}
		void Copy2(const FieldValue& fv)
		{
			m_bcopymem	=true;
			m_vtype		=fv.m_vtype;
			m_fid		=fv.m_fid;
			m_rawfile	=fv.m_rawfile;
			m_zlib		=fv.m_zlib;
			if (!fv.m_bcopymem)
			{
				m_data2.assign(fv.m_data.first, fv.m_data.second);
			}
			else
			{
				m_data2 = fv.m_data2;
			}
		}
		inline void SetFID(FID fid){
			m_fid = fid;
		}
		inline void SetType(FIELDTYPE t){
			m_vtype = t;
		}
		inline FIELDTYPE GetType() const{
			return m_vtype;
		}
		FieldValue& operator=(const char *str) throw (DFixException)
		{
			if(!m_bcopymem)
			{
				if(m_vtype == Raw_Field)
				{
					int len = strlen(str);
					/*if(len > MAXRAWDATALEN)
						throw DFixException("raw data too long","",len);*/
					m_data.first = str;
					m_data.second = len;
				}
				else
				{
					m_data.first = str;
					m_data.second = -1;
				}
			}
			else
			{
				m_data2.assign(str);
			}

			return *this;
		}
		FieldValue& operator=(const pair<const char*,size_t> &p) throw (DFixException)
		{
			//if(m_vtype == Raw_Field && p.second > MAXRAWDATALEN)
			//	throw DFixException("raw data too long","",p.second);

			if(!m_bcopymem)
			{
				m_data = p;
			}
			else
			{
				m_data2.assign(p.first,p.second);
			}

			return *this;
		}
		void GetData(const char *&data,size_t &datalen) const
		{
			if(!m_bcopymem)
			{
				data = m_data.first;
				if(m_data.second == -1)
					datalen = strlen(m_data.first);
				else
					datalen = m_data.second;
			}
			else
			{
				data = m_data2.data();
				datalen = m_data2.length();
			}
		}
		void GetData(string &str) const 
		{
			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					str.assign(m_data.first);
				else
					str.assign(m_data.first,m_data.second);
			}
			else
			{
				str.assign(m_data2);
			}
		}
		bool GetString(string &str) const
		{
			if(m_vtype != String_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					str.assign(m_data.first);
				else
					str.assign(m_data.first,m_data.second);
			}
			else
			{
				str.assign(m_data2);
			}

			return true;
		}
		bool GetRaw(string &str) const
		{
			if(m_vtype != Raw_Field)
				return false;

			if(!m_bcopymem)
			{
				str.assign(m_data.first,m_data.second);
			}
			else
			{
				str.assign(m_data2);
			}

			return true;
		}
		bool GetRaw(const char *&buf,size_t &buflen) const
		{
			if(m_vtype != Raw_Field)
				return false;

			if(!m_bcopymem)
			{
				buf = m_data.first;
				buflen = m_data.second;
			}
			else
			{
				buf = m_data2.data();
				buflen = m_data2.length();
			}

			return true;
		}
		bool GetUrl(string &url) const
		{
			if(m_vtype != Url_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					url.assign(m_data.first);
				else
					url.assign(m_data.first,m_data.second);
			}
			else
			{
				url.assign(m_data2);
			}

			return true;
		}
		bool GetTime(int64_t &i) const
		{
			if(m_vtype != Time_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
#ifdef _MSC_VER
					i = _atoi64(m_data.first);
#else
					i = atoll(m_data.first);
#endif
				else
				{
					string str(m_data.first,m_data.second);
#ifdef _MSC_VER
					i = _atoi64(str.c_str());
#else
					i = atoll(str.c_str());
#endif
				}
			}
			else
			{
#ifdef _MSC_VER
				i = _atoi64(m_data2.c_str());
#else
				i = atoll(m_data2.c_str());
#endif	
			}

			return true;
		}
		bool GetPrice(float &price) const
		{
			if(m_vtype != Price_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					price = (float)atof(m_data.first);
				else
				{
					string str(m_data.first,m_data.second);
					price = (float)atof(str.c_str());
				}
			}
			else
			{
				price = (float)atof(m_data2.c_str());
			}

			return true;
		}
		bool GetMoney(double &money) const
		{
			if(m_vtype != Money_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					money = atof(m_data.first);
				else
				{
					string str(m_data.first,m_data.second);
					money = atof(str.c_str());
				}
			}
			else
			{
				money = atof(m_data2.c_str());
			}

			return true;
		}
		bool GetUint32(uint32_t &i) const
		{
			if(m_vtype != Uint_Field && m_vtype != UInt8_Field && m_vtype != UInt16_Field && m_vtype != BIT1_Field && m_vtype != BIT2_Field && m_vtype != BIT3_Field && m_vtype != BIT4_Field && m_vtype != BIT5_Field && m_vtype != BIT6_Field && m_vtype != BIT7_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					i = strtoul(m_data.first,NULL,10);
				else
				{
					string str(m_data.first,m_data.second);
					i = strtoul(str.c_str(),NULL,10);
				}
			}
			else
			{
				i = strtoul(m_data2.c_str(),NULL,10);
			}

			return true;
		}
		bool GetInt32(int32_t &i) const
		{
			if(m_vtype != Int_Field && m_vtype != Int8_Field && m_vtype != Int16_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					i = atoi(m_data.first);
				else
				{
					string str(m_data.first,m_data.second);
					i = atoi(str.c_str());
				}
			}
			else
			{
				i = atoi(m_data2.c_str());
			}

			return true;
		}
		bool GetStrenum(uint32_t &i) const
		{
			if(m_vtype != StrEnum_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					i = strtoul(m_data.first,NULL,10);
				else
				{
					string str(m_data.first,m_data.second);
					i = strtoul(str.c_str(),NULL,10);
				}
			}
			else
			{
				i = strtoul(m_data2.c_str(),NULL,10);
			}

			return true;
		}
		bool GetUint64(uint64_t &i) const
		{
			if(m_vtype != Uint64_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
#ifdef _MSC_VER
					i = _strtoui64(m_data.first,NULL,10);
#else
					i = atoll(m_data.first);
#endif
				else
				{
					string str(m_data.first,m_data.second);
#ifdef _MSC_VER
					i = _strtoui64(str.c_str(),NULL,10);
#else
					i = atoll(m_data.first);
#endif
				}
			}
			else
			{
#ifdef _MSC_VER
				i = _strtoui64(m_data2.c_str(),NULL,10);
#else
				i = atoll(m_data2.c_str());
#endif
			}

			return true;
		}
		bool GetInt64(int64_t &i) const
		{
			if(m_vtype != Int64_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
#ifdef _MSC_VER
					i = _atoi64(m_data.first);
#else
					i = atoll(m_data.first);
#endif
				else
				{
					string str(m_data.first,m_data.second);
#ifdef _MSC_VER
					i = _atoi64(str.c_str());
#else
					i = atoll(str.c_str());
#endif
				}
			}
			else
			{
#ifdef _MSC_VER
				i = _atoi64(m_data2.c_str());
#else
				i = atoll(m_data2.c_str());
#endif
			}

			return true;
		}
		bool GetFloat(float &f) const
		{
			if(m_vtype != Float_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					f = (float)atof(m_data.first);
				else
				{
					string str(m_data.first,m_data.second);
					f = (float)atof(str.c_str());
				}
			}
			else
			{
				f = (float)atof(m_data2.c_str());
			}

			return true;
		}
		bool GetDouble(double &d) const
		{
			if(m_vtype != Double_Field)
				return false;

			if(!m_bcopymem)
			{
				if(m_data.second == -1)
					d = atof(m_data.first);
				else
				{
					string str(m_data.first,m_data.second);
					d = atof(str.c_str());
				}
			}
			else
			{
				d = atof(m_data2.c_str());
			}

			return true;
		}
		friend ostream& operator<< (ostream &os,FieldValue &fv)
		{
			switch(fv.GetType())
			{
			case Raw_Field:
				{
					if(!fv.m_bcopymem)
					{
						os << 'R' << fv.m_fid << '=' << fv.m_data.second << dendl << fv.m_fid << '=';
						os.write(fv.m_data.first,fv.m_data.second)<< dendl;
					}
					else
					{
						os << 'R' << fv.m_fid << '=' << fv.m_data2.length() << dendl << fv.m_fid << '=';
						os.write(fv.m_data2.data(),fv.m_data2.length())<< dendl;
					}
				}
				break;
			default:
				{
					os << fv.m_fid << '=';

					if(!fv.m_bcopymem)
					{
						if(fv.m_data.second == -1)
							os << fv.m_data.first << dendl;
						else
							os.write(fv.m_data.first,fv.m_data.second)<< dendl;
					}
					else
					{
						os.write(fv.m_data2.data(),fv.m_data2.length())<< dendl;
					}
				}
				break;
			}
			return os;
		}
		void tostr(string& os)
		{
			char fid[64];
			sprintf_s(fid,"%d",m_fid);
			
			switch(GetType())
			{
			case Raw_Field:
				{
					if(!m_bcopymem)
					{
						char value[64];
						sprintf_s(value,"%d",m_data.second);

						if(!m_rawfile)
						{
							os.append(m_zlib ? "RZ" : "R");
							os.append(fid);
							os.append("=");
							os.append(value);
							os += SEPERATE;
							os.append(fid);
							os.append("=");
							os.append(m_data.first,m_data.second);
							os += SEPERATE;
						}
						else
						{
							os.append(m_zlib ? "RFZ" : "RF");
							os.append(fid);
							os.append("=");
							if(m_data.second == -1)
								os.append(m_data.first);
							else
								os.append(m_data.first,m_data.second);

							os += SEPERATE;
						}
					}
					else
					{
						char value[64];
						sprintf_s(value,"%d",(int)m_data2.length());

						if(!m_rawfile)
						{
							os.append(m_zlib ? "RZ" : "R");
							os.append(fid);
							os.append("=");
							os.append(value);
							os += SEPERATE;
							os.append(fid);
							os.append("=");
							os.append(m_data2);
							os += SEPERATE;
						}
						else
						{
							os.append(m_zlib ? "RFZ" : "RF");
							os.append(fid);
							os.append("=");
							os.append(m_data2);
							os += SEPERATE;
						}
					}
				}
				break;
			default:
				{
					if(!m_bcopymem)
					{
						os.append(fid);
						os.append("=");
						if(m_data.second == -1)
							os.append(m_data.first);
						else
							os.append(m_data.first,m_data.second);
						os += SEPERATE;
					}
					else
					{
						os.append(fid);
						os.append("=");
						os.append(m_data2);
						os += SEPERATE;
					}
				}
				break;
			}
		}
	};
}
