#pragma once
#include <string>
#include "common.h"
#include "logclient.h"
namespace FAST{
	struct decimal_t{
		decimal_t operator+(decimal_t value);
		decimal_t operator-(decimal_t value);
		int32_t exponent;
		int64_t mantissa;
	};

	struct string_t{
		char* data;
		uint32_t len;
	};
	#define BINARY_SIZE_MAX 1073741824U
	struct binary_t{
		enum {
			R=0,
			RZ,
			RF,
			RFZ,
			INVALID
		};
		char* data;
		uint32_t size;
		uint32_t type;
	};
	struct uint128_t;
	struct int128_t{
		const int128_t& operator=(int32_t value);
		const int128_t& operator=(uint32_t value);
		const int128_t& operator=(int64_t value);
		const int128_t& operator=(uint64_t value);
		const int128_t& operator=(uint128_t value);
		int128_t operator+(int32_t value);
		int128_t operator+(uint32_t value);
		int128_t operator+(int64_t value);
		int128_t operator+(uint64_t value);
		int128_t operator+(int128_t value);
		int128_t operator-(int32_t value);
		int128_t operator-(uint32_t value);
		int128_t operator-(int64_t value);
		int128_t operator-(uint64_t value);
		int128_t operator-(int128_t value);
		int128_t operator++(int);
		int128_t operator--(int);
		int128_t operator>>(int);
		int128_t operator<<(int);
		int128_t operator&(int64_t value);
		int128_t operator&(int128_t value);
		int128_t operator&(uint128_t value);
		int128_t operator|(int64_t value);
		int128_t operator|(int128_t value);
		int128_t operator|(uint128_t value);
		int128_t operator~();
		bool operator<(int32_t value);
		bool operator<=(int32_t value);
		bool operator>(int32_t value);
		bool operator>=(int32_t value);
		bool operator<(const int128_t& value);
		bool operator<=(const int128_t& value);
		bool operator>(const int128_t& value);
		bool operator>=(const int128_t& value);
		bool operator==(const int128_t& value);
		bool operator==(int32_t value);
		bool operator!=(const int128_t& value);
		bool operator!=(int32_t value);
		uint64_t low;
		int64_t high;
	};

	struct uint128_t{
		const uint128_t& operator=(int32_t value);
		const uint128_t& operator=(uint32_t value);
		const uint128_t& operator=(int64_t value);
		const uint128_t& operator=(uint64_t value);
		const uint128_t& operator=(int128_t value);
		uint128_t operator+(int32_t value);
		uint128_t operator+(uint32_t value);
		uint128_t operator+(int64_t value);
		uint128_t operator+(uint64_t value);
		uint128_t operator+(uint128_t value);
		uint128_t operator-(int32_t value);
		uint128_t operator-(uint32_t value);
		uint128_t operator-(int64_t value);
		uint128_t operator-(uint64_t value);
		uint128_t operator-(uint128_t value);
		uint128_t operator++(int);
		uint128_t operator--(int);
		uint128_t operator>>(int);
		uint128_t operator<<(int);
		uint128_t operator&(int64_t value);
		uint128_t operator&(uint128_t value);
		uint128_t operator&(int128_t value);
		uint128_t operator|(int64_t value);
		uint128_t operator|(uint128_t value);
		uint128_t operator|(int128_t value);
		uint128_t operator~();
		bool operator<(int32_t value);
		bool operator<=(int32_t value);
		bool operator>(int32_t value);
		bool operator>=(int32_t value);
		bool operator<(const uint128_t& value);
		bool operator<=(const uint128_t& value);
		bool operator>(const uint128_t& value);
		bool operator>=(const uint128_t& value);
		bool operator==(const uint128_t& value);
		bool operator==(int32_t value);
		bool operator!=(const uint128_t& value);
		bool operator!=(int32_t value);
		uint64_t low;
		uint64_t high;
	};


	struct Value{
		Value();
		~Value();
		enum EXIST_TYPE{
			FAST_NONE0_EXIST,//need set pmap to 0, only used in fast and operator
			FAST_NONE1_EXIST,//need set pmap to 1, only used in fast and operator
			NULL_EXIST,//need set pmap to 1
			NORMAL_EXIST,//need set pmap to 1
		};
		enum VALUE_TYPE{
			NONE_T,
			INT32_T,
			UINT32_T,
			INT64_T,
			UINT64_T,
			INT128_T,
			FLOAT_T,
			DOUBLE_T,
			DECIMAL_T,
			STRING_T,
			BINARY_T,
			RAW_T
		};
		bool nullable;
		int type;
		int bak_type;
		int exist_type;
		bool fast_need_pmap_bit;
		bool fast_need_store;
		union {
			int32_t int32_value;
			uint32_t uint32_value;
			int64_t int64_value;
			uint64_t uint64_value;
			int128_t int128_value;
			float float_value;
			double double_value;
			decimal_t decimal_value;
			string_t string_value;
			binary_t binary_value;
		}generic_value;
		uint32_t integer_decimal;
		char* buffer;
		uint32_t buffer_size;
		
		bool setInt32(int32_t value,bool nullable, uint32_t decimal=0);
		bool setInt32Str(const char* value,bool nullable,uint32_t decimal=0);
		bool setUint32(uint32_t value,bool nullable, uint32_t decimal=0);
		bool setUint32Str(const char* value,bool nullable,uint32_t decimal=0);
		bool setInt64(int64_t value,bool nullable,uint32_t decimal=0);
		bool setInt64Str(const char* value,bool nullable,uint32_t decimal=0);
		bool setUint64(uint64_t value,bool nullable,uint32_t decimal=0);
		bool setUint64Str(const char* value,bool nullable,uint32_t decimal=0);
		bool setInt128(int128_t value,bool nullable);
		bool setFloat(float value,bool nullable);
		bool setFloatStr(const char* value,bool nullable);
		bool setDouble(double value,bool nullable);
		bool setDoubleStr(const char* value,bool nullable);
		bool setDecimal(float value, bool nullable);
		bool setDecimal(double value, bool nullable);
		bool setDecimal(int64_t mantissa, int32_t exponent, bool nullable);
		bool setDecimal(decimal_t value, bool nullable);
		bool setDecimalStr(const char* value, bool nullable);
		bool setString(const char* value,bool nullable);
		bool setString(const char* value, int len,bool nullable);
		bool setStringInt32(int32_t value,bool nullable, uint32_t decimal=0);
		bool setStringInt64(int64_t value,bool nullable, uint32_t decimal=0);
		bool setStringUint32(uint32_t value,bool nullable, uint32_t decimal=0);
		bool setStringUint64(uint64_t value,bool nullable, uint32_t decimal=0);
		bool setStringDecimal(decimal_t value, bool nullable);
		bool setBinary(const char* value, uint32_t size,bool nullable);
		bool setBinary(const char* value, uint32_t size, uint32_t head_padding, uint32_t tail_padding,bool nullable);
		bool appendBinary(const char* value, uint32_t size);
		bool setRaw(const char* value, uint32_t size,bool nullable);
		bool setRaw(const char* value1, uint32_t size1, const char* value2, uint32_t size2, bool nullable);
		bool setRawNoInit(const char* value, uint32_t size,bool nullable);
		bool setRaw(const char* value, uint32_t size, uint32_t head_padding, uint32_t tail_padding,bool nullable);
		bool appendRaw(const char* value, uint32_t size);
		bool appendRaw(const char* value1, uint32_t size1,const char* value2, uint32_t size2);
		bool convert(int type);
		bool convert(int type,bool nullable);
		Value& assignWithSwapBuffer(Value& value);

		const Value& operator=(int32_t value);
		const Value& operator=(uint32_t value);
		const Value& operator=(int64_t value);
		const Value& operator=(uint64_t value);
		const Value& operator=(const char*  value);
		const Value& operator=(float value);
		const Value& operator=(double value);
		const Value& operator=(const Value& value);
		bool operator==(const Value& value);
		bool operator!=(const Value& value);
	};
};

