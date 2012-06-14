#pragma once

#include <string>
#include <stdexcept>

namespace DFIX
{
	/// Base QuickFIX exception type.
	struct DFixException : public std::logic_error
	{
		DFixException( const std::string& t, const std::string& d ,int nData = 0)
			: std::logic_error( d.size() ? t + ": " + d : t ),
			type( t ), detail( d ), data(nData)
			{}
		DFixException( const std::string& t,int nData = 0)
			: std::logic_error(t), type( t ), data(nData)
			{}

		~DFixException() throw() {}

		std::string	type;
		std::string	detail;
		int		data;
	};
}

