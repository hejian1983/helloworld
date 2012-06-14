#pragma once
#include <string>

namespace FAST{
	class StringDFIXCodec{
		public:
			StringDFIXCodec();
			~StringDFIXCodec();
			bool loadTemplateFile(const char* file_name,bool need_reset=true);
                        bool loadTemplate(const char* template_string,bool need_reset=true);
			bool encode(int did,int template_id, std::string* fix_buffer, std::string* fast_buffer, bool need_reset);
			bool decode(std::string* fast_buffer, std::string* fix_buffer, bool need_reset);
			const char* getLog();
		private:
			void* concrete_codec;
			void* concrete_fixstream;
			void* concrete_faststream;
			void* mutex;
	};
}
