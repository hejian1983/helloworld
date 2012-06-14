#pragma once
#include <string>
#include <list>
#include <map>
#include "value.h"
#include "fast_stream.h"
#include "logclient.h"
namespace FAST{
	template<class VALUE_TYPE>
	struct Dictionary{
		public:
		Dictionary(){
			memset(array1_values,0,sizeof(array1_values));
			//memset(array2_keys,0,sizeof(array2_keys));
			//has_map_value=false;
		}

		VALUE_TYPE* get(int key){
			if(key>=0&&key<ARRAY1_SIZE)
				return array1_values[key];
			else{
				/*
				for(int i=0;i<ARRAY2_SIZE;i++){
					if(array2_keys[i]==key)
						return array2_values[i];
				}
				*/
				//if(has_map_value)
				return map_values[key];
				//return NULL;
			}
		}

		void set(int key, VALUE_TYPE* value){
			if(key>=0&&key<ARRAY1_SIZE)
				array1_values[key]=value;
			else{
				/*
				int first_free=-1;
				for(int i=0;i<ARRAY2_SIZE;i++){
					if(array2_keys[i]==0){
						if(first_free<0)
							first_free=i;
					}
					else if(array2_keys[i]==key){
						if(value==NULL)
							array2_keys[i]=0;
						else
							array2_values[i]=value;
						return;
					}
				}
				if(first_free>=0&&value!=NULL){
					array2_keys[first_free]=key;
					array2_values[first_free]=value;
					return;
				}
				*/
				map_values[key]=value;
				//has_map_value=true;
			}
		}

		void clear(){
			memset(array1_values,0,sizeof(array1_values));
			//memset(array2_keys,0,sizeof(array2_keys));
			//if(has_map_value)
			map_values.clear();
		}
		private:
			const static int ARRAY1_SIZE=10240;
			//const static int ARRAY2_SIZE=16;
			VALUE_TYPE* array1_values[ARRAY1_SIZE];
			//int array2_keys[ARRAY2_SIZE];
			//VALUE_TYPE* array2_values[ARRAY2_SIZE];
			std::map<int,VALUE_TYPE*> map_values;
			//bool has_map_value;
	};

	class Context;

	class Instruction{
		public:
			friend class Codec;
			enum TYPE{
				NONE,
				TEMPLATEREF,
				FIELD_START,
				VALUE_FIELD_START,
				INT32,
				UINT32,
				INT64,
				UINT64,
				DECIMAL,
				ASCIISTRING,
				UNICODESTRING,
				BYTEVECTOR,
				LENGTH,
				PRICEDECIMAL,
				VALUE_FIELD_END,
				EXPONENT,
				MANTISSA,
				SEQUENCE,
				GROUP,
				MESSAGE,
				FIELD_END,
				MESSAGE_DELIMITER,
				SEQUENCE_LOOP_DELIMITER
			};
			static const char* type_str[];
			Instruction();
			virtual ~Instruction();
			virtual int encode()=0;
			virtual int decode()=0;
			bool addChild(Instruction* child);
			bool delChild(Instruction* child);
			Instruction* getParent();
			Instruction* getFirstChild();
			Instruction* getLastChild();
			Instruction* getPrevSibling();
			Instruction* getNextSibling();
			uint32_t getChildNum();
			uint32_t getType();
			uint32_t getId();
			bool setId(uint32_t id);
			const std::string& getName();
			bool setName(std::string name);
			bool setContext(Context* context);
			bool setEnable(bool enable, bool cascade);
			bool isEnable();
			virtual bool dump();
			static bool strToId(char* id_str,uint32_t* id);
			static bool strToId(char* id_str,int len,uint32_t* id);
			static bool idToStr(uint32_t id, char* id_str, int* len);
		protected:
			uint32_t type;
			std::string name;
			uint32_t id;
			Instruction* parent;
			Instruction* first_child;
			Instruction* last_child;
			Instruction* prev_sibling;
			Instruction* next_sibling;
			uint32_t child_num;
			Context* context;
			bool enable;
	};
	
	class Operator{
		public:
			enum TYPE{
				NONE,
				DEFAULT,
				CONSTANT,
				COPY,
				DELTA,
				INCREMENT,
				TAIL
			};
			static const char* type_str[];
			Operator();
			virtual ~Operator(){};
			virtual bool beforeDecode(Value* optimized_value)=0;
			virtual	bool encode(int id, Value* basic_value, Value* optimized_value)=0;
			virtual	bool decode(int id, Value* optimized_value, Value* basic_value)=0;
			bool initDefault(int type,bool nullable,uint32_t decimal);

			int type;
			Value init_value;
			Dictionary<Value>* dictionary;
			int key;
	};

	class FieldInstruction:public Instruction{
		public:
			FieldInstruction();
			~FieldInstruction();
			bool initPresence();
			bool dump();
			bool updateBasicValue();
			bool inited;
			Operator* field_operator;
			int presence_index;
			bool nullable;
			int segment_size;
			Dictionary<Value>* dictionary;
			bool raw_value_set;
			Value raw_value;
			Value basic_values[2];
			Value* basic_value;
			int selector;
			Value optimized_value;
			static const int MAX_NESTED_SEGMENT=10;
			static int presence_slot[MAX_NESTED_SEGMENT];
			static int cur_segment_index;
	};
	
	class MessageInstruction:public FieldInstruction{
		public:
			enum REF_TYPE{
				DIRECT,
				STATIC,
				DYNAMIC
			};
			MessageInstruction();
			int encode();
			int decode();
			bool setReference(int ref_type);
			bool setInstruction(int id, Instruction* instruction);
			Instruction* getInstruction(int id);
			bool setNeedReload(bool need_reload);
			bool needReload();

		private:
			std::map<int,Instruction*> instructions;
			int ref_type;
			bool need_reload;
	};

	class FIXStream{
		public:
			FIXStream();
			virtual ~FIXStream();
			virtual bool isEnd()=0;
			virtual int readEntity(uint32_t *tag, Value* value, uint32_t count=0);
			virtual int writeEntity(uint32_t tag, Value* value,uint32_t instruction_type);
			virtual int read(char* buffer, uint32_t count)=0;
			virtual int write(char* buffer, uint32_t count)=0;
			bool setDelimiter(char delimiter);
			bool setBuffer(char* buffer, uint32_t buffer_size);
			bool bufferEmpty();
		protected:
			char* buffer;
			uint32_t buffer_size;
			uint32_t data_size;
			char* cur_field;
			char delimiter;
	};

	class FIXStreamHelper{
		public:
			FIXStreamHelper();
			void setFIXStream(FIXStream* fix_stream);
			int read(FieldInstruction* field);
			int write(FieldInstruction* field, Value* value=NULL);
			int writeEntity(uint32_t tag, Value* value,uint32_t instruction_type);
			bool isEnd();
			uint32_t getPaddingTag();
			uint32_t getReadCount();
			uint32_t getConsumeCount();
		private:
			FIXStream* fix_stream;
			uint32_t padding_tag;
			Value padding_value;
			uint32_t read_count;
			uint32_t consume_count;
	};
	
	class Context{
		public:
			Context();
			~Context();
			bool reset();
			std::map<int,MessageInstruction*> templates;
			MessageInstruction* root_template;
			MessageInstruction* current_template;
			std::map<int,FieldInstruction*> application_types;
			FieldInstruction* root_application_type;
			FieldInstruction* current_application_type;
			//std::map<std::string,Dictionary<Value>*> user_dictionaries;
			Dictionary<Value>* global_dictionary;
			FIXStreamHelper* fix_stream_helper;
			FASTStream* fast_stream;
			//int errno;
	};

	class Codec{
		public:
			Codec();
			virtual ~Codec();
			virtual bool loadTemplate(const char* template_string,bool need_reset)=0;
			bool encode(int template_id, FIXStream* fix_stream, FASTStream* fast_stream, bool need_reset);
			bool decode(int template_id, FASTStream* fast_stream, FIXStream* fix_stream, bool need_reset);
			int getErrno();
			const char* getErrnoStr();
			const char* getErrnoStr(int errno);
			bool dump();
			bool dump(int template_id);
		protected:
			bool initTemplate();
			bool dump(Instruction* instruction, int level);
			bool reset();
			Context context;
			FIXStreamHelper fix_stream_helper;
			bool template_inited;
	};

	enum CODEC_ERROR{
		ERR_S1,
		ERR_S2,
		ERR_S3,
		ERR_S4,
		ERR_S5,
		ERR_D1,
		ERR_D2,
		ERR_D3,
		ERR_D4,
		ERR_D5,
		ERR_D6,
		ERR_D7,
		ERR_D8,
		ERR_D9,
		ERR_D10,
		ERR_D11,
		ERR_D12,
		ERR_R1,
		ERR_R2,
		ERR_R3,
		ERR_R4,
		ERR_R5,
		ERR_R6,
		ERR_R7,
		ERR_R8,
		ERR_R9
	};

	extern const char* error_str[];
	class Guard{
		public:
			Guard(void* mutex);
			~Guard();
		private:
        		void* mutex;
	};

};

