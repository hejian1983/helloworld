#pragma once
#include<map>
#include<vector>
#include<set>
#include<string>
#include "tinyxml.h"
#include "dfix.h"
#include "tree.h"
using namespace std;


//class tree;
namespace DFIX
{
	class DATAUNIT_CLASS ConfigureTree
	{
		public:
			typedef map<string,string>::iterator unit_iterator;
			typedef map<string,string>::const_iterator const_unit_iterator;
			typedef vector<string>::const_iterator const_unitorderbykey_iterator;
			typedef vector<string>::iterator unitorderbykey_iterator;
			typedef map<string,ConfigureTree >::iterator childtree_iterator;
			typedef map<string,ConfigureTree >::const_iterator const_childtree_iterator;
			typedef vector<string>::const_iterator const_childtreeorderbyname_iterator;
			typedef vector<string>::iterator childtreeorderbyname_iterator;
			const_unit_iterator unit_begin()const {return m_unitmap.begin();}
			const_unit_iterator unit_end()const {return m_unitmap.end();}
			unit_iterator unit_begin() {return m_unitmap.begin();}
			unit_iterator unit_end() {return m_unitmap.end();}
			const_childtree_iterator childtree_begin()const {return m_childtreemap.begin();}
			const_childtree_iterator childtree_end()const {return m_childtreemap.end();}
			childtree_iterator childtree_begin(){return m_childtreemap.begin();}
			childtree_iterator childtree_end(){return m_childtreemap.end();}
			const_unitorderbykey_iterator unitorderbykey_begin() const{return m_orderunitbykey.begin();}
			const_unitorderbykey_iterator unitorderbykey_end() const{return m_orderunitbykey.end();}
			unitorderbykey_iterator unitorderbykey_begin() {return m_orderunitbykey.begin();}
			unitorderbykey_iterator unitorderbykey_end() {return m_orderunitbykey.end();}
			const_childtreeorderbyname_iterator childtreeorderbyname_begin() const{return m_orderchildtreebyname.begin();}
			const_childtreeorderbyname_iterator childtreeorderbyname_end() const{return m_orderchildtreebyname.end();}
			childtreeorderbyname_iterator childtreeorderbyname_begin() {return m_orderchildtreebyname.begin();}
			childtreeorderbyname_iterator childtreeorderbyname_end() {return m_orderchildtreebyname.end();}

			ConfigureTree();
			virtual ~ConfigureTree(){ClearTree();}
			bool XmlFileToTree(const char *xmlpath,const char *key="name");
			bool XmlStrToTree(const char *xmlstr,const char * key="name");
			bool TreeToXmlFile(const char *xmlpath,const bool isAll = true,char *encoding = "GB2312");
			bool TreeToXmlStr(string &xmlstr,const bool isAll = true,char *encoding = "GB2312");
			bool AddChildTree(ConfigureTree &tree);
			bool AddUnit(const string &key,const string &name);
			bool DelChildTree(const string &name);
			ConfigureTree* FindChildTreeByName(const string &name);
			bool FindTreeByPath(const string &path,vector<ConfigureTree *> &v_tree);
			//bool FindTreeByPathToXmlStr(const char *path,string &xmlstr);
			bool isHasChildTree();
			bool isHasChildFlag();
			inline bool isRootTree(){return isRoot;}
			void SetItem(const char *item);
			bool SetKey(const char *key);
			bool SetName(const char *name);
			inline int GetChildTreeCount(){return m_childtreemap.size();}
			inline int GetUnitCount(){return m_unitmap.size();}
			inline const string & GetItem() const{return m_item;}
			inline const string & GetTreeKey() const{return m_key;}
			inline const string & GetTreeName() const{return m_name;}
			inline const string & GetTreePath() const{return m_path;}
			inline ConfigureTree *GetParent(){return pParent;}
			void ClearTree();
			ConfigureTree & operator [](const string &name);
			string & operator ()(const string &key);
				
		private:
			bool BuildTree(TiXmlNode* pParent,ConfigureTree *ptree,const char *key);
			void BuildTreeBodyXml(ConfigureTree * ptree,const bool &isAll,TiXmlElement * parentelement);
			void FindChildTreeByPath(ConfigureTree *ptree,const vector<string> &v,unsigned int &i,vector<ConfigureTree *> &v_tree);
			map<string,ConfigureTree > m_childtreemap;
			map<string,string > m_unitmap;
			vector<string> m_orderchildtreebyname;
			vector<string> m_orderunitbykey;
			ConfigureTree* pParent;
			string m_item;
			string m_name;
			string m_key;
			string m_path;
			bool isRoot;
			bool isHasBuild;
	};
}
