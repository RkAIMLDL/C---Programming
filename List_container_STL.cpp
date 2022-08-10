#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l;
	int n,x;
	cout<<"enter the number of elements you want"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		l.push_back(x);
	}
//	l.push_back(5);
//	l.push_back(6);
//	l.push_back(8);
	cout<<"the list of elements are"<<endl;
	list<int>::iterator p;
	for(p=l.begin();p!=l.end();p++)
	{
		cout<<*p<<" ";

	}
	cout<<endl;
	p=l.begin();
	advance(p,3);
	l.erase(p);
	
	l.sort();
	cout<<"The sorted elements"<<endl;
	for(p=l.begin();p!=l.end();p++)
	{
		cout<<*p<<" ";

	}
}

