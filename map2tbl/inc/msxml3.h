// Created by Microsoft (R) C/C++ Compiler Version 12.00.9782.0 (1ef75a6c).
//
// msxml3.tlh
//
// C++ source equivalent of Win32 type library msxml3.dll
// compiler-generated file created 02/10/10 at 09:12:27 - DO NOT EDIT!

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace MSXML2 {

	//
	// Forward references and typedefs
	//

	struct __declspec(uuid("2933bf8f-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMImplementation;
	struct __declspec(uuid("2933bf80-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMNode;
	typedef enum tagDOMNodeType DOMNodeType;
	struct __declspec(uuid("2933bf82-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMNodeList;
	struct __declspec(uuid("2933bf83-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMNamedNodeMap;
	struct __declspec(uuid("2933bf81-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMDocument;
	struct __declspec(uuid("2933bf8b-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMDocumentType;
	struct __declspec(uuid("2933bf86-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMElement;
	struct __declspec(uuid("2933bf85-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMAttribute;
	struct __declspec(uuid("3efaa413-272f-11d2-836f-0000f87a7782"))
		/* dual interface */ IXMLDOMDocumentFragment;
	struct __declspec(uuid("2933bf87-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMText;
	struct __declspec(uuid("2933bf84-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMCharacterData;
	struct __declspec(uuid("2933bf88-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMComment;
	struct __declspec(uuid("2933bf8a-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMCDATASection;
	struct __declspec(uuid("2933bf89-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMProcessingInstruction;
	struct __declspec(uuid("2933bf8e-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMEntityReference;
	struct __declspec(uuid("3efaa426-272f-11d2-836f-0000f87a7782"))
		/* dual interface */ IXMLDOMParseError;
	struct __declspec(uuid("2933bf95-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMDocument2;
	struct __declspec(uuid("373984c8-b845-449b-91e7-45ac83036ade"))
		/* dual interface */ IXMLDOMSchemaCollection;
	struct __declspec(uuid("2933bf96-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMDocument3;
	struct __declspec(uuid("2933bf8c-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMNotation;
	struct __declspec(uuid("2933bf8d-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXMLDOMEntity;
	struct __declspec(uuid("3efaa428-272f-11d2-836f-0000f87a7782"))
		/* dual interface */ IXMLDOMParseError2;
	struct __declspec(uuid("3efaa429-272f-11d2-836f-0000f87a7782"))
		/* dual interface */ IXMLDOMParseErrorCollection;
	struct __declspec(uuid("3efaa425-272f-11d2-836f-0000f87a7782"))
		/* dual interface */ IXTLRuntime;
	struct __declspec(uuid("2933bf93-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXSLTemplate;
	struct __declspec(uuid("2933bf92-7b36-11d2-b20e-00c04f983e60"))
		/* dual interface */ IXSLProcessor;
	struct __declspec(uuid("a4f96ed0-f829-476e-81c0-cdc7bd2a0802"))
		/* interface */ ISAXXMLReader;
	struct __declspec(uuid("99bca7bd-e8c4-4d5f-a0cf-6d907901ff07"))
		/* interface */ ISAXEntityResolver;
	struct __declspec(uuid("1545cdfa-9e4e-4497-a8a4-2bf7d0112c44"))
		/* interface */ ISAXContentHandler;
	struct __declspec(uuid("9b7e472a-0de4-4640-bff3-84d38a051c31"))
		/* interface */ ISAXLocator;
	struct __declspec(uuid("f078abe1-45d2-4832-91ea-4466ce2f25c9"))
		/* interface */ ISAXAttributes;
	struct __declspec(uuid("e15c1baf-afb3-4d60-8c36-19a8c45defed"))
		/* interface */ ISAXDTDHandler;
	struct __declspec(uuid("a60511c4-ccf5-479e-98a3-dc8dc545b7d0"))
		/* interface */ ISAXErrorHandler;
	struct __declspec(uuid("70409222-ca09-4475-acb8-40312fe8d145"))
		/* interface */ ISAXXMLFilter;
	struct __declspec(uuid("7f85d5f5-47a8-4497-bda5-84ba04819ea6"))
		/* interface */ ISAXLexicalHandler;
	struct __declspec(uuid("862629ac-771a-47b2-8337-4e6843c1be90"))
		/* interface */ ISAXDeclHandler;
	struct __declspec(uuid("8c033caa-6cd6-4f73-b728-4531af74945f"))
		/* dual interface */ IVBSAXXMLReader;
	struct __declspec(uuid("0c05d096-f45b-4aca-ad1a-aa0bc25518dc"))
		/* dual interface */ IVBSAXEntityResolver;
	struct __declspec(uuid("2ed7290a-4dd5-4b46-bb26-4e4155e77faa"))
		/* dual interface */ IVBSAXContentHandler;
	struct __declspec(uuid("796e7ac5-5aa2-4eff-acad-3faaf01a3288"))
		/* dual interface */ IVBSAXLocator;
	struct __declspec(uuid("10dc0586-132b-4cac-8bb3-db00ac8b7ee0"))
		/* dual interface */ IVBSAXAttributes;
	struct __declspec(uuid("24fb3297-302d-4620-ba39-3a732d850558"))
		/* dual interface */ IVBSAXDTDHandler;
	struct __declspec(uuid("d963d3fe-173c-4862-9095-b92f66995f52"))
		/* dual interface */ IVBSAXErrorHandler;
	struct __declspec(uuid("1299eb1b-5b88-433e-82de-82ca75ad4e04"))
		/* dual interface */ IVBSAXXMLFilter;
	struct __declspec(uuid("032aac35-8c0e-4d9d-979f-e3b702935576"))
		/* dual interface */ IVBSAXLexicalHandler;
	struct __declspec(uuid("e8917260-7579-4be1-b5dd-7afbfa6f077b"))
		/* dual interface */ IVBSAXDeclHandler;
	struct __declspec(uuid("4d7ff4ba-1565-4ea8-94e1-6e724a46f98d"))
		/* dual interface */ IMXWriter;
	struct __declspec(uuid("f10d27cc-3ec0-415c-8ed8-77ab1c5e7262"))
		/* dual interface */ IMXAttributes;
	struct __declspec(uuid("808f4e35-8d5a-4fbe-8466-33a41279ed30"))
		/* dual interface */ IMXReaderControl;
	struct __declspec(uuid("fa4bb38c-faf9-4cca-9302-d1dd0fe520db"))
		/* dual interface */ IMXSchemaDeclHandler;
	struct __declspec(uuid("50ea08b7-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaElement;
	struct __declspec(uuid("50ea08b5-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaParticle;
	struct __declspec(uuid("50ea08b3-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaItem;
	struct __declspec(uuid("50ea08b4-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchema;
	struct __declspec(uuid("50ea08b2-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaItemCollection;
	struct __declspec(uuid("50ea08b1-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaStringCollection;
	typedef enum _SOMITEMTYPE SOMITEMTYPE;
	struct __declspec(uuid("50ea08b8-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaType;
	typedef enum _SCHEMADERIVATIONMETHOD SCHEMADERIVATIONMETHOD;
	typedef enum _SCHEMATYPEVARIETY SCHEMATYPEVARIETY;
	typedef enum _SCHEMAWHITESPACE SCHEMAWHITESPACE;
	struct __declspec(uuid("50ea08b9-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaComplexType;
	struct __declspec(uuid("50ea08bc-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaAny;
	typedef enum _SCHEMAPROCESSCONTENTS SCHEMAPROCESSCONTENTS;
	typedef enum _SCHEMACONTENTTYPE SCHEMACONTENTTYPE;
	struct __declspec(uuid("50ea08bb-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaModelGroup;
	struct __declspec(uuid("c90352f7-643c-4fbc-bb23-e996eb2d51fd"))
		/* dual interface */ IMXXMLFilter;
	struct __declspec(uuid("50ea08b0-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ IXMLDOMSchemaCollection2;
	struct __declspec(uuid("50ea08b6-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaAttribute;
	typedef enum _SCHEMAUSE SCHEMAUSE;
	struct __declspec(uuid("50ea08ba-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaAttributeGroup;
	struct __declspec(uuid("50ea08bd-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaIdentityConstraint;
	struct __declspec(uuid("50ea08be-dd1b-4664-9a50-c2f40f4bd79a"))
		/* dual interface */ ISchemaNotation;
	struct __declspec(uuid("65725580-9b5d-11d0-9bfe-00c04fc99c8e"))
		/* dual interface */ IXMLElementCollection;
	struct __declspec(uuid("f52e2b61-18a1-11d1-b105-00805f49916b"))
		/* dual interface */ IXMLDocument;
	struct __declspec(uuid("3f7f31ac-e15f-11d0-9c25-00c04fc99c8e"))
		/* dual interface */ IXMLElement;
	struct __declspec(uuid("2b8de2fe-8d2d-11d1-b2fc-00c04fd915a9"))
		/* interface */ IXMLDocument2;
	struct __declspec(uuid("2b8de2ff-8d2d-11d1-b2fc-00c04fd915a9"))
		/* dual interface */ IXMLElement2;
	struct __declspec(uuid("d4d4a0fc-3b73-11d1-b2b4-00c04fb92596"))
		/* dual interface */ IXMLAttribute;
	struct __declspec(uuid("948c5ad3-c58d-11d0-9c0b-00c04fc99c8e"))
		/* interface */ IXMLError;
	struct _xml_error;
	typedef enum tagXMLEMEM_TYPE XMLELEM_TYPE;
	struct __declspec(uuid("aa634fc7-5888-44a7-a257-3a47150d3a0e"))
		/* dual interface */ IXMLDOMSelection;
	struct __declspec(uuid("3efaa427-272f-11d2-836f-0000f87a7782"))
		/* dispinterface */ XMLDOMDocumentEvents;
	struct __declspec(uuid("310afa62-0575-11d2-9ca9-0060b0ec3d39"))
		/* dual interface */ IDSOControl;
	struct __declspec(uuid("ed8c108d-4349-11d2-91a4-00c04f7969e8"))
		/* dual interface */ IXMLHTTPRequest;
	typedef enum _SERVERXMLHTTP_OPTION SERVERXMLHTTP_OPTION;
	typedef enum _SXH_SERVER_CERT_OPTION SXH_SERVER_CERT_OPTION;
	typedef enum _SXH_PROXY_SETTING SXH_PROXY_SETTING;
	struct __declspec(uuid("2e9196bf-13ba-4dd4-91ca-6c571f281495"))
		/* dual interface */ IServerXMLHTTPRequest;
	struct __declspec(uuid("2e01311b-c322-4b0a-bd77-b90cfdc8dce7"))
		/* dual interface */ IServerXMLHTTPRequest2;
	struct __declspec(uuid("c90352f4-643c-4fbc-bb23-e996eb2d51fd"))
		/* dual interface */ IMXNamespacePrefixes;
	struct __declspec(uuid("c90352f5-643c-4fbc-bb23-e996eb2d51fd"))
		/* dual interface */ IVBMXNamespaceManager;
	struct __declspec(uuid("c90352f6-643c-4fbc-bb23-e996eb2d51fd"))
		/* interface */ IMXNamespaceManager;
	struct /* coclass */ DOMDocument;
	struct /* coclass */ DOMDocument26;
	struct /* coclass */ DOMDocument30;
	struct /* coclass */ DOMDocument40;
	struct /* coclass */ DOMDocument60;
	struct /* coclass */ FreeThreadedDOMDocument;
	struct /* coclass */ FreeThreadedDOMDocument26;
	struct /* coclass */ FreeThreadedDOMDocument30;
	struct /* coclass */ FreeThreadedDOMDocument40;
	struct /* coclass */ FreeThreadedDOMDocument60;
	struct /* coclass */ XMLSchemaCache;
	struct /* coclass */ XMLSchemaCache26;
	struct /* coclass */ XMLSchemaCache30;
	struct /* coclass */ XMLSchemaCache40;
	struct /* coclass */ XMLSchemaCache60;
	struct /* coclass */ XSLTemplate;
	struct /* coclass */ XSLTemplate26;
	struct /* coclass */ XSLTemplate30;
	struct /* coclass */ XSLTemplate40;
	struct /* coclass */ XSLTemplate60;
	struct /* coclass */ DSOControl;
	struct /* coclass */ DSOControl26;
	struct /* coclass */ DSOControl30;
	struct /* coclass */ DSOControl40;
	struct /* coclass */ XMLHTTP;
	struct /* coclass */ XMLHTTP26;
	struct /* coclass */ XMLHTTP30;
	struct /* coclass */ XMLHTTP40;
	struct /* coclass */ XMLHTTP60;
	struct /* coclass */ ServerXMLHTTP;
	struct /* coclass */ ServerXMLHTTP30;
	struct /* coclass */ ServerXMLHTTP40;
	struct /* coclass */ ServerXMLHTTP60;
	struct /* coclass */ SAXXMLReader;
	struct /* coclass */ SAXXMLReader30;
	struct /* coclass */ SAXXMLReader40;
	struct /* coclass */ SAXXMLReader60;
	struct /* coclass */ MXXMLWriter;
	struct /* coclass */ MXXMLWriter30;
	struct /* coclass */ MXXMLWriter40;
	struct /* coclass */ MXXMLWriter60;
	struct /* coclass */ MXHTMLWriter;
	struct /* coclass */ MXHTMLWriter30;
	struct /* coclass */ MXHTMLWriter40;
	struct /* coclass */ MXHTMLWriter60;
	struct /* coclass */ SAXAttributes;
	struct /* coclass */ SAXAttributes30;
	struct /* coclass */ SAXAttributes40;
	struct /* coclass */ SAXAttributes60;
	struct /* coclass */ MXNamespaceManager;
	struct /* coclass */ MXNamespaceManager40;
	struct /* coclass */ MXNamespaceManager60;
	struct /* coclass */ XMLDocument;

	//
	// Smart pointer typedef declarations
	//

	_COM_SMARTPTR_TYPEDEF(IXMLDOMImplementation, __uuidof(IXMLDOMImplementation));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMNode, __uuidof(IXMLDOMNode));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMNodeList, __uuidof(IXMLDOMNodeList));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMNamedNodeMap, __uuidof(IXMLDOMNamedNodeMap));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMDocument, __uuidof(IXMLDOMDocument));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMDocumentType, __uuidof(IXMLDOMDocumentType));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMElement, __uuidof(IXMLDOMElement));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMAttribute, __uuidof(IXMLDOMAttribute));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMDocumentFragment, __uuidof(IXMLDOMDocumentFragment));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMCharacterData, __uuidof(IXMLDOMCharacterData));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMText, __uuidof(IXMLDOMText));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMComment, __uuidof(IXMLDOMComment));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMCDATASection, __uuidof(IXMLDOMCDATASection));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMProcessingInstruction, __uuidof(IXMLDOMProcessingInstruction));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMEntityReference, __uuidof(IXMLDOMEntityReference));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMParseError, __uuidof(IXMLDOMParseError));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMDocument2, __uuidof(IXMLDOMDocument2));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMSchemaCollection, __uuidof(IXMLDOMSchemaCollection));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMDocument3, __uuidof(IXMLDOMDocument3));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMNotation, __uuidof(IXMLDOMNotation));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMEntity, __uuidof(IXMLDOMEntity));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMParseError2, __uuidof(IXMLDOMParseError2));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMParseErrorCollection, __uuidof(IXMLDOMParseErrorCollection));
	_COM_SMARTPTR_TYPEDEF(IXTLRuntime, __uuidof(IXTLRuntime));
	_COM_SMARTPTR_TYPEDEF(IXSLTemplate, __uuidof(IXSLTemplate));
	_COM_SMARTPTR_TYPEDEF(IXSLProcessor, __uuidof(IXSLProcessor));
	_COM_SMARTPTR_TYPEDEF(ISAXXMLReader, __uuidof(ISAXXMLReader));
	_COM_SMARTPTR_TYPEDEF(ISAXEntityResolver, __uuidof(ISAXEntityResolver));
	_COM_SMARTPTR_TYPEDEF(ISAXContentHandler, __uuidof(ISAXContentHandler));
	_COM_SMARTPTR_TYPEDEF(ISAXLocator, __uuidof(ISAXLocator));
	_COM_SMARTPTR_TYPEDEF(ISAXAttributes, __uuidof(ISAXAttributes));
	_COM_SMARTPTR_TYPEDEF(ISAXDTDHandler, __uuidof(ISAXDTDHandler));
	_COM_SMARTPTR_TYPEDEF(ISAXErrorHandler, __uuidof(ISAXErrorHandler));
	_COM_SMARTPTR_TYPEDEF(ISAXXMLFilter, __uuidof(ISAXXMLFilter));
	_COM_SMARTPTR_TYPEDEF(ISAXLexicalHandler, __uuidof(ISAXLexicalHandler));
	_COM_SMARTPTR_TYPEDEF(ISAXDeclHandler, __uuidof(ISAXDeclHandler));
	_COM_SMARTPTR_TYPEDEF(IVBSAXXMLReader, __uuidof(IVBSAXXMLReader));
	_COM_SMARTPTR_TYPEDEF(IVBSAXEntityResolver, __uuidof(IVBSAXEntityResolver));
	_COM_SMARTPTR_TYPEDEF(IVBSAXContentHandler, __uuidof(IVBSAXContentHandler));
	_COM_SMARTPTR_TYPEDEF(IVBSAXLocator, __uuidof(IVBSAXLocator));
	_COM_SMARTPTR_TYPEDEF(IVBSAXAttributes, __uuidof(IVBSAXAttributes));
	_COM_SMARTPTR_TYPEDEF(IVBSAXDTDHandler, __uuidof(IVBSAXDTDHandler));
	_COM_SMARTPTR_TYPEDEF(IVBSAXErrorHandler, __uuidof(IVBSAXErrorHandler));
	_COM_SMARTPTR_TYPEDEF(IVBSAXXMLFilter, __uuidof(IVBSAXXMLFilter));
	_COM_SMARTPTR_TYPEDEF(IVBSAXLexicalHandler, __uuidof(IVBSAXLexicalHandler));
	_COM_SMARTPTR_TYPEDEF(IVBSAXDeclHandler, __uuidof(IVBSAXDeclHandler));
	_COM_SMARTPTR_TYPEDEF(IMXWriter, __uuidof(IMXWriter));
	_COM_SMARTPTR_TYPEDEF(IMXAttributes, __uuidof(IMXAttributes));
	_COM_SMARTPTR_TYPEDEF(IMXReaderControl, __uuidof(IMXReaderControl));
	_COM_SMARTPTR_TYPEDEF(IMXSchemaDeclHandler, __uuidof(IMXSchemaDeclHandler));
	_COM_SMARTPTR_TYPEDEF(ISchemaItem, __uuidof(ISchemaItem));
	_COM_SMARTPTR_TYPEDEF(ISchemaParticle, __uuidof(ISchemaParticle));
	_COM_SMARTPTR_TYPEDEF(ISchemaElement, __uuidof(ISchemaElement));
	_COM_SMARTPTR_TYPEDEF(ISchema, __uuidof(ISchema));
	_COM_SMARTPTR_TYPEDEF(ISchemaItemCollection, __uuidof(ISchemaItemCollection));
	_COM_SMARTPTR_TYPEDEF(ISchemaStringCollection, __uuidof(ISchemaStringCollection));
	_COM_SMARTPTR_TYPEDEF(ISchemaType, __uuidof(ISchemaType));
	_COM_SMARTPTR_TYPEDEF(ISchemaComplexType, __uuidof(ISchemaComplexType));
	_COM_SMARTPTR_TYPEDEF(ISchemaAny, __uuidof(ISchemaAny));
	_COM_SMARTPTR_TYPEDEF(ISchemaModelGroup, __uuidof(ISchemaModelGroup));
	_COM_SMARTPTR_TYPEDEF(IMXXMLFilter, __uuidof(IMXXMLFilter));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMSchemaCollection2, __uuidof(IXMLDOMSchemaCollection2));
	_COM_SMARTPTR_TYPEDEF(ISchemaAttribute, __uuidof(ISchemaAttribute));
	_COM_SMARTPTR_TYPEDEF(ISchemaAttributeGroup, __uuidof(ISchemaAttributeGroup));
	_COM_SMARTPTR_TYPEDEF(ISchemaIdentityConstraint, __uuidof(ISchemaIdentityConstraint));
	_COM_SMARTPTR_TYPEDEF(ISchemaNotation, __uuidof(ISchemaNotation));
	_COM_SMARTPTR_TYPEDEF(IXMLElementCollection, __uuidof(IXMLElementCollection));
	_COM_SMARTPTR_TYPEDEF(IXMLDocument, __uuidof(IXMLDocument));
	_COM_SMARTPTR_TYPEDEF(IXMLElement, __uuidof(IXMLElement));
	_COM_SMARTPTR_TYPEDEF(IXMLDocument2, __uuidof(IXMLDocument2));
	_COM_SMARTPTR_TYPEDEF(IXMLElement2, __uuidof(IXMLElement2));
	_COM_SMARTPTR_TYPEDEF(IXMLAttribute, __uuidof(IXMLAttribute));
	_COM_SMARTPTR_TYPEDEF(IXMLError, __uuidof(IXMLError));
	_COM_SMARTPTR_TYPEDEF(IXMLDOMSelection, __uuidof(IXMLDOMSelection));
	_COM_SMARTPTR_TYPEDEF(XMLDOMDocumentEvents, __uuidof(IDispatch));
	_COM_SMARTPTR_TYPEDEF(IDSOControl, __uuidof(IDSOControl));
	_COM_SMARTPTR_TYPEDEF(IXMLHTTPRequest, __uuidof(IXMLHTTPRequest));
	_COM_SMARTPTR_TYPEDEF(IServerXMLHTTPRequest, __uuidof(IServerXMLHTTPRequest));
	_COM_SMARTPTR_TYPEDEF(IServerXMLHTTPRequest2, __uuidof(IServerXMLHTTPRequest2));
	_COM_SMARTPTR_TYPEDEF(IMXNamespacePrefixes, __uuidof(IMXNamespacePrefixes));
	_COM_SMARTPTR_TYPEDEF(IVBMXNamespaceManager, __uuidof(IVBMXNamespaceManager));
	_COM_SMARTPTR_TYPEDEF(IMXNamespaceManager, __uuidof(IMXNamespaceManager));

	//
	// Type library items
	//

	struct __declspec(uuid("2933bf8f-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMImplementation : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall hasFeature (
					BSTR feature,
					BSTR version,
					VARIANT_BOOL * hasFeature ) = 0;
		};

	struct __declspec(uuid("2933bf80-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMNode : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_nodeName (
					BSTR * name ) = 0;
			virtual HRESULT __stdcall get_nodeValue (
					VARIANT * value ) = 0;
			virtual HRESULT __stdcall put_nodeValue (
					VARIANT value ) = 0;
			virtual HRESULT __stdcall get_nodeType (
					DOMNodeType * type ) = 0;
			virtual HRESULT __stdcall get_parentNode (
					struct IXMLDOMNode * * parent ) = 0;
			virtual HRESULT __stdcall get_childNodes (
					struct IXMLDOMNodeList * * childList ) = 0;
			virtual HRESULT __stdcall get_firstChild (
					struct IXMLDOMNode * * firstChild ) = 0;
			virtual HRESULT __stdcall get_lastChild (
					struct IXMLDOMNode * * lastChild ) = 0;
			virtual HRESULT __stdcall get_previousSibling (
					struct IXMLDOMNode * * previousSibling ) = 0;
			virtual HRESULT __stdcall get_nextSibling (
					struct IXMLDOMNode * * nextSibling ) = 0;
			virtual HRESULT __stdcall get_attributes (
					struct IXMLDOMNamedNodeMap * * attributeMap ) = 0;
			virtual HRESULT __stdcall insertBefore (
					struct IXMLDOMNode * newChild,
					VARIANT refChild,
					struct IXMLDOMNode * * outNewChild ) = 0;
			virtual HRESULT __stdcall replaceChild (
					struct IXMLDOMNode * newChild,
					struct IXMLDOMNode * oldChild,
					struct IXMLDOMNode * * outOldChild ) = 0;
			virtual HRESULT __stdcall removeChild (
					struct IXMLDOMNode * childNode,
					struct IXMLDOMNode * * oldChild ) = 0;
			virtual HRESULT __stdcall appendChild (
					struct IXMLDOMNode * newChild,
					struct IXMLDOMNode * * outNewChild ) = 0;
			virtual HRESULT __stdcall hasChildNodes (
					VARIANT_BOOL * hasChild ) = 0;
			virtual HRESULT __stdcall get_ownerDocument (
					struct IXMLDOMDocument * * XMLDOMDocument ) = 0;
			virtual HRESULT __stdcall cloneNode (
					VARIANT_BOOL deep,
					struct IXMLDOMNode * * cloneRoot ) = 0;
			virtual HRESULT __stdcall get_nodeTypeString (
					BSTR * nodeType ) = 0;
			virtual HRESULT __stdcall get_text (
					BSTR * text ) = 0;
			virtual HRESULT __stdcall put_text (
					BSTR text ) = 0;
			virtual HRESULT __stdcall get_specified (
					VARIANT_BOOL * isSpecified ) = 0;
			virtual HRESULT __stdcall get_definition (
					struct IXMLDOMNode * * definitionNode ) = 0;
			virtual HRESULT __stdcall get_nodeTypedValue (
					VARIANT * typedValue ) = 0;
			virtual HRESULT __stdcall put_nodeTypedValue (
					VARIANT typedValue ) = 0;
			virtual HRESULT __stdcall get_dataType (
					VARIANT * dataTypeName ) = 0;
			virtual HRESULT __stdcall put_dataType (
					BSTR dataTypeName ) = 0;
			virtual HRESULT __stdcall get_xml (
					BSTR * xmlString ) = 0;
			virtual HRESULT __stdcall transformNode (
					struct IXMLDOMNode * stylesheet,
					BSTR * xmlString ) = 0;
			virtual HRESULT __stdcall selectNodes (
					BSTR queryString,
					struct IXMLDOMNodeList * * resultList ) = 0;
			virtual HRESULT __stdcall selectSingleNode (
					BSTR queryString,
					struct IXMLDOMNode * * resultNode ) = 0;
			virtual HRESULT __stdcall get_parsed (
					VARIANT_BOOL * isParsed ) = 0;
			virtual HRESULT __stdcall get_namespaceURI (
					BSTR * namespaceURI ) = 0;
			virtual HRESULT __stdcall get_prefix (
					BSTR * prefixString ) = 0;
			virtual HRESULT __stdcall get_baseName (
					BSTR * nameString ) = 0;
			virtual HRESULT __stdcall transformNodeToObject (
					struct IXMLDOMNode * stylesheet,
					VARIANT outputObject ) = 0;
		};

	enum tagDOMNodeType
	{
		NODE_INVALID = 0,
		NODE_ELEMENT = 1,
		NODE_ATTRIBUTE = 2,
		NODE_TEXT = 3,
		NODE_CDATA_SECTION = 4,
		NODE_ENTITY_REFERENCE = 5,
		NODE_ENTITY = 6,
		NODE_PROCESSING_INSTRUCTION = 7,
		NODE_COMMENT = 8,
		NODE_DOCUMENT = 9,
		NODE_DOCUMENT_TYPE = 10,
		NODE_DOCUMENT_FRAGMENT = 11,
		NODE_NOTATION = 12
	};

	struct __declspec(uuid("2933bf82-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMNodeList : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_item (
					long index,
					struct IXMLDOMNode * * listItem ) = 0;
			virtual HRESULT __stdcall get_length (
					long * listLength ) = 0;
			virtual HRESULT __stdcall nextNode (
					struct IXMLDOMNode * * nextItem ) = 0;
			virtual HRESULT __stdcall reset ( ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
		};

	struct __declspec(uuid("2933bf83-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMNamedNodeMap : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall getNamedItem (
					BSTR name,
					struct IXMLDOMNode * * namedItem ) = 0;
			virtual HRESULT __stdcall setNamedItem (
					struct IXMLDOMNode * newItem,
					struct IXMLDOMNode * * nameItem ) = 0;
			virtual HRESULT __stdcall removeNamedItem (
					BSTR name,
					struct IXMLDOMNode * * namedItem ) = 0;
			virtual HRESULT __stdcall get_item (
					long index,
					struct IXMLDOMNode * * listItem ) = 0;
			virtual HRESULT __stdcall get_length (
					long * listLength ) = 0;
			virtual HRESULT __stdcall getQualifiedItem (
					BSTR baseName,
					BSTR namespaceURI,
					struct IXMLDOMNode * * qualifiedItem ) = 0;
			virtual HRESULT __stdcall removeQualifiedItem (
					BSTR baseName,
					BSTR namespaceURI,
					struct IXMLDOMNode * * qualifiedItem ) = 0;
			virtual HRESULT __stdcall nextNode (
					struct IXMLDOMNode * * nextItem ) = 0;
			virtual HRESULT __stdcall reset ( ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
		};

	struct __declspec(uuid("2933bf81-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMDocument : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_doctype (
					struct IXMLDOMDocumentType * * documentType ) = 0;
			virtual HRESULT __stdcall get_implementation (
					struct IXMLDOMImplementation * * impl ) = 0;
			virtual HRESULT __stdcall get_documentElement (
					struct IXMLDOMElement * * DOMElement ) = 0;
			virtual HRESULT __stdcall putref_documentElement (
					struct IXMLDOMElement * DOMElement ) = 0;
			virtual HRESULT __stdcall createElement (
					BSTR tagName,
					struct IXMLDOMElement * * element ) = 0;
			virtual HRESULT __stdcall createDocumentFragment (
					struct IXMLDOMDocumentFragment * * docFrag ) = 0;
			virtual HRESULT __stdcall createTextNode (
					BSTR data,
					struct IXMLDOMText * * text ) = 0;
			virtual HRESULT __stdcall createComment (
					BSTR data,
					struct IXMLDOMComment * * comment ) = 0;
			virtual HRESULT __stdcall createCDATASection (
					BSTR data,
					struct IXMLDOMCDATASection * * cdata ) = 0;
			virtual HRESULT __stdcall createProcessingInstruction (
					BSTR target,
					BSTR data,
					struct IXMLDOMProcessingInstruction * * pi ) = 0;
			virtual HRESULT __stdcall createAttribute (
					BSTR name,
					struct IXMLDOMAttribute * * attribute ) = 0;
			virtual HRESULT __stdcall createEntityReference (
					BSTR name,
					struct IXMLDOMEntityReference * * entityRef ) = 0;
			virtual HRESULT __stdcall getElementsByTagName (
					BSTR tagName,
					struct IXMLDOMNodeList * * resultList ) = 0;
			virtual HRESULT __stdcall createNode (
					VARIANT type,
					BSTR name,
					BSTR namespaceURI,
					struct IXMLDOMNode * * node ) = 0;
			virtual HRESULT __stdcall nodeFromID (
					BSTR idString,
					struct IXMLDOMNode * * node ) = 0;
			virtual HRESULT __stdcall load (
					VARIANT xmlSource,
					VARIANT_BOOL * isSuccessful ) = 0;
			virtual HRESULT __stdcall get_readyState (
					long * value ) = 0;
			virtual HRESULT __stdcall get_parseError (
					struct IXMLDOMParseError * * errorObj ) = 0;
			virtual HRESULT __stdcall get_url (
					BSTR * urlString ) = 0;
			virtual HRESULT __stdcall get_async (
					VARIANT_BOOL * isAsync ) = 0;
			virtual HRESULT __stdcall put_async (
					VARIANT_BOOL isAsync ) = 0;
			virtual HRESULT __stdcall abort ( ) = 0;
			virtual HRESULT __stdcall loadXML (
					BSTR bstrXML,
					VARIANT_BOOL * isSuccessful ) = 0;
			virtual HRESULT __stdcall save (
					VARIANT destination ) = 0;
			virtual HRESULT __stdcall get_validateOnParse (
					VARIANT_BOOL * isValidating ) = 0;
			virtual HRESULT __stdcall put_validateOnParse (
					VARIANT_BOOL isValidating ) = 0;
			virtual HRESULT __stdcall get_resolveExternals (
					VARIANT_BOOL * isResolving ) = 0;
			virtual HRESULT __stdcall put_resolveExternals (
					VARIANT_BOOL isResolving ) = 0;
			virtual HRESULT __stdcall get_preserveWhiteSpace (
					VARIANT_BOOL * isPreserving ) = 0;
			virtual HRESULT __stdcall put_preserveWhiteSpace (
					VARIANT_BOOL isPreserving ) = 0;
			virtual HRESULT __stdcall put_onreadystatechange (
					VARIANT _arg1 ) = 0;
			virtual HRESULT __stdcall put_ondataavailable (
					VARIANT _arg1 ) = 0;
			virtual HRESULT __stdcall put_ontransformnode (
					VARIANT _arg1 ) = 0;
		};

	struct __declspec(uuid("2933bf8b-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMDocumentType : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_name (
					BSTR * rootName ) = 0;
			virtual HRESULT __stdcall get_entities (
					struct IXMLDOMNamedNodeMap * * entityMap ) = 0;
			virtual HRESULT __stdcall get_notations (
					struct IXMLDOMNamedNodeMap * * notationMap ) = 0;
		};

	struct __declspec(uuid("2933bf86-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMElement : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_tagName (
					BSTR * tagName ) = 0;
			virtual HRESULT __stdcall getAttribute (
					BSTR name,
					VARIANT * value ) = 0;
			virtual HRESULT __stdcall setAttribute (
					BSTR name,
					VARIANT value ) = 0;
			virtual HRESULT __stdcall removeAttribute (
					BSTR name ) = 0;
			virtual HRESULT __stdcall getAttributeNode (
					BSTR name,
					struct IXMLDOMAttribute * * attributeNode ) = 0;
			virtual HRESULT __stdcall setAttributeNode (
					struct IXMLDOMAttribute * DOMAttribute,
					struct IXMLDOMAttribute * * attributeNode ) = 0;
			virtual HRESULT __stdcall removeAttributeNode (
					struct IXMLDOMAttribute * DOMAttribute,
					struct IXMLDOMAttribute * * attributeNode ) = 0;
			virtual HRESULT __stdcall getElementsByTagName (
					BSTR tagName,
					struct IXMLDOMNodeList * * resultList ) = 0;
			virtual HRESULT __stdcall normalize ( ) = 0;
		};

	struct __declspec(uuid("2933bf85-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMAttribute : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_name (
					BSTR * attributeName ) = 0;
			virtual HRESULT __stdcall get_value (
					VARIANT * attributeValue ) = 0;
			virtual HRESULT __stdcall put_value (
					VARIANT attributeValue ) = 0;
		};

	struct __declspec(uuid("3efaa413-272f-11d2-836f-0000f87a7782"))
		IXMLDOMDocumentFragment : IXMLDOMNode
		{};

	struct __declspec(uuid("2933bf84-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMCharacterData : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_data (
					BSTR * data ) = 0;
			virtual HRESULT __stdcall put_data (
					BSTR data ) = 0;
			virtual HRESULT __stdcall get_length (
					long * dataLength ) = 0;
			virtual HRESULT __stdcall substringData (
					long offset,
					long count,
					BSTR * data ) = 0;
			virtual HRESULT __stdcall appendData (
					BSTR data ) = 0;
			virtual HRESULT __stdcall insertData (
					long offset,
					BSTR data ) = 0;
			virtual HRESULT __stdcall deleteData (
					long offset,
					long count ) = 0;
			virtual HRESULT __stdcall replaceData (
					long offset,
					long count,
					BSTR data ) = 0;
		};

	struct __declspec(uuid("2933bf87-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMText : IXMLDOMCharacterData
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall splitText (
					long offset,
					struct IXMLDOMText * * rightHandTextNode ) = 0;
		};

	struct __declspec(uuid("2933bf88-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMComment : IXMLDOMCharacterData
		{};

	struct __declspec(uuid("2933bf8a-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMCDATASection : IXMLDOMText
		{};

	struct __declspec(uuid("2933bf89-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMProcessingInstruction : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_target (
					BSTR * name ) = 0;
			virtual HRESULT __stdcall get_data (
					BSTR * value ) = 0;
			virtual HRESULT __stdcall put_data (
					BSTR value ) = 0;
		};

	struct __declspec(uuid("2933bf8e-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMEntityReference : IXMLDOMNode
		{};

	struct __declspec(uuid("3efaa426-272f-11d2-836f-0000f87a7782"))
		IXMLDOMParseError : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_errorCode (
					long * errorCode ) = 0;
			virtual HRESULT __stdcall get_url (
					BSTR * urlString ) = 0;
			virtual HRESULT __stdcall get_reason (
					BSTR * reasonString ) = 0;
			virtual HRESULT __stdcall get_srcText (
					BSTR * sourceString ) = 0;
			virtual HRESULT __stdcall get_line (
					long * lineNumber ) = 0;
			virtual HRESULT __stdcall get_linepos (
					long * linePosition ) = 0;
			virtual HRESULT __stdcall get_filepos (
					long * filePosition ) = 0;
		};

	struct __declspec(uuid("2933bf95-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMDocument2 : IXMLDOMDocument
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_namespaces (
					struct IXMLDOMSchemaCollection * * namespaceCollection ) = 0;
			virtual HRESULT __stdcall get_schemas (
					VARIANT * otherCollection ) = 0;
			virtual HRESULT __stdcall putref_schemas (
					VARIANT otherCollection ) = 0;
			virtual HRESULT __stdcall validate (
					struct IXMLDOMParseError * * errorObj ) = 0;
			virtual HRESULT __stdcall setProperty (
					BSTR name,
					VARIANT value ) = 0;
			virtual HRESULT __stdcall getProperty (
					BSTR name,
					VARIANT * value ) = 0;
		};

	struct __declspec(uuid("373984c8-b845-449b-91e7-45ac83036ade"))
		IXMLDOMSchemaCollection : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall add (
					BSTR namespaceURI,
					VARIANT var ) = 0;
			virtual HRESULT __stdcall get (
					BSTR namespaceURI,
					struct IXMLDOMNode * * schemaNode ) = 0;
			virtual HRESULT __stdcall remove (
					BSTR namespaceURI ) = 0;
			virtual HRESULT __stdcall get_length (
					long * length ) = 0;
			virtual HRESULT __stdcall get_namespaceURI (
					long index,
					BSTR * length ) = 0;
			virtual HRESULT __stdcall addCollection (
					struct IXMLDOMSchemaCollection * otherCollection ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
		};

	struct __declspec(uuid("2933bf96-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMDocument3 : IXMLDOMDocument2
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall validateNode (
					struct IXMLDOMNode * node,
					struct IXMLDOMParseError * * errorObj ) = 0;
			virtual HRESULT __stdcall importNode (
					struct IXMLDOMNode * node,
					VARIANT_BOOL deep,
					struct IXMLDOMNode * * clone ) = 0;
		};

	struct __declspec(uuid("2933bf8c-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMNotation : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_publicId (
					VARIANT * publicId ) = 0;
			virtual HRESULT __stdcall get_systemId (
					VARIANT * systemId ) = 0;
		};

	struct __declspec(uuid("2933bf8d-7b36-11d2-b20e-00c04f983e60"))
		IXMLDOMEntity : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_publicId (
					VARIANT * publicId ) = 0;
			virtual HRESULT __stdcall get_systemId (
					VARIANT * systemId ) = 0;
			virtual HRESULT __stdcall get_notationName (
					BSTR * name ) = 0;
		};

	struct __declspec(uuid("3efaa428-272f-11d2-836f-0000f87a7782"))
		IXMLDOMParseError2 : IXMLDOMParseError
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_errorXPath (
					BSTR * xpathexpr ) = 0;
			virtual HRESULT __stdcall get_allErrors (
					struct IXMLDOMParseErrorCollection * * allErrors ) = 0;
			virtual HRESULT __stdcall errorParameters (
					long index,
					BSTR * param ) = 0;
			virtual HRESULT __stdcall get_errorParametersCount (
					long * count ) = 0;
		};

	struct __declspec(uuid("3efaa429-272f-11d2-836f-0000f87a7782"))
		IXMLDOMParseErrorCollection : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_item (
					long index,
					struct IXMLDOMParseError2 * * error ) = 0;
			virtual HRESULT __stdcall get_length (
					long * length ) = 0;
			virtual HRESULT __stdcall get_next (
					struct IXMLDOMParseError2 * * error ) = 0;
			virtual HRESULT __stdcall reset ( ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
		};

	struct __declspec(uuid("3efaa425-272f-11d2-836f-0000f87a7782"))
		IXTLRuntime : IXMLDOMNode
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall uniqueID (
					struct IXMLDOMNode * pNode,
					long * pID ) = 0;
			virtual HRESULT __stdcall depth (
					struct IXMLDOMNode * pNode,
					long * pDepth ) = 0;
			virtual HRESULT __stdcall childNumber (
					struct IXMLDOMNode * pNode,
					long * pNumber ) = 0;
			virtual HRESULT __stdcall ancestorChildNumber (
					BSTR bstrNodeName,
					struct IXMLDOMNode * pNode,
					long * pNumber ) = 0;
			virtual HRESULT __stdcall absoluteChildNumber (
					struct IXMLDOMNode * pNode,
					long * pNumber ) = 0;
			virtual HRESULT __stdcall formatIndex (
					long lIndex,
					BSTR bstrFormat,
					BSTR * pbstrFormattedString ) = 0;
			virtual HRESULT __stdcall formatNumber (
					double dblNumber,
					BSTR bstrFormat,
					BSTR * pbstrFormattedString ) = 0;
			virtual HRESULT __stdcall formatDate (
					VARIANT varDate,
					BSTR bstrFormat,
					VARIANT varDestLocale,
					BSTR * pbstrFormattedString ) = 0;
			virtual HRESULT __stdcall formatTime (
					VARIANT varTime,
					BSTR bstrFormat,
					VARIANT varDestLocale,
					BSTR * pbstrFormattedString ) = 0;
		};

	struct __declspec(uuid("2933bf93-7b36-11d2-b20e-00c04f983e60"))
		IXSLTemplate : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall putref_stylesheet (
					struct IXMLDOMNode * stylesheet ) = 0;
			virtual HRESULT __stdcall get_stylesheet (
					struct IXMLDOMNode * * stylesheet ) = 0;
			virtual HRESULT __stdcall createProcessor (
					struct IXSLProcessor * * ppProcessor ) = 0;
		};

	struct __declspec(uuid("2933bf92-7b36-11d2-b20e-00c04f983e60"))
		IXSLProcessor : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall put_input (
					VARIANT pVar ) = 0;
			virtual HRESULT __stdcall get_input (
					VARIANT * pVar ) = 0;
			virtual HRESULT __stdcall get_ownerTemplate (
					struct IXSLTemplate * * ppTemplate ) = 0;
			virtual HRESULT __stdcall setStartMode (
					BSTR mode,
					BSTR namespaceURI ) = 0;
			virtual HRESULT __stdcall get_startMode (
					BSTR * mode ) = 0;
			virtual HRESULT __stdcall get_startModeURI (
					BSTR * namespaceURI ) = 0;
			virtual HRESULT __stdcall put_output (
					VARIANT pOutput ) = 0;
			virtual HRESULT __stdcall get_output (
					VARIANT * pOutput ) = 0;
			virtual HRESULT __stdcall transform (
					VARIANT_BOOL * pDone ) = 0;
			virtual HRESULT __stdcall reset ( ) = 0;
			virtual HRESULT __stdcall get_readyState (
					long * pReadyState ) = 0;
			virtual HRESULT __stdcall addParameter (
					BSTR baseName,
					VARIANT parameter,
					BSTR namespaceURI ) = 0;
			virtual HRESULT __stdcall addObject (
					IDispatch * obj,
					BSTR namespaceURI ) = 0;
			virtual HRESULT __stdcall get_stylesheet (
					struct IXMLDOMNode * * stylesheet ) = 0;
		};

	struct __declspec(uuid("a4f96ed0-f829-476e-81c0-cdc7bd2a0802"))
		ISAXXMLReader : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall getFeature (
					unsigned short * pwchName,
					VARIANT_BOOL * pvfValue ) = 0;
			virtual HRESULT __stdcall putFeature (
					unsigned short * pwchName,
					VARIANT_BOOL vfValue ) = 0;
			virtual HRESULT __stdcall getProperty (
					unsigned short * pwchName,
					VARIANT * pvarValue ) = 0;
			virtual HRESULT __stdcall putProperty (
					unsigned short * pwchName,
					VARIANT varValue ) = 0;
			virtual HRESULT __stdcall getEntityResolver (
					struct ISAXEntityResolver * * ppResolver ) = 0;
			virtual HRESULT __stdcall putEntityResolver (
					struct ISAXEntityResolver * pResolver ) = 0;
			virtual HRESULT __stdcall getContentHandler (
					struct ISAXContentHandler * * ppHandler ) = 0;
			virtual HRESULT __stdcall putContentHandler (
					struct ISAXContentHandler * pHandler ) = 0;
			virtual HRESULT __stdcall getDTDHandler (
					struct ISAXDTDHandler * * ppHandler ) = 0;
			virtual HRESULT __stdcall putDTDHandler (
					struct ISAXDTDHandler * pHandler ) = 0;
			virtual HRESULT __stdcall getErrorHandler (
					struct ISAXErrorHandler * * ppHandler ) = 0;
			virtual HRESULT __stdcall putErrorHandler (
					struct ISAXErrorHandler * pHandler ) = 0;
			virtual HRESULT __stdcall getBaseURL (
					unsigned short * * ppwchBaseUrl ) = 0;
			virtual HRESULT __stdcall putBaseURL (
					unsigned short * pwchBaseUrl ) = 0;
			virtual HRESULT __stdcall getSecureBaseURL (
					unsigned short * * ppwchSecureBaseUrl ) = 0;
			virtual HRESULT __stdcall putSecureBaseURL (
					unsigned short * pwchSecureBaseUrl ) = 0;
			virtual HRESULT __stdcall parse (
					VARIANT varInput = vtMissing ) = 0;
			virtual HRESULT __stdcall parseURL (
					unsigned short * pwchUrl ) = 0;
		};

	struct __declspec(uuid("99bca7bd-e8c4-4d5f-a0cf-6d907901ff07"))
		ISAXEntityResolver : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall resolveEntity (
					unsigned short * pwchPublicId,
					unsigned short * pwchSystemId,
					VARIANT * pvarInput ) = 0;
		};

	struct __declspec(uuid("1545cdfa-9e4e-4497-a8a4-2bf7d0112c44"))
		ISAXContentHandler : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall putDocumentLocator (
					struct ISAXLocator * pLocator ) = 0;
			virtual HRESULT __stdcall startDocument ( ) = 0;
			virtual HRESULT __stdcall endDocument ( ) = 0;
			virtual HRESULT __stdcall startPrefixMapping (
					unsigned short * pwchPrefix,
					int cchPrefix,
					unsigned short * pwchUri,
					int cchUri ) = 0;
			virtual HRESULT __stdcall endPrefixMapping (
					unsigned short * pwchPrefix,
					int cchPrefix ) = 0;
			virtual HRESULT __stdcall startElement (
					unsigned short * pwchNamespaceUri,
					int cchNamespaceUri,
					unsigned short * pwchLocalName,
					int cchLocalName,
					unsigned short * pwchQName,
					int cchQName,
					struct ISAXAttributes * pAttributes ) = 0;
			virtual HRESULT __stdcall endElement (
					unsigned short * pwchNamespaceUri,
					int cchNamespaceUri,
					unsigned short * pwchLocalName,
					int cchLocalName,
					unsigned short * pwchQName,
					int cchQName ) = 0;
			virtual HRESULT __stdcall characters (
					unsigned short * pwchChars,
					int cchChars ) = 0;
			virtual HRESULT __stdcall ignorableWhitespace (
					unsigned short * pwchChars,
					int cchChars ) = 0;
			virtual HRESULT __stdcall processingInstruction (
					unsigned short * pwchTarget,
					int cchTarget,
					unsigned short * pwchData,
					int cchData ) = 0;
			virtual HRESULT __stdcall skippedEntity (
					unsigned short * pwchName,
					int cchName ) = 0;
		};

	struct __declspec(uuid("9b7e472a-0de4-4640-bff3-84d38a051c31"))
		ISAXLocator : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall getColumnNumber (
					int * pnColumn ) = 0;
			virtual HRESULT __stdcall getLineNumber (
					int * pnLine ) = 0;
			virtual HRESULT __stdcall getPublicId (
					unsigned short * * ppwchPublicId ) = 0;
			virtual HRESULT __stdcall getSystemId (
					unsigned short * * ppwchSystemId ) = 0;
		};

	struct __declspec(uuid("f078abe1-45d2-4832-91ea-4466ce2f25c9"))
		ISAXAttributes : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall getLength (
					int * pnLength ) = 0;
			virtual HRESULT __stdcall getURI (
					int nIndex,
					unsigned short * * ppwchUri,
					int * pcchUri ) = 0;
			virtual HRESULT __stdcall getLocalName (
					int nIndex,
					unsigned short * * ppwchLocalName,
					int * pcchLocalName ) = 0;
			virtual HRESULT __stdcall getQName (
					int nIndex,
					unsigned short * * ppwchQName,
					int * pcchQName ) = 0;
			virtual HRESULT __stdcall getName (
					int nIndex,
					unsigned short * * ppwchUri,
					int * pcchUri,
					unsigned short * * ppwchLocalName,
					int * pcchLocalName,
					unsigned short * * ppwchQName,
					int * pcchQName ) = 0;
			virtual HRESULT __stdcall getIndexFromName (
					unsigned short * pwchUri,
					int cchUri,
					unsigned short * pwchLocalName,
					int cchLocalName,
					int * pnIndex ) = 0;
			virtual HRESULT __stdcall getIndexFromQName (
					unsigned short * pwchQName,
					int cchQName,
					int * pnIndex ) = 0;
			virtual HRESULT __stdcall getType (
					int nIndex,
					unsigned short * * ppwchType,
					int * pcchType ) = 0;
			virtual HRESULT __stdcall getTypeFromName (
					unsigned short * pwchUri,
					int cchUri,
					unsigned short * pwchLocalName,
					int cchLocalName,
					unsigned short * * ppwchType,
					int * pcchType ) = 0;
			virtual HRESULT __stdcall getTypeFromQName (
					unsigned short * pwchQName,
					int cchQName,
					unsigned short * * ppwchType,
					int * pcchType ) = 0;
			virtual HRESULT __stdcall getValue (
					int nIndex,
					unsigned short * * ppwchValue,
					int * pcchValue ) = 0;
			virtual HRESULT __stdcall getValueFromName (
					unsigned short * pwchUri,
					int cchUri,
					unsigned short * pwchLocalName,
					int cchLocalName,
					unsigned short * * ppwchValue,
					int * pcchValue ) = 0;
			virtual HRESULT __stdcall getValueFromQName (
					unsigned short * pwchQName,
					int cchQName,
					unsigned short * * ppwchValue,
					int * pcchValue ) = 0;
		};

	struct __declspec(uuid("e15c1baf-afb3-4d60-8c36-19a8c45defed"))
		ISAXDTDHandler : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall notationDecl (
					unsigned short * pwchName,
					int cchName,
					unsigned short * pwchPublicId,
					int cchPublicId,
					unsigned short * pwchSystemId,
					int cchSystemId ) = 0;
			virtual HRESULT __stdcall unparsedEntityDecl (
					unsigned short * pwchName,
					int cchName,
					unsigned short * pwchPublicId,
					int cchPublicId,
					unsigned short * pwchSystemId,
					int cchSystemId,
					unsigned short * pwchNotationName,
					int cchNotationName ) = 0;
		};

	struct __declspec(uuid("a60511c4-ccf5-479e-98a3-dc8dc545b7d0"))
		ISAXErrorHandler : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall error (
					struct ISAXLocator * pLocator,
					unsigned short * pwchErrorMessage,
					HRESULT hrErrorCode ) = 0;
			virtual HRESULT __stdcall fatalError (
					struct ISAXLocator * pLocator,
					unsigned short * pwchErrorMessage,
					HRESULT hrErrorCode ) = 0;
			virtual HRESULT __stdcall ignorableWarning (
					struct ISAXLocator * pLocator,
					unsigned short * pwchErrorMessage,
					HRESULT hrErrorCode ) = 0;
		};

	struct __declspec(uuid("70409222-ca09-4475-acb8-40312fe8d145"))
		ISAXXMLFilter : ISAXXMLReader
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall getParent (
					struct ISAXXMLReader * * ppReader ) = 0;
			virtual HRESULT __stdcall putParent (
					struct ISAXXMLReader * pReader ) = 0;
		};

	struct __declspec(uuid("7f85d5f5-47a8-4497-bda5-84ba04819ea6"))
		ISAXLexicalHandler : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall startDTD (
					unsigned short * pwchName,
					int cchName,
					unsigned short * pwchPublicId,
					int cchPublicId,
					unsigned short * pwchSystemId,
					int cchSystemId ) = 0;
			virtual HRESULT __stdcall endDTD ( ) = 0;
			virtual HRESULT __stdcall startEntity (
					unsigned short * pwchName,
					int cchName ) = 0;
			virtual HRESULT __stdcall endEntity (
					unsigned short * pwchName,
					int cchName ) = 0;
			virtual HRESULT __stdcall startCDATA ( ) = 0;
			virtual HRESULT __stdcall endCDATA ( ) = 0;
			virtual HRESULT __stdcall comment (
					unsigned short * pwchChars,
					int cchChars ) = 0;
		};

	struct __declspec(uuid("862629ac-771a-47b2-8337-4e6843c1be90"))
		ISAXDeclHandler : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall elementDecl (
					unsigned short * pwchName,
					int cchName,
					unsigned short * pwchModel,
					int cchModel ) = 0;
			virtual HRESULT __stdcall attributeDecl (
					unsigned short * pwchElementName,
					int cchElementName,
					unsigned short * pwchAttributeName,
					int cchAttributeName,
					unsigned short * pwchType,
					int cchType,
					unsigned short * pwchValueDefault,
					int cchValueDefault,
					unsigned short * pwchValue,
					int cchValue ) = 0;
			virtual HRESULT __stdcall internalEntityDecl (
					unsigned short * pwchName,
					int cchName,
					unsigned short * pwchValue,
					int cchValue ) = 0;
			virtual HRESULT __stdcall externalEntityDecl (
					unsigned short * pwchName,
					int cchName,
					unsigned short * pwchPublicId,
					int cchPublicId,
					unsigned short * pwchSystemId,
					int cchSystemId ) = 0;
		};

	struct __declspec(uuid("8c033caa-6cd6-4f73-b728-4531af74945f"))
		IVBSAXXMLReader : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall getFeature (
					BSTR strName,
					VARIANT_BOOL * fValue ) = 0;
			virtual HRESULT __stdcall putFeature (
					BSTR strName,
					VARIANT_BOOL fValue ) = 0;
			virtual HRESULT __stdcall getProperty (
					BSTR strName,
					VARIANT * varValue ) = 0;
			virtual HRESULT __stdcall putProperty (
					BSTR strName,
					VARIANT varValue ) = 0;
			virtual HRESULT __stdcall get_entityResolver (
					struct IVBSAXEntityResolver * * oResolver ) = 0;
			virtual HRESULT __stdcall putref_entityResolver (
					struct IVBSAXEntityResolver * oResolver ) = 0;
			virtual HRESULT __stdcall get_contentHandler (
					struct IVBSAXContentHandler * * oHandler ) = 0;
			virtual HRESULT __stdcall putref_contentHandler (
					struct IVBSAXContentHandler * oHandler ) = 0;
			virtual HRESULT __stdcall get_dtdHandler (
					struct IVBSAXDTDHandler * * oHandler ) = 0;
			virtual HRESULT __stdcall putref_dtdHandler (
					struct IVBSAXDTDHandler * oHandler ) = 0;
			virtual HRESULT __stdcall get_errorHandler (
					struct IVBSAXErrorHandler * * oHandler ) = 0;
			virtual HRESULT __stdcall putref_errorHandler (
					struct IVBSAXErrorHandler * oHandler ) = 0;
			virtual HRESULT __stdcall get_baseURL (
					BSTR * strBaseURL ) = 0;
			virtual HRESULT __stdcall put_baseURL (
					BSTR strBaseURL ) = 0;
			virtual HRESULT __stdcall get_secureBaseURL (
					BSTR * strSecureBaseURL ) = 0;
			virtual HRESULT __stdcall put_secureBaseURL (
					BSTR strSecureBaseURL ) = 0;
			virtual HRESULT __stdcall parse (
					VARIANT varInput = vtMissing ) = 0;
			virtual HRESULT __stdcall parseURL (
					BSTR strURL ) = 0;
		};

	struct __declspec(uuid("0c05d096-f45b-4aca-ad1a-aa0bc25518dc"))
		IVBSAXEntityResolver : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall resolveEntity (
					BSTR * strPublicId,
					BSTR * strSystemId,
					VARIANT * varInput ) = 0;
		};

	struct __declspec(uuid("2ed7290a-4dd5-4b46-bb26-4e4155e77faa"))
		IVBSAXContentHandler : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall putref_documentLocator (
					struct IVBSAXLocator * _arg1 ) = 0;
			virtual HRESULT __stdcall startDocument ( ) = 0;
			virtual HRESULT __stdcall endDocument ( ) = 0;
			virtual HRESULT __stdcall startPrefixMapping (
					BSTR * strPrefix,
					BSTR * strURI ) = 0;
			virtual HRESULT __stdcall endPrefixMapping (
					BSTR * strPrefix ) = 0;
			virtual HRESULT __stdcall startElement (
					BSTR * strNamespaceURI,
					BSTR * strLocalName,
					BSTR * strQName,
					struct IVBSAXAttributes * oAttributes ) = 0;
			virtual HRESULT __stdcall endElement (
					BSTR * strNamespaceURI,
					BSTR * strLocalName,
					BSTR * strQName ) = 0;
			virtual HRESULT __stdcall characters (
					BSTR * strChars ) = 0;
			virtual HRESULT __stdcall ignorableWhitespace (
					BSTR * strChars ) = 0;
			virtual HRESULT __stdcall processingInstruction (
					BSTR * strTarget,
					BSTR * strData ) = 0;
			virtual HRESULT __stdcall skippedEntity (
					BSTR * strName ) = 0;
		};

	struct __declspec(uuid("796e7ac5-5aa2-4eff-acad-3faaf01a3288"))
		IVBSAXLocator : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_columnNumber (
					int * nColumn ) = 0;
			virtual HRESULT __stdcall get_lineNumber (
					int * nLine ) = 0;
			virtual HRESULT __stdcall get_publicId (
					BSTR * strPublicId ) = 0;
			virtual HRESULT __stdcall get_systemId (
					BSTR * strSystemId ) = 0;
		};

	struct __declspec(uuid("10dc0586-132b-4cac-8bb3-db00ac8b7ee0"))
		IVBSAXAttributes : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_length (
					int * nLength ) = 0;
			virtual HRESULT __stdcall getURI (
					int nIndex,
					BSTR * strURI ) = 0;
			virtual HRESULT __stdcall getLocalName (
					int nIndex,
					BSTR * strLocalName ) = 0;
			virtual HRESULT __stdcall getQName (
					int nIndex,
					BSTR * strQName ) = 0;
			virtual HRESULT __stdcall getIndexFromName (
					BSTR strURI,
					BSTR strLocalName,
					int * nIndex ) = 0;
			virtual HRESULT __stdcall getIndexFromQName (
					BSTR strQName,
					int * nIndex ) = 0;
			virtual HRESULT __stdcall getType (
					int nIndex,
					BSTR * strType ) = 0;
			virtual HRESULT __stdcall getTypeFromName (
					BSTR strURI,
					BSTR strLocalName,
					BSTR * strType ) = 0;
			virtual HRESULT __stdcall getTypeFromQName (
					BSTR strQName,
					BSTR * strType ) = 0;
			virtual HRESULT __stdcall getValue (
					int nIndex,
					BSTR * strValue ) = 0;
			virtual HRESULT __stdcall getValueFromName (
					BSTR strURI,
					BSTR strLocalName,
					BSTR * strValue ) = 0;
			virtual HRESULT __stdcall getValueFromQName (
					BSTR strQName,
					BSTR * strValue ) = 0;
		};

	struct __declspec(uuid("24fb3297-302d-4620-ba39-3a732d850558"))
		IVBSAXDTDHandler : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall notationDecl (
					BSTR * strName,
					BSTR * strPublicId,
					BSTR * strSystemId ) = 0;
			virtual HRESULT __stdcall unparsedEntityDecl (
					BSTR * strName,
					BSTR * strPublicId,
					BSTR * strSystemId,
					BSTR * strNotationName ) = 0;
		};

	struct __declspec(uuid("d963d3fe-173c-4862-9095-b92f66995f52"))
		IVBSAXErrorHandler : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall error (
					struct IVBSAXLocator * oLocator,
					BSTR * strErrorMessage,
					long nErrorCode ) = 0;
			virtual HRESULT __stdcall fatalError (
					struct IVBSAXLocator * oLocator,
					BSTR * strErrorMessage,
					long nErrorCode ) = 0;
			virtual HRESULT __stdcall ignorableWarning (
					struct IVBSAXLocator * oLocator,
					BSTR * strErrorMessage,
					long nErrorCode ) = 0;
		};

	struct __declspec(uuid("1299eb1b-5b88-433e-82de-82ca75ad4e04"))
		IVBSAXXMLFilter : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_parent (
					struct IVBSAXXMLReader * * oReader ) = 0;
			virtual HRESULT __stdcall putref_parent (
					struct IVBSAXXMLReader * oReader ) = 0;
		};

	struct __declspec(uuid("032aac35-8c0e-4d9d-979f-e3b702935576"))
		IVBSAXLexicalHandler : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall startDTD (
					BSTR * strName,
					BSTR * strPublicId,
					BSTR * strSystemId ) = 0;
			virtual HRESULT __stdcall endDTD ( ) = 0;
			virtual HRESULT __stdcall startEntity (
					BSTR * strName ) = 0;
			virtual HRESULT __stdcall endEntity (
					BSTR * strName ) = 0;
			virtual HRESULT __stdcall startCDATA ( ) = 0;
			virtual HRESULT __stdcall endCDATA ( ) = 0;
			virtual HRESULT __stdcall comment (
					BSTR * strChars ) = 0;
		};

	struct __declspec(uuid("e8917260-7579-4be1-b5dd-7afbfa6f077b"))
		IVBSAXDeclHandler : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall elementDecl (
					BSTR * strName,
					BSTR * strModel ) = 0;
			virtual HRESULT __stdcall attributeDecl (
					BSTR * strElementName,
					BSTR * strAttributeName,
					BSTR * strType,
					BSTR * strValueDefault,
					BSTR * strValue ) = 0;
			virtual HRESULT __stdcall internalEntityDecl (
					BSTR * strName,
					BSTR * strValue ) = 0;
			virtual HRESULT __stdcall externalEntityDecl (
					BSTR * strName,
					BSTR * strPublicId,
					BSTR * strSystemId ) = 0;
		};

	struct __declspec(uuid("4d7ff4ba-1565-4ea8-94e1-6e724a46f98d"))
		IMXWriter : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall put_output (
					VARIANT varDestination ) = 0;
			virtual HRESULT __stdcall get_output (
					VARIANT * varDestination ) = 0;
			virtual HRESULT __stdcall put_encoding (
					BSTR strEncoding ) = 0;
			virtual HRESULT __stdcall get_encoding (
					BSTR * strEncoding ) = 0;
			virtual HRESULT __stdcall put_byteOrderMark (
					VARIANT_BOOL fWriteByteOrderMark ) = 0;
			virtual HRESULT __stdcall get_byteOrderMark (
					VARIANT_BOOL * fWriteByteOrderMark ) = 0;
			virtual HRESULT __stdcall put_indent (
					VARIANT_BOOL fIndentMode ) = 0;
			virtual HRESULT __stdcall get_indent (
					VARIANT_BOOL * fIndentMode ) = 0;
			virtual HRESULT __stdcall put_standalone (
					VARIANT_BOOL fValue ) = 0;
			virtual HRESULT __stdcall get_standalone (
					VARIANT_BOOL * fValue ) = 0;
			virtual HRESULT __stdcall put_omitXMLDeclaration (
					VARIANT_BOOL fValue ) = 0;
			virtual HRESULT __stdcall get_omitXMLDeclaration (
					VARIANT_BOOL * fValue ) = 0;
			virtual HRESULT __stdcall put_version (
					BSTR strVersion ) = 0;
			virtual HRESULT __stdcall get_version (
					BSTR * strVersion ) = 0;
			virtual HRESULT __stdcall put_disableOutputEscaping (
					VARIANT_BOOL fValue ) = 0;
			virtual HRESULT __stdcall get_disableOutputEscaping (
					VARIANT_BOOL * fValue ) = 0;
			virtual HRESULT __stdcall flush ( ) = 0;
		};

	struct __declspec(uuid("f10d27cc-3ec0-415c-8ed8-77ab1c5e7262"))
		IMXAttributes : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall addAttribute (
					BSTR strURI,
					BSTR strLocalName,
					BSTR strQName,
					BSTR strType,
					BSTR strValue ) = 0;
			virtual HRESULT __stdcall addAttributeFromIndex (
					VARIANT varAtts,
					int nIndex ) = 0;
			virtual HRESULT __stdcall clear ( ) = 0;
			virtual HRESULT __stdcall removeAttribute (
					int nIndex ) = 0;
			virtual HRESULT __stdcall setAttribute (
					int nIndex,
					BSTR strURI,
					BSTR strLocalName,
					BSTR strQName,
					BSTR strType,
					BSTR strValue ) = 0;
			virtual HRESULT __stdcall setAttributes (
					VARIANT varAtts ) = 0;
			virtual HRESULT __stdcall setLocalName (
					int nIndex,
					BSTR strLocalName ) = 0;
			virtual HRESULT __stdcall setQName (
					int nIndex,
					BSTR strQName ) = 0;
			virtual HRESULT __stdcall setType (
					int nIndex,
					BSTR strType ) = 0;
			virtual HRESULT __stdcall setURI (
					int nIndex,
					BSTR strURI ) = 0;
			virtual HRESULT __stdcall setValue (
					int nIndex,
					BSTR strValue ) = 0;
		};

	struct __declspec(uuid("808f4e35-8d5a-4fbe-8466-33a41279ed30"))
		IMXReaderControl : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall abort ( ) = 0;
			virtual HRESULT __stdcall resume ( ) = 0;
			virtual HRESULT __stdcall suspend ( ) = 0;
		};

	struct __declspec(uuid("fa4bb38c-faf9-4cca-9302-d1dd0fe520db"))
		IMXSchemaDeclHandler : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall schemaElementDecl (
					struct ISchemaElement * oSchemaElement ) = 0;
		};

	struct __declspec(uuid("50ea08b3-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaItem : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_name (
					BSTR * name ) = 0;
			virtual HRESULT __stdcall get_namespaceURI (
					BSTR * namespaceURI ) = 0;
			virtual HRESULT __stdcall get_schema (
					struct ISchema * * schema ) = 0;
			virtual HRESULT __stdcall get_id (
					BSTR * id ) = 0;
			virtual HRESULT __stdcall get_itemType (
					SOMITEMTYPE * itemType ) = 0;
			virtual HRESULT __stdcall get_unhandledAttributes (
					struct IVBSAXAttributes * * attributes ) = 0;
			virtual HRESULT __stdcall writeAnnotation (
					IUnknown * annotationSink,
					VARIANT_BOOL * isWritten ) = 0;
		};

	struct __declspec(uuid("50ea08b5-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaParticle : ISchemaItem
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_minOccurs (
					VARIANT * minOccurs ) = 0;
			virtual HRESULT __stdcall get_maxOccurs (
					VARIANT * maxOccurs ) = 0;
		};

	struct __declspec(uuid("50ea08b7-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaElement : ISchemaParticle
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_type (
					struct ISchemaType * * type ) = 0;
			virtual HRESULT __stdcall get_scope (
					struct ISchemaComplexType * * scope ) = 0;
			virtual HRESULT __stdcall get_defaultValue (
					BSTR * defaultValue ) = 0;
			virtual HRESULT __stdcall get_fixedValue (
					BSTR * fixedValue ) = 0;
			virtual HRESULT __stdcall get_isNillable (
					VARIANT_BOOL * nillable ) = 0;
			virtual HRESULT __stdcall get_identityConstraints (
					struct ISchemaItemCollection * * constraints ) = 0;
			virtual HRESULT __stdcall get_substitutionGroup (
					struct ISchemaElement * * element ) = 0;
			virtual HRESULT __stdcall get_substitutionGroupExclusions (
					SCHEMADERIVATIONMETHOD * exclusions ) = 0;
			virtual HRESULT __stdcall get_disallowedSubstitutions (
					SCHEMADERIVATIONMETHOD * disallowed ) = 0;
			virtual HRESULT __stdcall get_isAbstract (
					VARIANT_BOOL * abstract ) = 0;
			virtual HRESULT __stdcall get_isReference (
					VARIANT_BOOL * reference ) = 0;
		};

	struct __declspec(uuid("50ea08b4-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchema : ISchemaItem
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_targetNamespace (
					BSTR * targetNamespace ) = 0;
			virtual HRESULT __stdcall get_version (
					BSTR * version ) = 0;
			virtual HRESULT __stdcall get_types (
					struct ISchemaItemCollection * * types ) = 0;
			virtual HRESULT __stdcall get_elements (
					struct ISchemaItemCollection * * elements ) = 0;
			virtual HRESULT __stdcall get_attributes (
					struct ISchemaItemCollection * * attributes ) = 0;
			virtual HRESULT __stdcall get_attributeGroups (
					struct ISchemaItemCollection * * attributeGroups ) = 0;
			virtual HRESULT __stdcall get_modelGroups (
					struct ISchemaItemCollection * * modelGroups ) = 0;
			virtual HRESULT __stdcall get_notations (
					struct ISchemaItemCollection * * notations ) = 0;
			virtual HRESULT __stdcall get_schemaLocations (
					struct ISchemaStringCollection * * schemaLocations ) = 0;
		};

	struct __declspec(uuid("50ea08b2-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaItemCollection : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_item (
					long index,
					struct ISchemaItem * * item ) = 0;
			virtual HRESULT __stdcall itemByName (
					BSTR name,
					struct ISchemaItem * * item ) = 0;
			virtual HRESULT __stdcall itemByQName (
					BSTR name,
					BSTR namespaceURI,
					struct ISchemaItem * * item ) = 0;
			virtual HRESULT __stdcall get_length (
					long * length ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
		};

	struct __declspec(uuid("50ea08b1-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaStringCollection : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_item (
					long index,
					BSTR * bstr ) = 0;
			virtual HRESULT __stdcall get_length (
					long * length ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
		};

	enum _SOMITEMTYPE
	{
		SOMITEM_SCHEMA = 4096,
		SOMITEM_ATTRIBUTE = 4097,
		SOMITEM_ATTRIBUTEGROUP = 4098,
		SOMITEM_NOTATION = 4099,
		SOMITEM_ANNOTATION = 4100,
		SOMITEM_IDENTITYCONSTRAINT = 4352,
		SOMITEM_KEY = 4353,
		SOMITEM_KEYREF = 4354,
		SOMITEM_UNIQUE = 4355,
		SOMITEM_ANYTYPE = 8192,
		SOMITEM_DATATYPE = 8448,
		SOMITEM_DATATYPE_ANYTYPE = 8449,
		SOMITEM_DATATYPE_ANYURI = 8450,
		SOMITEM_DATATYPE_BASE64BINARY = 8451,
		SOMITEM_DATATYPE_BOOLEAN = 8452,
		SOMITEM_DATATYPE_BYTE = 8453,
		SOMITEM_DATATYPE_DATE = 8454,
		SOMITEM_DATATYPE_DATETIME = 8455,
		SOMITEM_DATATYPE_DAY = 8456,
		SOMITEM_DATATYPE_DECIMAL = 8457,
		SOMITEM_DATATYPE_DOUBLE = 8458,
		SOMITEM_DATATYPE_DURATION = 8459,
		SOMITEM_DATATYPE_ENTITIES = 8460,
		SOMITEM_DATATYPE_ENTITY = 8461,
		SOMITEM_DATATYPE_FLOAT = 8462,
		SOMITEM_DATATYPE_HEXBINARY = 8463,
		SOMITEM_DATATYPE_ID = 8464,
		SOMITEM_DATATYPE_IDREF = 8465,
		SOMITEM_DATATYPE_IDREFS = 8466,
		SOMITEM_DATATYPE_INT = 8467,
		SOMITEM_DATATYPE_INTEGER = 8468,
		SOMITEM_DATATYPE_LANGUAGE = 8469,
		SOMITEM_DATATYPE_LONG = 8470,
		SOMITEM_DATATYPE_MONTH = 8471,
		SOMITEM_DATATYPE_MONTHDAY = 8472,
		SOMITEM_DATATYPE_NAME = 8473,
		SOMITEM_DATATYPE_NCNAME = 8474,
		SOMITEM_DATATYPE_NEGATIVEINTEGER = 8475,
		SOMITEM_DATATYPE_NMTOKEN = 8476,
		SOMITEM_DATATYPE_NMTOKENS = 8477,
		SOMITEM_DATATYPE_NONNEGATIVEINTEGER = 8478,
		SOMITEM_DATATYPE_NONPOSITIVEINTEGER = 8479,
		SOMITEM_DATATYPE_NORMALIZEDSTRING = 8480,
		SOMITEM_DATATYPE_NOTATION = 8481,
		SOMITEM_DATATYPE_POSITIVEINTEGER = 8482,
		SOMITEM_DATATYPE_QNAME = 8483,
		SOMITEM_DATATYPE_SHORT = 8484,
		SOMITEM_DATATYPE_STRING = 8485,
		SOMITEM_DATATYPE_TIME = 8486,
		SOMITEM_DATATYPE_TOKEN = 8487,
		SOMITEM_DATATYPE_UNSIGNEDBYTE = 8488,
		SOMITEM_DATATYPE_UNSIGNEDINT = 8489,
		SOMITEM_DATATYPE_UNSIGNEDLONG = 8490,
		SOMITEM_DATATYPE_UNSIGNEDSHORT = 8491,
		SOMITEM_DATATYPE_YEAR = 8492,
		SOMITEM_DATATYPE_YEARMONTH = 8493,
		SOMITEM_DATATYPE_ANYSIMPLETYPE = 8703,
		SOMITEM_SIMPLETYPE = 8704,
		SOMITEM_COMPLEXTYPE = 9216,
		SOMITEM_PARTICLE = 16384,
		SOMITEM_ANY = 16385,
		SOMITEM_ANYATTRIBUTE = 16386,
		SOMITEM_ELEMENT = 16387,
		SOMITEM_GROUP = 16640,
		SOMITEM_ALL = 16641,
		SOMITEM_CHOICE = 16642,
		SOMITEM_SEQUENCE = 16643,
		SOMITEM_EMPTYPARTICLE = 16644,
		SOMITEM_NULL = 2048,
		SOMITEM_NULL_TYPE = 10240,
		SOMITEM_NULL_ANY = 18433,
		SOMITEM_NULL_ANYATTRIBUTE = 18434,
		SOMITEM_NULL_ELEMENT = 18435
	};

	struct __declspec(uuid("50ea08b8-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaType : ISchemaItem
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_baseTypes (
					struct ISchemaItemCollection * * baseTypes ) = 0;
			virtual HRESULT __stdcall get_final (
					SCHEMADERIVATIONMETHOD * final ) = 0;
			virtual HRESULT __stdcall get_variety (
					SCHEMATYPEVARIETY * variety ) = 0;
			virtual HRESULT __stdcall get_derivedBy (
					SCHEMADERIVATIONMETHOD * derivedBy ) = 0;
			virtual HRESULT __stdcall isValid (
					BSTR data,
					VARIANT_BOOL * valid ) = 0;
			virtual HRESULT __stdcall get_minExclusive (
					BSTR * minExclusive ) = 0;
			virtual HRESULT __stdcall get_minInclusive (
					BSTR * minInclusive ) = 0;
			virtual HRESULT __stdcall get_maxExclusive (
					BSTR * maxExclusive ) = 0;
			virtual HRESULT __stdcall get_maxInclusive (
					BSTR * maxInclusive ) = 0;
			virtual HRESULT __stdcall get_totalDigits (
					VARIANT * totalDigits ) = 0;
			virtual HRESULT __stdcall get_fractionDigits (
					VARIANT * fractionDigits ) = 0;
			virtual HRESULT __stdcall get_length (
					VARIANT * length ) = 0;
			virtual HRESULT __stdcall get_minLength (
					VARIANT * minLength ) = 0;
			virtual HRESULT __stdcall get_maxLength (
					VARIANT * maxLength ) = 0;
			virtual HRESULT __stdcall get_enumeration (
					struct ISchemaStringCollection * * enumeration ) = 0;
			virtual HRESULT __stdcall get_whitespace (
					SCHEMAWHITESPACE * whitespace ) = 0;
			virtual HRESULT __stdcall get_patterns (
					struct ISchemaStringCollection * * patterns ) = 0;
		};

	enum _SCHEMADERIVATIONMETHOD
	{
		SCHEMADERIVATIONMETHOD_EMPTY = 0,
		SCHEMADERIVATIONMETHOD_SUBSTITUTION = 1,
		SCHEMADERIVATIONMETHOD_EXTENSION = 2,
		SCHEMADERIVATIONMETHOD_RESTRICTION = 4,
		SCHEMADERIVATIONMETHOD_LIST = 8,
		SCHEMADERIVATIONMETHOD_UNION = 16,
		SCHEMADERIVATIONMETHOD_ALL = 255,
		SCHEMADERIVATIONMETHOD_NONE = 256
	};

	enum _SCHEMATYPEVARIETY
	{
		SCHEMATYPEVARIETY_NONE = -1,
		SCHEMATYPEVARIETY_ATOMIC = 0,
		SCHEMATYPEVARIETY_LIST = 1,
		SCHEMATYPEVARIETY_UNION = 2
	};

	enum _SCHEMAWHITESPACE
	{
		SCHEMAWHITESPACE_NONE = -1,
		SCHEMAWHITESPACE_PRESERVE = 0,
		SCHEMAWHITESPACE_REPLACE = 1,
		SCHEMAWHITESPACE_COLLAPSE = 2
	};

	struct __declspec(uuid("50ea08b9-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaComplexType : ISchemaType
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_isAbstract (
					VARIANT_BOOL * abstract ) = 0;
			virtual HRESULT __stdcall get_anyAttribute (
					struct ISchemaAny * * anyAttribute ) = 0;
			virtual HRESULT __stdcall get_attributes (
					struct ISchemaItemCollection * * attributes ) = 0;
			virtual HRESULT __stdcall get_contentType (
					SCHEMACONTENTTYPE * contentType ) = 0;
			virtual HRESULT __stdcall get_contentModel (
					struct ISchemaModelGroup * * contentModel ) = 0;
			virtual HRESULT __stdcall get_prohibitedSubstitutions (
					SCHEMADERIVATIONMETHOD * prohibited ) = 0;
		};

	struct __declspec(uuid("50ea08bc-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaAny : ISchemaParticle
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_namespaces (
					struct ISchemaStringCollection * * namespaces ) = 0;
			virtual HRESULT __stdcall get_processContents (
					SCHEMAPROCESSCONTENTS * processContents ) = 0;
		};

	enum _SCHEMAPROCESSCONTENTS
	{
		SCHEMAPROCESSCONTENTS_NONE = 0,
		SCHEMAPROCESSCONTENTS_SKIP = 1,
		SCHEMAPROCESSCONTENTS_LAX = 2,
		SCHEMAPROCESSCONTENTS_STRICT = 3
	};

	enum _SCHEMACONTENTTYPE
	{
		SCHEMACONTENTTYPE_EMPTY = 0,
		SCHEMACONTENTTYPE_TEXTONLY = 1,
		SCHEMACONTENTTYPE_ELEMENTONLY = 2,
		SCHEMACONTENTTYPE_MIXED = 3
	};

	struct __declspec(uuid("50ea08bb-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaModelGroup : ISchemaParticle
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_particles (
					struct ISchemaItemCollection * * particles ) = 0;
		};

	struct __declspec(uuid("c90352f7-643c-4fbc-bb23-e996eb2d51fd"))
		IMXXMLFilter : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall getFeature (
					BSTR strName,
					VARIANT_BOOL * fValue ) = 0;
			virtual HRESULT __stdcall putFeature (
					BSTR strName,
					VARIANT_BOOL fValue ) = 0;
			virtual HRESULT __stdcall getProperty (
					BSTR strName,
					VARIANT * varValue ) = 0;
			virtual HRESULT __stdcall putProperty (
					BSTR strName,
					VARIANT varValue ) = 0;
			virtual HRESULT __stdcall get_entityResolver (
					IUnknown * * oResolver ) = 0;
			virtual HRESULT __stdcall putref_entityResolver (
					IUnknown * oResolver ) = 0;
			virtual HRESULT __stdcall get_contentHandler (
					IUnknown * * oHandler ) = 0;
			virtual HRESULT __stdcall putref_contentHandler (
					IUnknown * oHandler ) = 0;
			virtual HRESULT __stdcall get_dtdHandler (
					IUnknown * * oHandler ) = 0;
			virtual HRESULT __stdcall putref_dtdHandler (
					IUnknown * oHandler ) = 0;
			virtual HRESULT __stdcall get_errorHandler (
					IUnknown * * oHandler ) = 0;
			virtual HRESULT __stdcall putref_errorHandler (
					IUnknown * oHandler ) = 0;
		};

	struct __declspec(uuid("50ea08b0-dd1b-4664-9a50-c2f40f4bd79a"))
		IXMLDOMSchemaCollection2 : IXMLDOMSchemaCollection
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall validate ( ) = 0;
			virtual HRESULT __stdcall put_validateOnLoad (
					VARIANT_BOOL validateOnLoad ) = 0;
			virtual HRESULT __stdcall get_validateOnLoad (
					VARIANT_BOOL * validateOnLoad ) = 0;
			virtual HRESULT __stdcall getSchema (
					BSTR namespaceURI,
					struct ISchema * * schema ) = 0;
			virtual HRESULT __stdcall getDeclaration (
					struct IXMLDOMNode * node,
					struct ISchemaItem * * item ) = 0;
		};

	struct __declspec(uuid("50ea08b6-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaAttribute : ISchemaItem
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_type (
					struct ISchemaType * * type ) = 0;
			virtual HRESULT __stdcall get_scope (
					struct ISchemaComplexType * * scope ) = 0;
			virtual HRESULT __stdcall get_defaultValue (
					BSTR * defaultValue ) = 0;
			virtual HRESULT __stdcall get_fixedValue (
					BSTR * fixedValue ) = 0;
			virtual HRESULT __stdcall get_use (
					SCHEMAUSE * use ) = 0;
			virtual HRESULT __stdcall get_isReference (
					VARIANT_BOOL * reference ) = 0;
		};

	enum _SCHEMAUSE
	{
		SCHEMAUSE_OPTIONAL = 0,
		SCHEMAUSE_PROHIBITED = 1,
		SCHEMAUSE_REQUIRED = 2
	};

	struct __declspec(uuid("50ea08ba-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaAttributeGroup : ISchemaItem
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_anyAttribute (
					struct ISchemaAny * * anyAttribute ) = 0;
			virtual HRESULT __stdcall get_attributes (
					struct ISchemaItemCollection * * attributes ) = 0;
		};

	struct __declspec(uuid("50ea08bd-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaIdentityConstraint : ISchemaItem
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_selector (
					BSTR * selector ) = 0;
			virtual HRESULT __stdcall get_fields (
					struct ISchemaStringCollection * * fields ) = 0;
			virtual HRESULT __stdcall get_referencedKey (
					struct ISchemaIdentityConstraint * * key ) = 0;
		};

	struct __declspec(uuid("50ea08be-dd1b-4664-9a50-c2f40f4bd79a"))
		ISchemaNotation : ISchemaItem
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_systemIdentifier (
					BSTR * uri ) = 0;
			virtual HRESULT __stdcall get_publicIdentifier (
					BSTR * uri ) = 0;
		};

	struct __declspec(uuid("65725580-9b5d-11d0-9bfe-00c04fc99c8e"))
		IXMLElementCollection : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall put_length (
					long p ) = 0;
			virtual HRESULT __stdcall get_length (
					long * p ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
			virtual HRESULT __stdcall item (
					VARIANT var1,
					VARIANT var2,
					IDispatch * * ppDisp ) = 0;
		};

	struct __declspec(uuid("f52e2b61-18a1-11d1-b105-00805f49916b"))
		IXMLDocument : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_root (
					struct IXMLElement * * p ) = 0;
			virtual HRESULT __stdcall get_fileSize (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_fileModifiedDate (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_fileUpdatedDate (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_url (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_url (
					BSTR p ) = 0;
			virtual HRESULT __stdcall get_mimeType (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_readyState (
					long * pl ) = 0;
			virtual HRESULT __stdcall get_charset (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_charset (
					BSTR p ) = 0;
			virtual HRESULT __stdcall get_version (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_doctype (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_dtdURL (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall createElement (
					VARIANT vType,
					VARIANT var1,
					struct IXMLElement * * ppElem ) = 0;
		};

	struct __declspec(uuid("3f7f31ac-e15f-11d0-9c25-00c04fc99c8e"))
		IXMLElement : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_tagName (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_tagName (
					BSTR p ) = 0;
			virtual HRESULT __stdcall get_parent (
					struct IXMLElement * * ppParent ) = 0;
			virtual HRESULT __stdcall setAttribute (
					BSTR strPropertyName,
					VARIANT PropertyValue ) = 0;
			virtual HRESULT __stdcall getAttribute (
					BSTR strPropertyName,
					VARIANT * PropertyValue ) = 0;
			virtual HRESULT __stdcall removeAttribute (
					BSTR strPropertyName ) = 0;
			virtual HRESULT __stdcall get_children (
					struct IXMLElementCollection * * pp ) = 0;
			virtual HRESULT __stdcall get_type (
					long * plType ) = 0;
			virtual HRESULT __stdcall get_text (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_text (
					BSTR p ) = 0;
			virtual HRESULT __stdcall addChild (
					struct IXMLElement * pChildElem,
					long lIndex,
					long lReserved ) = 0;
			virtual HRESULT __stdcall removeChild (
					struct IXMLElement * pChildElem ) = 0;
		};

	struct __declspec(uuid("2b8de2fe-8d2d-11d1-b2fc-00c04fd915a9"))
		IXMLDocument2 : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_root (
					struct IXMLElement2 * * p ) = 0;
			virtual HRESULT __stdcall get_fileSize (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_fileModifiedDate (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_fileUpdatedDate (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_url (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_url (
					BSTR p ) = 0;
			virtual HRESULT __stdcall get_mimeType (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_readyState (
					long * pl ) = 0;
			virtual HRESULT __stdcall get_charset (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_charset (
					BSTR p ) = 0;
			virtual HRESULT __stdcall get_version (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_doctype (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall get_dtdURL (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall createElement (
					VARIANT vType,
					VARIANT var1,
					struct IXMLElement2 * * ppElem ) = 0;
			virtual HRESULT __stdcall get_async (
					VARIANT_BOOL * pf ) = 0;
			virtual HRESULT __stdcall put_async (
					VARIANT_BOOL pf ) = 0;
		};

	struct __declspec(uuid("2b8de2ff-8d2d-11d1-b2fc-00c04fd915a9"))
		IXMLElement2 : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_tagName (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_tagName (
					BSTR p ) = 0;
			virtual HRESULT __stdcall get_parent (
					struct IXMLElement2 * * ppParent ) = 0;
			virtual HRESULT __stdcall setAttribute (
					BSTR strPropertyName,
					VARIANT PropertyValue ) = 0;
			virtual HRESULT __stdcall getAttribute (
					BSTR strPropertyName,
					VARIANT * PropertyValue ) = 0;
			virtual HRESULT __stdcall removeAttribute (
					BSTR strPropertyName ) = 0;
			virtual HRESULT __stdcall get_children (
					struct IXMLElementCollection * * pp ) = 0;
			virtual HRESULT __stdcall get_type (
					long * plType ) = 0;
			virtual HRESULT __stdcall get_text (
					BSTR * p ) = 0;
			virtual HRESULT __stdcall put_text (
					BSTR p ) = 0;
			virtual HRESULT __stdcall addChild (
					struct IXMLElement2 * pChildElem,
					long lIndex,
					long lReserved ) = 0;
			virtual HRESULT __stdcall removeChild (
					struct IXMLElement2 * pChildElem ) = 0;
			virtual HRESULT __stdcall get_attributes (
					struct IXMLElementCollection * * pp ) = 0;
		};

	struct __declspec(uuid("d4d4a0fc-3b73-11d1-b2b4-00c04fb92596"))
		IXMLAttribute : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_name (
					BSTR * n ) = 0;
			virtual HRESULT __stdcall get_value (
					BSTR * v ) = 0;
		};

	struct __declspec(uuid("948c5ad3-c58d-11d0-9c0b-00c04fc99c8e"))
		IXMLError : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall GetErrorInfo (
					struct _xml_error * pErrorReturn ) = 0;
		};

	struct _xml_error
	{
		unsigned int _nLine;
		BSTR _pchBuf;
		unsigned int _cchBuf;
		unsigned int _ich;
		BSTR _pszFound;
		BSTR _pszExpected;
		unsigned long _reserved1;
		unsigned long _reserved2;
	};

	enum tagXMLEMEM_TYPE
	{
		XMLELEMTYPE_ELEMENT = 0,
		XMLELEMTYPE_TEXT = 1,
		XMLELEMTYPE_COMMENT = 2,
		XMLELEMTYPE_DOCUMENT = 3,
		XMLELEMTYPE_DTD = 4,
		XMLELEMTYPE_PI = 5,
		XMLELEMTYPE_OTHER = 6
	};

	struct __declspec(uuid("aa634fc7-5888-44a7-a257-3a47150d3a0e"))
		IXMLDOMSelection : IXMLDOMNodeList
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_expr (
					BSTR * expression ) = 0;
			virtual HRESULT __stdcall put_expr (
					BSTR expression ) = 0;
			virtual HRESULT __stdcall get_context (
					struct IXMLDOMNode * * ppNode ) = 0;
			virtual HRESULT __stdcall putref_context (
					struct IXMLDOMNode * ppNode ) = 0;
			virtual HRESULT __stdcall peekNode (
					struct IXMLDOMNode * * ppNode ) = 0;
			virtual HRESULT __stdcall matches (
					struct IXMLDOMNode * pNode,
					struct IXMLDOMNode * * ppNode ) = 0;
			virtual HRESULT __stdcall removeNext (
					struct IXMLDOMNode * * ppNode ) = 0;
			virtual HRESULT __stdcall removeAll ( ) = 0;
			virtual HRESULT __stdcall clone (
					struct IXMLDOMSelection * * ppNode ) = 0;
			virtual HRESULT __stdcall getProperty (
					BSTR name,
					VARIANT * value ) = 0;
			virtual HRESULT __stdcall setProperty (
					BSTR name,
					VARIANT value ) = 0;
		};

	struct __declspec(uuid("3efaa427-272f-11d2-836f-0000f87a7782"))
		XMLDOMDocumentEvents : IDispatch
		{};

	struct __declspec(uuid("310afa62-0575-11d2-9ca9-0060b0ec3d39"))
		IDSOControl : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_XMLDocument (
					struct IXMLDOMDocument * * ppDoc ) = 0;
			virtual HRESULT __stdcall put_XMLDocument (
					struct IXMLDOMDocument * ppDoc ) = 0;
			virtual HRESULT __stdcall get_JavaDSOCompatible (
					long * fJavaDSOCompatible ) = 0;
			virtual HRESULT __stdcall put_JavaDSOCompatible (
					long fJavaDSOCompatible ) = 0;
			virtual HRESULT __stdcall get_readyState (
					long * state ) = 0;
		};

	struct __declspec(uuid("ed8c108d-4349-11d2-91a4-00c04f7969e8"))
		IXMLHTTPRequest : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall open (
					BSTR bstrMethod,
					BSTR bstrUrl,
					VARIANT varAsync = vtMissing,
					VARIANT bstrUser = vtMissing,
					VARIANT bstrPassword = vtMissing ) = 0;
			virtual HRESULT __stdcall setRequestHeader (
					BSTR bstrHeader,
					BSTR bstrValue ) = 0;
			virtual HRESULT __stdcall getResponseHeader (
					BSTR bstrHeader,
					BSTR * pbstrValue ) = 0;
			virtual HRESULT __stdcall getAllResponseHeaders (
					BSTR * pbstrHeaders ) = 0;
			virtual HRESULT __stdcall send (
					VARIANT varBody = vtMissing ) = 0;
			virtual HRESULT __stdcall abort ( ) = 0;
			virtual HRESULT __stdcall get_status (
					long * plStatus ) = 0;
			virtual HRESULT __stdcall get_statusText (
					BSTR * pbstrStatus ) = 0;
			virtual HRESULT __stdcall get_responseXML (
					IDispatch * * ppBody ) = 0;
			virtual HRESULT __stdcall get_responseText (
					BSTR * pbstrBody ) = 0;
			virtual HRESULT __stdcall get_responseBody (
					VARIANT * pvarBody ) = 0;
			virtual HRESULT __stdcall get_responseStream (
					VARIANT * pvarBody ) = 0;
			virtual HRESULT __stdcall get_readyState (
					long * plState ) = 0;
			virtual HRESULT __stdcall put_onreadystatechange (
					IDispatch * _arg1 ) = 0;
		};

	enum _SERVERXMLHTTP_OPTION
	{
		SXH_OPTION_URL = -1,
		SXH_OPTION_URL_CODEPAGE = 0,
		SXH_OPTION_ESCAPE_PERCENT_IN_URL = 1,
		SXH_OPTION_IGNORE_SERVER_SSL_CERT_ERROR_FLAGS = 2,
		SXH_OPTION_SELECT_CLIENT_SSL_CERT = 3
	};

	enum _SXH_SERVER_CERT_OPTION
	{
		SXH_SERVER_CERT_IGNORE_UNKNOWN_CA = 256,
		SXH_SERVER_CERT_IGNORE_WRONG_USAGE = 512,
		SXH_SERVER_CERT_IGNORE_CERT_CN_INVALID = 4096,
		SXH_SERVER_CERT_IGNORE_CERT_DATE_INVALID = 8192,
		SXH_SERVER_CERT_IGNORE_ALL_SERVER_ERRORS = 13056
	};

	enum _SXH_PROXY_SETTING
	{
		SXH_PROXY_SET_DEFAULT = 0,
		SXH_PROXY_SET_PRECONFIG = 0,
		SXH_PROXY_SET_DIRECT = 1,
		SXH_PROXY_SET_PROXY = 2
	};

	struct __declspec(uuid("2e9196bf-13ba-4dd4-91ca-6c571f281495"))
		IServerXMLHTTPRequest : IXMLHTTPRequest
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall setTimeouts (
					long resolveTimeout,
					long connectTimeout,
					long sendTimeout,
					long receiveTimeout ) = 0;
			virtual HRESULT __stdcall waitForResponse (
					VARIANT timeoutInSeconds,
					VARIANT_BOOL * isSuccessful ) = 0;
			virtual HRESULT __stdcall getOption (
					SERVERXMLHTTP_OPTION option,
					VARIANT * value ) = 0;
			virtual HRESULT __stdcall setOption (
					SERVERXMLHTTP_OPTION option,
					VARIANT value ) = 0;
		};

	struct __declspec(uuid("2e01311b-c322-4b0a-bd77-b90cfdc8dce7"))
		IServerXMLHTTPRequest2 : IServerXMLHTTPRequest
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall setProxy (
					SXH_PROXY_SETTING proxySetting,
					VARIANT varProxyServer = vtMissing,
					VARIANT varBypassList = vtMissing ) = 0;
			virtual HRESULT __stdcall setProxyCredentials (
					BSTR bstrUserName,
					BSTR bstrPassword ) = 0;
		};

	struct __declspec(uuid("c90352f4-643c-4fbc-bb23-e996eb2d51fd"))
		IMXNamespacePrefixes : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall get_item (
					long index,
					BSTR * prefix ) = 0;
			virtual HRESULT __stdcall get_length (
					long * length ) = 0;
			virtual HRESULT __stdcall get__newEnum (
					IUnknown * * ppUnk ) = 0;
		};

	struct __declspec(uuid("c90352f5-643c-4fbc-bb23-e996eb2d51fd"))
		IVBMXNamespaceManager : IDispatch
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall put_allowOverride (
					VARIANT_BOOL fOverride ) = 0;
			virtual HRESULT __stdcall get_allowOverride (
					VARIANT_BOOL * fOverride ) = 0;
			virtual HRESULT __stdcall reset ( ) = 0;
			virtual HRESULT __stdcall pushContext ( ) = 0;
			virtual HRESULT __stdcall pushNodeContext (
					struct IXMLDOMNode * contextNode,
					VARIANT_BOOL fDeep ) = 0;
			virtual HRESULT __stdcall popContext ( ) = 0;
			virtual HRESULT __stdcall declarePrefix (
					BSTR prefix,
					BSTR namespaceURI ) = 0;
			virtual HRESULT __stdcall getDeclaredPrefixes (
					struct IMXNamespacePrefixes * * prefixes ) = 0;
			virtual HRESULT __stdcall getPrefixes (
					BSTR namespaceURI,
					struct IMXNamespacePrefixes * * prefixes ) = 0;
			virtual HRESULT __stdcall getURI (
					BSTR prefix,
					VARIANT * uri ) = 0;
			virtual HRESULT __stdcall getURIFromNode (
					BSTR strPrefix,
					struct IXMLDOMNode * contextNode,
					VARIANT * uri ) = 0;
		};

	struct __declspec(uuid("c90352f6-643c-4fbc-bb23-e996eb2d51fd"))
		IMXNamespaceManager : IUnknown
		{
			//
			// Raw methods provided by interface
			//

			virtual HRESULT __stdcall putAllowOverride (
					VARIANT_BOOL fOverride ) = 0;
			virtual HRESULT __stdcall getAllowOverride (
					VARIANT_BOOL * fOverride ) = 0;
			virtual HRESULT __stdcall reset ( ) = 0;
			virtual HRESULT __stdcall pushContext ( ) = 0;
			virtual HRESULT __stdcall pushNodeContext (
					struct IXMLDOMNode * contextNode,
					VARIANT_BOOL fDeep ) = 0;
			virtual HRESULT __stdcall popContext ( ) = 0;
			virtual HRESULT __stdcall declarePrefix (
					unsigned short * prefix,
					unsigned short * namespaceURI ) = 0;
			virtual HRESULT __stdcall getDeclaredPrefix (
					long nIndex,
					unsigned short * pwchPrefix,
					int * pcchPrefix ) = 0;
			virtual HRESULT __stdcall getPrefix (
					unsigned short * pwszNamespaceURI,
					long nIndex,
					unsigned short * pwchPrefix,
					int * pcchPrefix ) = 0;
			virtual HRESULT __stdcall getURI (
					unsigned short * pwchPrefix,
					struct IXMLDOMNode * pContextNode,
					unsigned short * pwchUri,
					int * pcchUri ) = 0;
		};

	struct __declspec(uuid("f6d90f11-9c73-11d3-b32e-00c04f990bb4"))
		DOMDocument;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("f5078f1b-c551-11d3-89b9-0000f81fe221"))
		DOMDocument26;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("f5078f32-c551-11d3-89b9-0000f81fe221"))
		DOMDocument30;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("88d969c0-f192-11d4-a65f-0040963251e5"))
		DOMDocument40;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("88d96a05-f192-11d4-a65f-0040963251e5"))
		DOMDocument60;
	// [ default ] interface IXMLDOMDocument3
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("f6d90f12-9c73-11d3-b32e-00c04f990bb4"))
		FreeThreadedDOMDocument;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("f5078f1c-c551-11d3-89b9-0000f81fe221"))
		FreeThreadedDOMDocument26;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("f5078f33-c551-11d3-89b9-0000f81fe221"))
		FreeThreadedDOMDocument30;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("88d969c1-f192-11d4-a65f-0040963251e5"))
		FreeThreadedDOMDocument40;
	// [ default ] interface IXMLDOMDocument2
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("88d96a06-f192-11d4-a65f-0040963251e5"))
		FreeThreadedDOMDocument60;
	// [ default ] interface IXMLDOMDocument3
	// [ default, source ] dispinterface XMLDOMDocumentEvents

	struct __declspec(uuid("373984c9-b845-449b-91e7-45ac83036ade"))
		XMLSchemaCache;
	// [ default ] interface IXMLDOMSchemaCollection

	struct __declspec(uuid("f5078f1d-c551-11d3-89b9-0000f81fe221"))
		XMLSchemaCache26;
	// [ default ] interface IXMLDOMSchemaCollection

	struct __declspec(uuid("f5078f34-c551-11d3-89b9-0000f81fe221"))
		XMLSchemaCache30;
	// [ default ] interface IXMLDOMSchemaCollection

	struct __declspec(uuid("88d969c2-f192-11d4-a65f-0040963251e5"))
		XMLSchemaCache40;
	// [ default ] interface IXMLDOMSchemaCollection2

	struct __declspec(uuid("88d96a07-f192-11d4-a65f-0040963251e5"))
		XMLSchemaCache60;
	// [ default ] interface IXMLDOMSchemaCollection2

	struct __declspec(uuid("2933bf94-7b36-11d2-b20e-00c04f983e60"))
		XSLTemplate;
	// [ default ] interface IXSLTemplate

	struct __declspec(uuid("f5078f21-c551-11d3-89b9-0000f81fe221"))
		XSLTemplate26;
	// [ default ] interface IXSLTemplate

	struct __declspec(uuid("f5078f36-c551-11d3-89b9-0000f81fe221"))
		XSLTemplate30;
	// [ default ] interface IXSLTemplate

	struct __declspec(uuid("88d969c3-f192-11d4-a65f-0040963251e5"))
		XSLTemplate40;
	// [ default ] interface IXSLTemplate

	struct __declspec(uuid("88d96a08-f192-11d4-a65f-0040963251e5"))
		XSLTemplate60;
	// [ default ] interface IXSLTemplate

	struct __declspec(uuid("f6d90f14-9c73-11d3-b32e-00c04f990bb4"))
		DSOControl;
	// [ default ] interface IDSOControl

	struct __declspec(uuid("f5078f1f-c551-11d3-89b9-0000f81fe221"))
		DSOControl26;
	// [ default ] interface IDSOControl

	struct __declspec(uuid("f5078f39-c551-11d3-89b9-0000f81fe221"))
		DSOControl30;
	// [ default ] interface IDSOControl

	struct __declspec(uuid("88d969c4-f192-11d4-a65f-0040963251e5"))
		DSOControl40;
	// [ default ] interface IDSOControl

	struct __declspec(uuid("f6d90f16-9c73-11d3-b32e-00c04f990bb4"))
		XMLHTTP;
	// [ default ] interface IXMLHTTPRequest

	struct __declspec(uuid("f5078f1e-c551-11d3-89b9-0000f81fe221"))
		XMLHTTP26;
	// [ default ] interface IXMLHTTPRequest

	struct __declspec(uuid("f5078f35-c551-11d3-89b9-0000f81fe221"))
		XMLHTTP30;
	// [ default ] interface IXMLHTTPRequest

	struct __declspec(uuid("88d969c5-f192-11d4-a65f-0040963251e5"))
		XMLHTTP40;
	// [ default ] interface IXMLHTTPRequest

	struct __declspec(uuid("88d96a0a-f192-11d4-a65f-0040963251e5"))
		XMLHTTP60;
	// [ default ] interface IXMLHTTPRequest

	struct __declspec(uuid("afba6b42-5692-48ea-8141-dc517dcf0ef1"))
		ServerXMLHTTP;
	// [ default ] interface IServerXMLHTTPRequest

	struct __declspec(uuid("afb40ffd-b609-40a3-9828-f88bbe11e4e3"))
		ServerXMLHTTP30;
	// [ default ] interface IServerXMLHTTPRequest

	struct __declspec(uuid("88d969c6-f192-11d4-a65f-0040963251e5"))
		ServerXMLHTTP40;
	// [ default ] interface IServerXMLHTTPRequest2

	struct __declspec(uuid("88d96a0b-f192-11d4-a65f-0040963251e5"))
		ServerXMLHTTP60;
	// [ default ] interface IServerXMLHTTPRequest2

	struct __declspec(uuid("079aa557-4a18-424a-8eee-e39f0a8d41b9"))
		SAXXMLReader;
	// [ default ] interface IVBSAXXMLReader
	// interface ISAXXMLReader
	// interface IMXReaderControl

	struct __declspec(uuid("3124c396-fb13-4836-a6ad-1317f1713688"))
		SAXXMLReader30;
	// [ default ] interface IVBSAXXMLReader
	// interface ISAXXMLReader
	// interface IMXReaderControl

	struct __declspec(uuid("7c6e29bc-8b8b-4c3d-859e-af6cd158be0f"))
		SAXXMLReader40;
	// [ default ] interface IVBSAXXMLReader
	// interface ISAXXMLReader

	struct __declspec(uuid("88d96a0c-f192-11d4-a65f-0040963251e5"))
		SAXXMLReader60;
	// [ default ] interface IVBSAXXMLReader
	// interface ISAXXMLReader

	struct __declspec(uuid("fc220ad8-a72a-4ee8-926e-0b7ad152a020"))
		MXXMLWriter;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXErrorHandler
	// interface ISAXDTDHandler
	// interface ISAXLexicalHandler
	// interface ISAXDeclHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("3d813dfe-6c91-4a4e-8f41-04346a841d9c"))
		MXXMLWriter30;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXDeclHandler
	// interface ISAXDTDHandler
	// interface ISAXErrorHandler
	// interface ISAXLexicalHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("88d969c8-f192-11d4-a65f-0040963251e5"))
		MXXMLWriter40;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXDeclHandler
	// interface ISAXDTDHandler
	// interface ISAXErrorHandler
	// interface ISAXLexicalHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("88d96a0f-f192-11d4-a65f-0040963251e5"))
		MXXMLWriter60;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXDeclHandler
	// interface ISAXDTDHandler
	// interface ISAXErrorHandler
	// interface ISAXLexicalHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("a4c23ec3-6b70-4466-9127-550077239978"))
		MXHTMLWriter;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXErrorHandler
	// interface ISAXDTDHandler
	// interface ISAXLexicalHandler
	// interface ISAXDeclHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("853d1540-c1a7-4aa9-a226-4d3bd301146d"))
		MXHTMLWriter30;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXDeclHandler
	// interface ISAXDTDHandler
	// interface ISAXErrorHandler
	// interface ISAXLexicalHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("88d969c9-f192-11d4-a65f-0040963251e5"))
		MXHTMLWriter40;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXDeclHandler
	// interface ISAXDTDHandler
	// interface ISAXErrorHandler
	// interface ISAXLexicalHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("88d96a10-f192-11d4-a65f-0040963251e5"))
		MXHTMLWriter60;
	// [ default ] interface IMXWriter
	// interface ISAXContentHandler
	// interface ISAXDeclHandler
	// interface ISAXDTDHandler
	// interface ISAXErrorHandler
	// interface ISAXLexicalHandler
	// interface IVBSAXContentHandler
	// interface IVBSAXDeclHandler
	// interface IVBSAXDTDHandler
	// interface IVBSAXErrorHandler
	// interface IVBSAXLexicalHandler

	struct __declspec(uuid("4dd441ad-526d-4a77-9f1b-9841ed802fb0"))
		SAXAttributes;
	// [ default ] interface IMXAttributes
	// interface IVBSAXAttributes
	// interface ISAXAttributes

	struct __declspec(uuid("3e784a01-f3ae-4dc0-9354-9526b9370eba"))
		SAXAttributes30;
	// [ default ] interface IMXAttributes
	// interface IVBSAXAttributes
	// interface ISAXAttributes

	struct __declspec(uuid("88d969ca-f192-11d4-a65f-0040963251e5"))
		SAXAttributes40;
	// [ default ] interface IMXAttributes
	// interface IVBSAXAttributes
	// interface ISAXAttributes

	struct __declspec(uuid("88d96a0e-f192-11d4-a65f-0040963251e5"))
		SAXAttributes60;
	// [ default ] interface IMXAttributes
	// interface IVBSAXAttributes
	// interface ISAXAttributes

	struct __declspec(uuid("88d969d5-f192-11d4-a65f-0040963251e5"))
		MXNamespaceManager;
	// [ default ] interface IVBMXNamespaceManager
	// interface IMXNamespaceManager

	struct __declspec(uuid("88d969d6-f192-11d4-a65f-0040963251e5"))
		MXNamespaceManager40;
	// [ default ] interface IVBMXNamespaceManager
	// interface IMXNamespaceManager

	struct __declspec(uuid("88d96a11-f192-11d4-a65f-0040963251e5"))
		MXNamespaceManager60;
	// [ default ] interface IVBMXNamespaceManager
	// interface IMXNamespaceManager

	struct __declspec(uuid("cfc399af-d876-11d0-9c10-00c04fc99c8e"))
		XMLDocument;
	// [ default ] interface IXMLDocument2

	//
	// Named GUID constants initializations
	//

	extern "C" const GUID __declspec(selectany) LIBID_MSXML2 =
	{0xf5078f18,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMImplementation =
	{0x2933bf8f,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMNode =
	{0x2933bf80,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMNodeList =
	{0x2933bf82,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMNamedNodeMap =
	{0x2933bf83,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMDocument =
	{0x2933bf81,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMDocumentType =
	{0x2933bf8b,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMElement =
	{0x2933bf86,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMAttribute =
	{0x2933bf85,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMDocumentFragment =
	{0x3efaa413,0x272f,0x11d2,{0x83,0x6f,0x00,0x00,0xf8,0x7a,0x77,0x82}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMCharacterData =
	{0x2933bf84,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMText =
	{0x2933bf87,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMComment =
	{0x2933bf88,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMCDATASection =
	{0x2933bf8a,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMProcessingInstruction =
	{0x2933bf89,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMEntityReference =
	{0x2933bf8e,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMParseError =
	{0x3efaa426,0x272f,0x11d2,{0x83,0x6f,0x00,0x00,0xf8,0x7a,0x77,0x82}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMDocument2 =
	{0x2933bf95,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMSchemaCollection =
	{0x373984c8,0xb845,0x449b,{0x91,0xe7,0x45,0xac,0x83,0x03,0x6a,0xde}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMDocument3 =
	{0x2933bf96,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMNotation =
	{0x2933bf8c,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMEntity =
	{0x2933bf8d,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMParseError2 =
	{0x3efaa428,0x272f,0x11d2,{0x83,0x6f,0x00,0x00,0xf8,0x7a,0x77,0x82}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMParseErrorCollection =
	{0x3efaa429,0x272f,0x11d2,{0x83,0x6f,0x00,0x00,0xf8,0x7a,0x77,0x82}};
	extern "C" const GUID __declspec(selectany) IID_IXTLRuntime =
	{0x3efaa425,0x272f,0x11d2,{0x83,0x6f,0x00,0x00,0xf8,0x7a,0x77,0x82}};
	extern "C" const GUID __declspec(selectany) IID_IXSLTemplate =
	{0x2933bf93,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_IXSLProcessor =
	{0x2933bf92,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) IID_ISAXXMLReader =
	{0xa4f96ed0,0xf829,0x476e,{0x81,0xc0,0xcd,0xc7,0xbd,0x2a,0x08,0x02}};
	extern "C" const GUID __declspec(selectany) IID_ISAXEntityResolver =
	{0x99bca7bd,0xe8c4,0x4d5f,{0xa0,0xcf,0x6d,0x90,0x79,0x01,0xff,0x07}};
	extern "C" const GUID __declspec(selectany) IID_ISAXContentHandler =
	{0x1545cdfa,0x9e4e,0x4497,{0xa8,0xa4,0x2b,0xf7,0xd0,0x11,0x2c,0x44}};
	extern "C" const GUID __declspec(selectany) IID_ISAXLocator =
	{0x9b7e472a,0x0de4,0x4640,{0xbf,0xf3,0x84,0xd3,0x8a,0x05,0x1c,0x31}};
	extern "C" const GUID __declspec(selectany) IID_ISAXAttributes =
	{0xf078abe1,0x45d2,0x4832,{0x91,0xea,0x44,0x66,0xce,0x2f,0x25,0xc9}};
	extern "C" const GUID __declspec(selectany) IID_ISAXDTDHandler =
	{0xe15c1baf,0xafb3,0x4d60,{0x8c,0x36,0x19,0xa8,0xc4,0x5d,0xef,0xed}};
	extern "C" const GUID __declspec(selectany) IID_ISAXErrorHandler =
	{0xa60511c4,0xccf5,0x479e,{0x98,0xa3,0xdc,0x8d,0xc5,0x45,0xb7,0xd0}};
	extern "C" const GUID __declspec(selectany) IID_ISAXXMLFilter =
	{0x70409222,0xca09,0x4475,{0xac,0xb8,0x40,0x31,0x2f,0xe8,0xd1,0x45}};
	extern "C" const GUID __declspec(selectany) IID_ISAXLexicalHandler =
	{0x7f85d5f5,0x47a8,0x4497,{0xbd,0xa5,0x84,0xba,0x04,0x81,0x9e,0xa6}};
	extern "C" const GUID __declspec(selectany) IID_ISAXDeclHandler =
	{0x862629ac,0x771a,0x47b2,{0x83,0x37,0x4e,0x68,0x43,0xc1,0xbe,0x90}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXXMLReader =
	{0x8c033caa,0x6cd6,0x4f73,{0xb7,0x28,0x45,0x31,0xaf,0x74,0x94,0x5f}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXEntityResolver =
	{0x0c05d096,0xf45b,0x4aca,{0xad,0x1a,0xaa,0x0b,0xc2,0x55,0x18,0xdc}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXContentHandler =
	{0x2ed7290a,0x4dd5,0x4b46,{0xbb,0x26,0x4e,0x41,0x55,0xe7,0x7f,0xaa}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXLocator =
	{0x796e7ac5,0x5aa2,0x4eff,{0xac,0xad,0x3f,0xaa,0xf0,0x1a,0x32,0x88}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXAttributes =
	{0x10dc0586,0x132b,0x4cac,{0x8b,0xb3,0xdb,0x00,0xac,0x8b,0x7e,0xe0}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXDTDHandler =
	{0x24fb3297,0x302d,0x4620,{0xba,0x39,0x3a,0x73,0x2d,0x85,0x05,0x58}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXErrorHandler =
	{0xd963d3fe,0x173c,0x4862,{0x90,0x95,0xb9,0x2f,0x66,0x99,0x5f,0x52}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXXMLFilter =
	{0x1299eb1b,0x5b88,0x433e,{0x82,0xde,0x82,0xca,0x75,0xad,0x4e,0x04}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXLexicalHandler =
	{0x032aac35,0x8c0e,0x4d9d,{0x97,0x9f,0xe3,0xb7,0x02,0x93,0x55,0x76}};
	extern "C" const GUID __declspec(selectany) IID_IVBSAXDeclHandler =
	{0xe8917260,0x7579,0x4be1,{0xb5,0xdd,0x7a,0xfb,0xfa,0x6f,0x07,0x7b}};
	extern "C" const GUID __declspec(selectany) IID_IMXWriter =
	{0x4d7ff4ba,0x1565,0x4ea8,{0x94,0xe1,0x6e,0x72,0x4a,0x46,0xf9,0x8d}};
	extern "C" const GUID __declspec(selectany) IID_IMXAttributes =
	{0xf10d27cc,0x3ec0,0x415c,{0x8e,0xd8,0x77,0xab,0x1c,0x5e,0x72,0x62}};
	extern "C" const GUID __declspec(selectany) IID_IMXReaderControl =
	{0x808f4e35,0x8d5a,0x4fbe,{0x84,0x66,0x33,0xa4,0x12,0x79,0xed,0x30}};
	extern "C" const GUID __declspec(selectany) IID_IMXSchemaDeclHandler =
	{0xfa4bb38c,0xfaf9,0x4cca,{0x93,0x02,0xd1,0xdd,0x0f,0xe5,0x20,0xdb}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaItem =
	{0x50ea08b3,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaParticle =
	{0x50ea08b5,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaElement =
	{0x50ea08b7,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchema =
	{0x50ea08b4,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaItemCollection =
	{0x50ea08b2,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaStringCollection =
	{0x50ea08b1,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaType =
	{0x50ea08b8,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaComplexType =
	{0x50ea08b9,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaAny =
	{0x50ea08bc,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaModelGroup =
	{0x50ea08bb,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_IMXXMLFilter =
	{0xc90352f7,0x643c,0x4fbc,{0xbb,0x23,0xe9,0x96,0xeb,0x2d,0x51,0xfd}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMSchemaCollection2 =
	{0x50ea08b0,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaAttribute =
	{0x50ea08b6,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaAttributeGroup =
	{0x50ea08ba,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaIdentityConstraint =
	{0x50ea08bd,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_ISchemaNotation =
	{0x50ea08be,0xdd1b,0x4664,{0x9a,0x50,0xc2,0xf4,0x0f,0x4b,0xd7,0x9a}};
	extern "C" const GUID __declspec(selectany) IID_IXMLElementCollection =
	{0x65725580,0x9b5d,0x11d0,{0x9b,0xfe,0x00,0xc0,0x4f,0xc9,0x9c,0x8e}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDocument =
	{0xf52e2b61,0x18a1,0x11d1,{0xb1,0x05,0x00,0x80,0x5f,0x49,0x91,0x6b}};
	extern "C" const GUID __declspec(selectany) IID_IXMLElement =
	{0x3f7f31ac,0xe15f,0x11d0,{0x9c,0x25,0x00,0xc0,0x4f,0xc9,0x9c,0x8e}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDocument2 =
	{0x2b8de2fe,0x8d2d,0x11d1,{0xb2,0xfc,0x00,0xc0,0x4f,0xd9,0x15,0xa9}};
	extern "C" const GUID __declspec(selectany) IID_IXMLElement2 =
	{0x2b8de2ff,0x8d2d,0x11d1,{0xb2,0xfc,0x00,0xc0,0x4f,0xd9,0x15,0xa9}};
	extern "C" const GUID __declspec(selectany) IID_IXMLAttribute =
	{0xd4d4a0fc,0x3b73,0x11d1,{0xb2,0xb4,0x00,0xc0,0x4f,0xb9,0x25,0x96}};
	extern "C" const GUID __declspec(selectany) IID_IXMLError =
	{0x948c5ad3,0xc58d,0x11d0,{0x9c,0x0b,0x00,0xc0,0x4f,0xc9,0x9c,0x8e}};
	extern "C" const GUID __declspec(selectany) IID_IXMLDOMSelection =
	{0xaa634fc7,0x5888,0x44a7,{0xa2,0x57,0x3a,0x47,0x15,0x0d,0x3a,0x0e}};
	extern "C" const GUID __declspec(selectany) DIID_XMLDOMDocumentEvents =
	{0x3efaa427,0x272f,0x11d2,{0x83,0x6f,0x00,0x00,0xf8,0x7a,0x77,0x82}};
	extern "C" const GUID __declspec(selectany) IID_IDSOControl =
	{0x310afa62,0x0575,0x11d2,{0x9c,0xa9,0x00,0x60,0xb0,0xec,0x3d,0x39}};
	extern "C" const GUID __declspec(selectany) IID_IXMLHTTPRequest =
	{0xed8c108d,0x4349,0x11d2,{0x91,0xa4,0x00,0xc0,0x4f,0x79,0x69,0xe8}};
	extern "C" const GUID __declspec(selectany) IID_IServerXMLHTTPRequest =
	{0x2e9196bf,0x13ba,0x4dd4,{0x91,0xca,0x6c,0x57,0x1f,0x28,0x14,0x95}};
	extern "C" const GUID __declspec(selectany) IID_IServerXMLHTTPRequest2 =
	{0x2e01311b,0xc322,0x4b0a,{0xbd,0x77,0xb9,0x0c,0xfd,0xc8,0xdc,0xe7}};
	extern "C" const GUID __declspec(selectany) IID_IMXNamespacePrefixes =
	{0xc90352f4,0x643c,0x4fbc,{0xbb,0x23,0xe9,0x96,0xeb,0x2d,0x51,0xfd}};
	extern "C" const GUID __declspec(selectany) IID_IVBMXNamespaceManager =
	{0xc90352f5,0x643c,0x4fbc,{0xbb,0x23,0xe9,0x96,0xeb,0x2d,0x51,0xfd}};
	extern "C" const GUID __declspec(selectany) IID_IMXNamespaceManager =
	{0xc90352f6,0x643c,0x4fbc,{0xbb,0x23,0xe9,0x96,0xeb,0x2d,0x51,0xfd}};
	extern "C" const GUID __declspec(selectany) CLSID_DOMDocument =
	{0xf6d90f11,0x9c73,0x11d3,{0xb3,0x2e,0x00,0xc0,0x4f,0x99,0x0b,0xb4}};
	extern "C" const GUID __declspec(selectany) CLSID_DOMDocument26 =
	{0xf5078f1b,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_DOMDocument30 =
	{0xf5078f32,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_DOMDocument40 =
	{0x88d969c0,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_DOMDocument60 =
	{0x88d96a05,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_FreeThreadedDOMDocument =
	{0xf6d90f12,0x9c73,0x11d3,{0xb3,0x2e,0x00,0xc0,0x4f,0x99,0x0b,0xb4}};
	extern "C" const GUID __declspec(selectany) CLSID_FreeThreadedDOMDocument26 =
	{0xf5078f1c,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_FreeThreadedDOMDocument30 =
	{0xf5078f33,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_FreeThreadedDOMDocument40 =
	{0x88d969c1,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_FreeThreadedDOMDocument60 =
	{0x88d96a06,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLSchemaCache =
	{0x373984c9,0xb845,0x449b,{0x91,0xe7,0x45,0xac,0x83,0x03,0x6a,0xde}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLSchemaCache26 =
	{0xf5078f1d,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLSchemaCache30 =
	{0xf5078f34,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLSchemaCache40 =
	{0x88d969c2,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLSchemaCache60 =
	{0x88d96a07,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_XSLTemplate =
	{0x2933bf94,0x7b36,0x11d2,{0xb2,0x0e,0x00,0xc0,0x4f,0x98,0x3e,0x60}};
	extern "C" const GUID __declspec(selectany) CLSID_XSLTemplate26 =
	{0xf5078f21,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_XSLTemplate30 =
	{0xf5078f36,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_XSLTemplate40 =
	{0x88d969c3,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_XSLTemplate60 =
	{0x88d96a08,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_DSOControl =
	{0xf6d90f14,0x9c73,0x11d3,{0xb3,0x2e,0x00,0xc0,0x4f,0x99,0x0b,0xb4}};
	extern "C" const GUID __declspec(selectany) CLSID_DSOControl26 =
	{0xf5078f1f,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_DSOControl30 =
	{0xf5078f39,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_DSOControl40 =
	{0x88d969c4,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLHTTP =
	{0xf6d90f16,0x9c73,0x11d3,{0xb3,0x2e,0x00,0xc0,0x4f,0x99,0x0b,0xb4}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLHTTP26 =
	{0xf5078f1e,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLHTTP30 =
	{0xf5078f35,0xc551,0x11d3,{0x89,0xb9,0x00,0x00,0xf8,0x1f,0xe2,0x21}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLHTTP40 =
	{0x88d969c5,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLHTTP60 =
	{0x88d96a0a,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_ServerXMLHTTP =
	{0xafba6b42,0x5692,0x48ea,{0x81,0x41,0xdc,0x51,0x7d,0xcf,0x0e,0xf1}};
	extern "C" const GUID __declspec(selectany) CLSID_ServerXMLHTTP30 =
	{0xafb40ffd,0xb609,0x40a3,{0x98,0x28,0xf8,0x8b,0xbe,0x11,0xe4,0xe3}};
	extern "C" const GUID __declspec(selectany) CLSID_ServerXMLHTTP40 =
	{0x88d969c6,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_ServerXMLHTTP60 =
	{0x88d96a0b,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXXMLReader =
	{0x079aa557,0x4a18,0x424a,{0x8e,0xee,0xe3,0x9f,0x0a,0x8d,0x41,0xb9}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXXMLReader30 =
	{0x3124c396,0xfb13,0x4836,{0xa6,0xad,0x13,0x17,0xf1,0x71,0x36,0x88}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXXMLReader40 =
	{0x7c6e29bc,0x8b8b,0x4c3d,{0x85,0x9e,0xaf,0x6c,0xd1,0x58,0xbe,0x0f}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXXMLReader60 =
	{0x88d96a0c,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_MXXMLWriter =
	{0xfc220ad8,0xa72a,0x4ee8,{0x92,0x6e,0x0b,0x7a,0xd1,0x52,0xa0,0x20}};
	extern "C" const GUID __declspec(selectany) CLSID_MXXMLWriter30 =
	{0x3d813dfe,0x6c91,0x4a4e,{0x8f,0x41,0x04,0x34,0x6a,0x84,0x1d,0x9c}};
	extern "C" const GUID __declspec(selectany) CLSID_MXXMLWriter40 =
	{0x88d969c8,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_MXXMLWriter60 =
	{0x88d96a0f,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_MXHTMLWriter =
	{0xa4c23ec3,0x6b70,0x4466,{0x91,0x27,0x55,0x00,0x77,0x23,0x99,0x78}};
	extern "C" const GUID __declspec(selectany) CLSID_MXHTMLWriter30 =
	{0x853d1540,0xc1a7,0x4aa9,{0xa2,0x26,0x4d,0x3b,0xd3,0x01,0x14,0x6d}};
	extern "C" const GUID __declspec(selectany) CLSID_MXHTMLWriter40 =
	{0x88d969c9,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_MXHTMLWriter60 =
	{0x88d96a10,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXAttributes =
	{0x4dd441ad,0x526d,0x4a77,{0x9f,0x1b,0x98,0x41,0xed,0x80,0x2f,0xb0}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXAttributes30 =
	{0x3e784a01,0xf3ae,0x4dc0,{0x93,0x54,0x95,0x26,0xb9,0x37,0x0e,0xba}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXAttributes40 =
	{0x88d969ca,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_SAXAttributes60 =
	{0x88d96a0e,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_MXNamespaceManager =
	{0x88d969d5,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_MXNamespaceManager40 =
	{0x88d969d6,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_MXNamespaceManager60 =
	{0x88d96a11,0xf192,0x11d4,{0xa6,0x5f,0x00,0x40,0x96,0x32,0x51,0xe5}};
	extern "C" const GUID __declspec(selectany) CLSID_XMLDocument =
	{0xcfc399af,0xd876,0x11d0,{0x9c,0x10,0x00,0xc0,0x4f,0xc9,0x9c,0x8e}};

} // namespace MSXML2

#pragma pack(pop)