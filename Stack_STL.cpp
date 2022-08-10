#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	s.push(40);
	s.push(30);
	s.push(98);
	s.push(99);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}
