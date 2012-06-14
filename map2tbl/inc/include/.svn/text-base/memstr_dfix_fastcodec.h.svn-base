#pragma once
#include <string>
namespace FAST{
	class MemStrDFIXCodec{
		public:
			MemStrDFIXCodec();
			~MemStrDFIXCodec();
			bool loadTemplateFile(const char* file_name,bool need_reset=true);
			bool loadTemplate(const char* template_string,bool need_reset=true);
			bool encode(int did,int template_id, const char* fix_buffer, int fix_buffer_size, std::string* fast_buffer, bool need_reset);
			bool decode(const char* fast_buffer, int fast_buffer_size, std::string* fix_buffer,bool need_reset);
			bool clear();
			bool clear(int data_id);
			const char* getLog();
		private:
			void* concrete_codec;
			void* concrete_fixstream_in;
			void* concrete_faststream_in;
			void* concrete_fixstream_out;
			void* concrete_faststream_out;
			void* mutex;
	};
}
