#ifndef LOGCLIENT_H
#define LOGCLIENT_H
#include <stdio.h>
#include <stdarg.h>
#define LOG_PLAIN(...)LogClient::instance()->log("",__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__);
#define LOG_DEBUG(...)LogClient::instance()->log("DEBUG",__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__);
#define LOG_INFO(...)LogClient::instance()->log("INFO",__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__);
#define LOG_WARN(...)LogClient::instance()->log("WARN",__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__);
#define LOG_ERROR(...)LogClient::instance()->log("ERROR",__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__);
#define LOG_FATAL(...)LogClient::instance()->log("FATAL",__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__);

/*
#define LOG_DEBUG(message...)LogClient::instance()->log("DEBUG",__FUNCTION__,__FILE__,__LINE__,message);
#define LOG_INFO(message...)LogClient::instance()->log("INFO",__FUNCTION__,__FILE__,__LINE__,message);
#define LOG_WARN(message...)LogClient::instance()->log("WARN",__FUNCTION__,__FILE__,__LINE__,message);
#define LOG_ERROR(message...)LogClient::instance()->log("ERROR",__FUNCTION__,__FILE__,__LINE__,message);
#define LOG_FATAL(message...)LogClient::instance()->log("FATAL",__FUNCTION__,__FILE__,__LINE__,message);
*/
class LogClient{
	public:
		static LogClient* instance();
		bool log(char* level,const char* module,char* file, int line,const char *str,...);
		bool resetHistoryLog();
		const char* getHistoryLog();
	private:
		LogClient();
		static LogClient client;
		char buffer[81920];
		char history[81920];
		int history_len;
};
#endif
