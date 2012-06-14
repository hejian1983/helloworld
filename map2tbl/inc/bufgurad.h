#pragma once

class CBufGuard
{
	public:
		CBufGuard():m_buf(NULL){}
		CBufGuard(char* buf) : m_buf(buf){}
		~CBufGuard()
		{
			if(m_buf)
				delete []m_buf;
		}
	private:
		char* m_buf;
};
