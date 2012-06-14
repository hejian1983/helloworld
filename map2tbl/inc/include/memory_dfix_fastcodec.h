#pragma once

namespace FAST{
	class MemoryDFIXCodec{
		public:
			MemoryDFIXCodec();
			~MemoryDFIXCodec();
			bool loadTemplateFile(const char* file_name,bool need_reset=true);
                        bool loadTemplate(const char* template_string,bool need_reset=true);
			bool encode(int did,int template_id, const char* fix_buffer, int fix_buffer_size, char* fast_buffer, int* fast_buffer_size, bool need_reset);
			bool decode(const char* fast_buffer, int fast_buffer_size, char* fix_buffer, int* fix_buffer_size, bool need_reset);
			const char* getLog();
		private:
			void* concrete_codec;
			void* concrete_fixstream;
			void* concrete_faststream;
			void* mutex;
	};
}
