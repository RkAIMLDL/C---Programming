#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int,greater<int> >s;
	s.insert(6);
	s.insert(7);
	s.insert(9);
	s.insert(6);
	s.insert(10);
	s.insert(9);
	
	cout<<"the inserted list is"<<endl;
	set<int,greater <int> >::iterator p;
	
	for(p=s.begin(); p!=s.end();p++)
	{
		cout<<*p<<" ";
		
	}
	cout<<endl;
	cout<<"the s1 set elements are"<<endl;
	
	set<int, greater<int> >s1(s.begin(),s.find(7));
	for(p=s1.begin();p!=s1.end();p++)
	{
		cout<<*p<<" ";
	}
	
}
