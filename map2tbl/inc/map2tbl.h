#pragma once
extern "C"{
#include <lua.h>
}
#include "message.h"
#include "exceptions.h"
#include "dfix.h"
#include "fieldvaluemap.h"
namespace DFIX
{
	bool map2tbl(Message &, const char *, const char *) throw (DFixException);
}
