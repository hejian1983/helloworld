#pragma once
#include "myinttypes.h"
#if defined(WIN32)
#define snprintf _snprintf
#define vsnprinf _vsnprintf
#define vsprinf _vsprintf
#define strtoll _strtoi64
#define strtoull _strtoui64
#endif
