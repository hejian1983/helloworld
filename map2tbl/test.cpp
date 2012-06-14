#include "map2tbl.h"
#include "dfix.h"
#include "fielddef.h"
#include "exceptions.h"
#include "message.h"
#include "fieldvaluemap.h"
#include <sstream>
#include <assert.h>
#include <sys/time.h>
#include "threadrwmutex.h"
#include "datasparser.h"
#include <fstream>
#include "md5.h"
#include <stdio.h>
#include <iostream>
#include <stdarg.h>

using namespace DFIX;
using namespace std;

#define NT_LOG(format, ...) \
	tttsss(format,__VA_ARGS__)

string tttsss(const char *szFmt,...)
{
	char szLogMsg[4096];
	//memset(szLogMsg, 0x0, sizeof(szLogMsg));

	va_list ap;
	va_start(ap, szFmt);
	vsnprintf(szLogMsg, 4096, szFmt, ap);
	va_end(ap);
	//s.append(szLogMsg);
	return string(szLogMsg);
}

void OnField2(const char *v,bool b,const char *str,size_t strlen)
{
	cout << "isprice " << b << " " << v << " = " << string(str,strlen) << endl;
}

int main(int , char* )
{
	CFieldDefMan &man = CFieldDefMan::Instance();
	Message m;
	bool flg=false;
	try
	{
		if(!man.LoadFromXml("./XML/9003.xml",11))
		{
			perror("load XML error!");
			exit(1);
		}
		const CFieldDef *def;
		man.GetDataDefFromDID(9003,def);
	}
	catch(DFixException& e)
	{
		std::cerr << e.detail << ' ' << e.data << " type= " << e.type << endl;
	}

	try
	{
		CFieldDefMan::Instance();

		ifstream is("./DZD/1003080353530258219.dzd",ios_base::binary);
		char buf[10240];
		is.seekg(0,ios_base::end);
		int len = is.tellg();
		is.seekg(0,ios_base::beg);
		is.read(buf,len);
		m.Decode(buf,len);
		cout <<"C++"<<endl;
		cout <<"********************************************************"<<endl;
		string s;
		m.tostr(s);
		cout << s << endl;
		cout <<"********************************************************"<<endl;
	}
	catch(DFixException& e)
	{
		std::cerr << e.detail << ' ' << e.data << " type= " << e.type << endl;
	}
	try
	{
		cout <<endl<<endl<<"LUA:"<<endl;
		cout <<"********************************************************"<<endl;
		flg = map2tbl(m, "./showfield.lua", "message");
		cout <<"********************************************************"<<endl;
	}
	catch(DFixException& e)
	{
		std::cerr << e.detail << ' ' << e.data << " type= " << e.type << endl;
	}
	cout<<"Return code from lua:"<<flg<<endl;
	return 0;
}
