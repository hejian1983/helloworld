#include "message.h"
#include "dfix.h"
#include "exceptions.h"
#include "fieldvaluemap.h"
#include <string>
#include <assert.h>
extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}
#include <iostream>
#include "map2tbl.h"
namespace DFIX
{
	void settable(lua_State *L, FieldValueMap &m, int fid)
	{
		if(m.HasField(fid)){
			int type = m[fid].GetType();
			string str;
			int32_t i32 = 0;
			uint32_t ui32 = 0;
			int64_t i64 = 0;
			uint64_t ui64 = 0;
			float f = 0;
			double d = 0;
//			cout<<fid<<":";
			lua_pushnumber(L, fid);
			switch(type) 
			{
				case String_Field:
					m[fid].GetString(str);
//					cout<<str;
					lua_pushstring(L, str.c_str());
					break;
				case StrEnum_Field:
					m[fid].GetStrenum(ui32);
//					cout<<ui32;
					lua_pushnumber(L, ui32);
					break;
				case Int_Field:
				case Int8_Field:
				case Int16_Field:
					m[fid].GetInt32(i32);
//					cout<<i32;
					lua_pushnumber(L, i32);
					break;
				case Int64_Field:
					m[fid].GetInt64(i64);
//					cout<<i64;
					lua_pushnumber(L, i64);
					break;
				case Uint_Field:
				case UInt8_Field:
				case UInt16_Field:
				case BIT1_Field:
				case BIT2_Field:
				case BIT3_Field:
				case BIT4_Field:
				case BIT5_Field:
				case BIT6_Field:
				case BIT7_Field:
					m[fid].GetUint32(ui32);
//					cout<<ui32;
					lua_pushnumber(L, ui32);
					break;
				case Uint64_Field:
					m[fid].GetUint64(ui64);
//					cout<<ui64;
					lua_pushnumber(L, ui64);
					break;
				case Float_Field:
					m[fid].GetFloat(f);
//					cout<<f;
					lua_pushnumber(L, f);
					break;
				case Double_Field:
					m[fid].GetDouble(d);
//					cout<<d;
					lua_pushnumber(L, d);
					break;
				case Price_Field:
					m[fid].GetPrice(f);
//					cout<<f;
					lua_pushnumber(L, f);
					break;
				case Money_Field:
					m[fid].GetMoney(d);
//					cout<<d;
					lua_pushnumber(L, d);
					break;
				case Raw_Field:
					m[fid].GetRaw(str);
//					cout<<str;
					lua_pushstring(L, str.c_str());
					break;
				case Repeat_Field:
					break;
				case Url_Field:
					m[fid].GetUrl(str);
//					cout<<str;
					lua_pushstring(L, str.c_str());
					break;
				case Time_Field:
					m[fid].GetTime(i64);
//					cout<<i64;
					lua_pushnumber(L, i64);
					break;
			}
//			cout<<endl;
			lua_settable(L, -3);
		}
	}//settable;

	void kv2t(lua_State *L, FieldValueMap &m, const CFieldDict *dict) 	{
		CFieldDict::fconst_iterator fit;

		assert(dict);
		for (fit = dict->fbegin();fit != dict->fend();fit++)
		{
			const FIELD_ATTR &fa = fit->second;
			if (dict->IsRepeat(fa.m_fid))
			{
				const CFieldDict *dict2;
				size_t rn = 0;
				m.GetRepeatCount(fa.m_fid, rn);

				lua_pushnumber(L, fa.m_fid);
				lua_pushnumber(L, rn); 
				lua_settable(L, -3);

				if (dict->GetRepeat(fa.m_fid, dict2))
				{
//					cout<<fa.m_fid<<":"<<rn<<endl;
					for(unsigned int ri = 0; ri < rn; ri++)
					{
						char idx[128];
						sprintf(idx, "%d,%d", fa.m_fid, ri); 
						lua_pushstring(L, idx);
						lua_newtable(L);
						kv2t(L, m(fa.m_fid, ri), dict2);
						lua_settable(L, -3);
					}
				}
			}
			else
			{
				settable(L, m, fa.m_fid);
			}
		}	
	}//kv2t;
	bool map2tbl(Message &m, const char *luafile, const char *tblname) throw (DFixException)
	{
		unsigned int did = m.GetDid();
		const CFieldDef *def;
		if(!CFieldDefMan::Instance().GetDataDefFromDID(did, def))
			throw DFixException("did error","did doesn't exit",did);
		lua_State *L = luaL_newstate();
		assert(L);
		luaL_openlibs(L);
		
		assert(luafile);
		luaL_loadfile(L, luafile);
		lua_newtable(L);

		assert(def);
		kv2t(L, m, def);

		assert(tblname);
		lua_setglobal(L,tblname);
		lua_pcall(L, 0, 1, 0);
		bool flg = lua_toboolean(L, -1);
		lua_close(L);
		return flg;
	}//map2tbl;	
}
