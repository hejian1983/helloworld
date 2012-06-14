#pragma once
#include <string>
#include <list>
#include <map>
#include "value.h"
#include "logclient.h"
namespace FAST{
	class FASTStream{
		public:
			FASTStream();
			virtual ~FASTStream();
			virtual int read(char* buffer, uint32_t count)=0;
			virtual int write(char* buffer, uint32_t count)=0;
			virtual int beginWriteSegment(int presence_map_size);
			virtual int endWriteSegment();
			virtual bool isEnd()=0;
			bool bufferEmpty();
			int beginReadSegment();
			int endReadSegment();
			int readEntity(Value* value, int presence_index);
			int readRaw(Value* value, int count);
			int writeRaw(Value* value);
			int writeEntity(Value* value, int presence_index);
			bool setBuffer(char* buffer, int buffer_size);
			bool getPresence(int presence_index, bool* presence);
			bool setPresence(int presence_index,bool presence);
			bool encode(Value* raw_value, Value* encoded_value);
			bool decode(Value* encoded_value, Value* raw_value);
			bool setStopBit(Value* value);
			bool encodeInt32(int32_t raw_value, bool nullable, Value* encoded_value);
			bool encodeUint32(uint32_t raw_value, bool nullable, Value* encoded_value);
			bool encodeInt64(int64_t raw_value, bool nullable, Value* encoded_value);
			bool encodeUint64(uint64_t raw_value, bool nullable, Value* encoded_value);
			bool decodeInt32(Value* encoded_value, bool nullable, int32_t* raw_value, bool* is_null);
			bool decodeUint32(Value* encoded_value, bool nullable, uint32_t *raw_value, bool* is_null);
			bool decodeInt64(Value* encoded_value, bool nullable, int64_t* raw_value, bool* is_null);
			bool decodeUint64(Value* encoded_value,bool nullable, uint64_t* raw_value, bool* is_null);
			bool encodeInt128(int128_t raw_value, bool nullable, Value* encoded_value);
			bool decodeInt128(Value* encoded_value, bool nullable, int128_t* raw_value, bool* is_null);
			bool compactPresenceMap(int segment_index);
		protected:
			static const int MAX_NESTED_SEGMENT=10;
			char* buffer;
			int buffer_size;
			int data_size;
			char* cur_field;
			int cur_segment_index;
			Value presence_maps[MAX_NESTED_SEGMENT];
                        int presence_maps_size[MAX_NESTED_SEGMENT];
                       // bool segments_usage[MAX_NESTED_SEGMENT];
                        Value encoded_value;
	};
};

