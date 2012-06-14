#pragma once
#include <string>
#include <vector>
#include "./include/fast_codec.h"

using namespace std;
using namespace FAST;

namespace DFIX
{
	class FieldValueMap;
	class Message;
	struct FVMInfo;
	struct FieldValue;

	class MsgFIXStream : public FIXStream
	{
	public:
		struct MFSDecodeInfo
		{
			uint32_t tag;
			int count;
			unsigned int index;
			FieldValueMap *pfvm;
		};
		struct MFSEncodeInfo
		{
			uint32_t tag;
			int rcount;
			int curfid;
			unsigned int index;			
			vector<int> fcount;
			FieldValueMap *pfvm;
		};

		MsgFIXStream();
		virtual ~MsgFIXStream();
		virtual bool isEnd();
		virtual int readEntity(uint32_t *tag, Value* value, uint32_t count=0);
		virtual int writeEntity(uint32_t tag, Value* value, uint32_t instruction_type);
		virtual int read(char* buffer, uint32_t count);
		virtual int write(char* buffer, uint32_t count);

		bool SetDecodeInfo(Message* message, FVMInfo *info);
		bool SetEncodeInfo(Message* message);

	protected:
		int FillMessageValue(FieldValueMap& fvm, uint32_t tag, Value* value, uint32_t instruction_type);
		int GetMessageValue(FieldValueMap& fvm, vector<int>& vctFID, uint32_t *tag, Value* value);
		FieldValueMap& GetCurDecodeFieldMap(FieldValueMap& fvm, int index);
		FieldValueMap& GetCurEncodeFieldMap(FieldValueMap& fvm, int index);
		FieldValue* GetEndValue(FieldValueMap& fvm);

	private:
		Message* m_pMessage;
		FVMInfo* m_pFVMInfo;
		FieldValue* m_pEndValue;
		vector<MFSDecodeInfo> m_vctMFSDecodeInfo;
		vector<MFSEncodeInfo> m_vctMFSEncodeInfo;
		vector<int> m_vctFID;
		bool m_bEnd;
		bool m_bObj;
		bool m_bVersion;
		bool m_bPriceDec;
	};

	class MsgFastCode
	{
	public:
		MsgFastCode();
		~MsgFastCode();
		bool loadTemplateFile(const char* file_name,bool need_reset=true);
		bool loadTemplate(const char* template_string,bool need_reset=true);
		bool setTemplateField(int did, int template_id, const char* field);
		bool encode(int did, int template_id, Message* message, std::string* fast_buffer, bool need_reset);
		bool decode(const char* fast_buffer, int fast_buffer_size, Message* message, FVMInfo *info, bool need_reset);
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