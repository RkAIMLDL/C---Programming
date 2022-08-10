#include<iostream>
#include<set>
using namespace std;
int main()
{
	multiset<char>s;
	s.insert('R');
	s.insert('U');
	s.insert('S');
	s.insert('H');
	s.insert('I');
	s.insert('K');
	s.insert('E');
	s.insert('S');
	s.insert('H');
	s.insert('S');

	cout<<"the inserted list is"<<endl;
	set<char>::iterator p;

	for(p=s.begin(); p!=s.end();p++)
	{
		cout<<*p<<" ";

	}
	cout<<endl;
	cout<<"the s1 set elements are"<<endl;

	set<char >s1(s.begin(),s.find('S'));
	for(p=s1.begin();p!=s1.end();p++)
	{
		cout<<*p<<" ";
	}

}
