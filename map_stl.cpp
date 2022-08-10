#include<iostream>
#include<map>
using namespace std;
int main()
{
	multimap<int,string>m;
	int x;
	int n;
	string s;
	m.insert(pair<int,string>(37,"Rushikesh"));
	m.insert(pair<int,string>(07,"Samina"));
	m.insert(pair<int,string>(40,"Vipul"));
	m.insert(pair<int,string>(99,"arjoo"));
	m.insert(pair<int,string>(37,"samina"));
	m.insert(pair<int,string>(48,"Alim"));
	m.insert(pair<int,string>(38,"Parej"));
/*	cout<<"enter the number of key and value you want"<<endl;
	cin>>n;
	cout<<"eneter key and values"<<endl;
	cin>>x;
	cin>>s;
	for(int i=0;i<n;i++)
	{
	m.insert(pair<int,string>(x,s));
	}*/
	cout<<"R_N    Name"<<endl;
	map<int,string>::iterator p;
	for(p=m.begin();p!=m.end();p++)
	{
		cout<<p->first<<"    "<<p->second<<endl;
	}
//	m.erase(m.begin(),m.find(38));
	cout<<endl<<endl;
	cout<<"new inserted map"<<endl;
	multimap<int,string>m1(m.begin(),m.find(48));
	for(p=m1.begin();p!=m1.end();p++)
	{
		cout<<p->first<<"    "<<p->second<<endl;
	}
}

