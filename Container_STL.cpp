#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	int x;
	cout<<"enter element do you want"<<endl;
	cin>>n;
	vector<int>v1,v2;
//	v.insert(v.begin(),5);
//	v.push_back(6);
//	v.insert(v.begin(),8);
	for (int i=0; i<n;i++)
	{
		cin>>x;
		v1.push_back(x);
	}
	cout<<"enter size of second vector"<<endl;
	cin>>n;
	for (int i=0; i<n;i++)
	{
		cin>>x;
		v2.push_back(x);
	}
	v1.swap(v2);
	cout<<"inserted elements afte swap"<<endl;
	vector<int>::iterator p;
	cout<<"after swapping"<<endl;
	for(p=v1.begin();p!=v1.end();p++)
	{
		cout<<*p<<" ";

	}
	cout<<endl;
	for(p=v2.begin();p!=v2.end();p++)
	{
		cout<<*p<<" ";

	}
/*	for (int i=0;i<v.size();i++)
	{
		cout<<*p<<" ";
		p++;
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.clear();
	cout<<"size of element after clear"<<endl;
	cout<<v.size();*/
}
