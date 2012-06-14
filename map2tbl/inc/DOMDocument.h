#pragma once

#include <string>
#include <map>
#include <iostream>
#include <memory>
#include "dfix.h"

#if (HAVE_TINYXML > 0 || _MSC_VER == 0)
#define _USE_TINYXML
#else
#define _USE_MSXML
#endif

#ifdef _USE_MSXML
#pragma warning( disable : 4503 4355 4786 4290 )
#include <atlbase.h>
#include <atlconv.h>

#include "msxml3.h"

#else
#include "tinyxml.h"
#endif

namespace DFIX
{
	class DOMNode;
	class DOMDocument;

	/// Interface that represents attribute from underlying XML parser.
#ifdef _USE_MSXML
	typedef	MSXML2::IXMLDOMNode* XMLNodePtr;
	typedef	MSXML2::IXMLDOMElement* XMLElementPtr;
	typedef	MSXML2::IXMLDOMDocument2* XMLDocumentPtr;

#else
	typedef TiXmlElement* XMLNodePtr;
	typedef TiXmlElement* XMLElementPtr;
	typedef TiXmlDocument* XMLDocumentPtr;
#endif

	class DATAUNIT_CLASS DOMAttributes
	{
		public:
			typedef std::map<std::string, std::string> map;

#ifdef _USE_MSXML
			DOMAttributes(XMLNodePtr pNode ){pNode->get_attributes(&m_pNodeMap);}
#else
			DOMAttributes( XMLNodePtr pNode ) : m_pNode(pNode) {}
#endif
			~DOMAttributes();

			bool get( const std::string&, std::string& );
			bool getint( const std::string& strTag, int& nData)
			{
				std::string s;
				if(get(strTag,s))
				{
					int n = atoi(s.c_str());
					if(n || s=="0")
					{
						nData = n;
						return true;
					}
				}
				return false;
			}
			map toMap();

		private:
#ifdef _USE_MSXML
			MSXML2::IXMLDOMNamedNodeMap* m_pNodeMap;
#else
			XMLNodePtr m_pNode;
#endif
	};

	typedef std::auto_ptr<DOMAttributes> DOMAttributesPtr;

	/// Interface that represents element from underlying XML parser.
	class DATAUNIT_CLASS DOMElement
	{
		friend class DOMNode;
		friend class DOMDocument;
		public:
		DOMElement(XMLElementPtr pElement) : m_pElement(pElement){};
		~DOMElement();

		bool SetAttribute(const std::string& sTag,const std::string& sValue);
		bool SetAttribute(const std::string& sTag,const int nValue);

		private:
		XMLElementPtr m_pElement;
	};
	typedef std::auto_ptr<DOMElement> DOMElementPtr;

	/// Interface that represents node from underlying XML parser.
	class DATAUNIT_CLASS DOMNode
	{
		public:
			DOMNode( XMLNodePtr pNode) : m_pNode( pNode ) {}
			~DOMNode();

			std::auto_ptr<DOMNode> getFirstChildNode();
			std::auto_ptr<DOMNode> getNextSiblingNode();
			std::auto_ptr<DOMAttributes> getAttributes();
			std::string getName();
			std::string getText();

			std::auto_ptr<DOMNode> AppendChild(DOMElement* element);

		private:
			XMLNodePtr m_pNode;
	};
	typedef std::auto_ptr<DOMNode> DOMNodePtr;

	/// Interface that represents document of underlying XML parser.

	class DATAUNIT_CLASS DOMDocument
	{
		friend class CFieldDefMan;
		public:
			DOMDocument();
			~DOMDocument();

			bool load( std::istream& );
			bool load( const std::string& );
			bool xml( std::ostream& );

			bool CreateEmptyXml(const std::string& encode);
			bool Save(const std::string& sFileName);

			std::auto_ptr<DOMNode>	getNode( const std::string& );

			std::auto_ptr<DOMElement> CreateElement(const std::string& sName);
			std::auto_ptr<DOMNode> AppendChild(DOMElement* element);

			//static DOMDocument& Instance();

		private:
			XMLDocumentPtr m_pDoc;
	};
	typedef std::auto_ptr<DOMDocument> DOMDocumentPtr;
}

