#pragma once
#include<map>
#include<vector>
#include<set>
#include<string>
#include "tinyxml.h"
#include "dfix.h"
using namespace std;


//class tree;
namespace DFIX
{
	class DATAUNIT_CLASS tree
	{
		public:
			tree();
			virtual ~tree()
			{
				ClearTree();
			}
			typedef map<string,string>::iterator unit_iterator;
			typedef map<string,string>::const_iterator const_unit_iterator;
			typedef map<string,tree >::iterator childtree_iterator;
			typedef map<string,tree >::const_iterator const_childtree_iterator;
			typedef vector<string>::const_iterator const_unitordername_iterator;
			typedef vector<string>::iterator unitordername_iterator;
			typedef vector<string>::const_iterator const_childtreeordername_iterator;
                        typedef vector<string>::iterator childtreeordername_iterator;
			const_unit_iterator unit_begin()const {return treeunitmap.begin();}
			const_unit_iterator unit_end()const {return treeunitmap.end();}
			unit_iterator unit_begin() {return treeunitmap.begin();}
			unit_iterator unit_end() {return treeunitmap.end();}
			const_childtree_iterator childtree_begin()const {return childtreemap.begin();}
			const_childtree_iterator childtree_end()const {return childtreemap.end();}
			childtree_iterator childtree_begin(){return childtreemap.begin();}
			childtree_iterator childtree_end(){return childtreemap.end();}
			const_unitordername_iterator unitordername_begin() const{return vunitname.begin();}
			const_unitordername_iterator unitordername_end() const{return vunitname.end();}
			unitordername_iterator unitordername_begin() {return vunitname.begin();}
			unitordername_iterator unitordername_end() {return vunitname.end();}
			const_childtreeordername_iterator childtreeordername_begin() const{return vchildtreename.begin();}
                        const_childtreeordername_iterator childtreeordername_end() const{return vchildtreename.end();}
                        childtreeordername_iterator childtreeordername_begin() {return vchildtreename.begin();}
                        childtreeordername_iterator childtreeordername_end() {return vchildtreename.end();}
			tree* FindChildTreeByName(const string &name)
			{
				map<string,tree >::iterator it;
				it = childtreemap.find(name);
				if(it!=childtreemap.end())
					return   &(it->second);
				return NULL;	
			}
			string* FindUnitByName(const string &name)
			{
				map<string,string >::iterator it;
				it = treeunitmap.find(name);
				if(it!=treeunitmap.end())
					return   &(it->second);
				return NULL; 
			}
			int GetChildTreeCount()
			{
				return childtreemap.size();
			}
			int GetUnitCount()
			{
				return treeunitmap.size();
			}
			tree & operator [](const string &value)
			{
				map<string,tree >::iterator it;
				it = childtreemap.find(value);
				if(it!=childtreemap.end())
				{
					return it->second;
				}
				else
				{
					tree  t;
					t.pParent = this;
					t.treevalue = value;
					childtreemap.insert(make_pair(value,t));
					vchildtreename.push_back(value);
					isHasBuild = true;
					return childtreemap[value];
				}
			}
			string & operator ()(const string &value)
			{
				map<string,string >::iterator it;
				it = treeunitmap.find(value);
				if(it==treeunitmap.end())
				{
					treeunitmap.insert(make_pair(value,""));
				}
				return treeunitmap[value];
			}	
			int Get_vunitname_size()
			{
				return vunitname.size();
			}
			int Get_vchildtreename_size()
			{
				return vchildtreename.size();
			}	
			bool XmlFileToTree(const char *xmlpath,const string &name="name");
			bool XmlStrToTree(const char *xmlstr,const string &name="name");
			bool TreeToXmlFile(const char *xmlpath,char *encoding="GBK");
			bool FindPathByName(const string &name,set<string> &s);
			bool FindValuesByName(const string &name,const string &label,set<string> &s);
			bool FindValuesByPath(const string &path,const string &label,set<string> &s);
			bool FindValuesByPath(const string &path,const string &label1,const string &label2,int count,set<string> &s1,set<string> &s2);
			bool IsCorrectPath(const string &path);
			void ClearTree()
			{
				isHasBuild = false;
				vunitname.clear();
				vchildtreename.clear();
				itemname.clear();
				treename.clear();
				treevalue.clear();
				treeunitmap.clear();
				map<string,tree >::iterator it;
				for(it=childtreemap.begin();it!=childtreemap.end();it++)
				{
					it->second.ClearTree();
				}
				childtreemap.clear();
			}
			inline const string & GetItemname() const
			{
				return itemname;
			}
			inline const string & GetTreeName() const
			{
				return treename;
			}
			inline const string & GetTreeValue() const
			{
				return treevalue;
			}
			void SetItemName(const string &value)
			{
				itemname = value;
			}
			void SetTreeName(const string &value)
			{
				treename = value;
				treeunitmap.insert(make_pair(treename,treevalue));
				vunitname.push_back(treevalue);		
			}
			/*
			   void SetTreeValue(const string &value)
			   {
			   treevalue = value;
			   }
			   void SetTreeValue(const char * value)
			   {
			   treevalue = value;
			   }
			 */
			/*
			   map<string,tree > &GetChildTreeMap()
			   {
			   return childtreemap;
			   }
			   map<string,string> &GetUnitMap()
			   {
			   return treeunitmap;
			   }
			   const vector<string> &GetVname()
			   {
			   return vname;
			   }
			 */
			bool IsHasBuild()
			{
				return isHasBuild;
			}
			void Construct()
			{
				isHasBuild = true;
			}
			tree *GetParent()
			{
				return pParent;
			}
		private:
			bool isHasBuild;
			bool BuildTree(TiXmlNode* pParent,tree * ptree,const string &name);
			void BuildTreeBodyXml(tree * ptree,TiXmlElement * parentelement);
			void FindChildPathByName(tree *ptree,const string &name,string &path,set<string> &s);
			void FindChildValuesByName(tree *ptree,const string &name,const string &label,set<string> &s);
			void FindChildValuesByPath(tree *ptree,const vector<string> &v,unsigned int &i,const string &label,set<string> &s);
			void FindChildValuesByPath(tree *ptree,const vector<string> &v,unsigned int &i,const string &label1,const string &label2,int count,set<string> &s1,set<string> &s2);
			void FindAllChildValues(tree *ptree,const string &label,set<string> &s);
			void FindAllChildValues(tree *ptree,const string &label1,const string &label2,set<string> &s1,set<string> &s2);
			void FindCountChildValues(tree *ptree,const string &label1,const string &label2,int count,set<string> &s1,set<string> &s2);
			map<string,string> treeunitmap;  
			map<string,tree > childtreemap;
			vector<string> vunitname;//À≥–Ú”√
			vector<string> vchildtreename;
			tree* pParent;
			string itemname;
			string treename;
			string treevalue;
	};
	typedef basic_string<char>::size_type S_T;
	class stringoperator
	{
		public:

			static bool tokenize(const string& src, string tok,vector<string> &v,bool trim=false, string null_subst="");
			static bool split(const string& src, string delimit,vector<string> &v, string null_subst="");  
	};
}	
