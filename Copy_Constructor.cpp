#include<iostream>
using namespace std;
class ABC
{
	public:
		int x;
		int y;
	ABC( )
	{
		cout<<"defualt constructor"<<endl;
	}
	ABC(const ABC &a)
	{
	
		cout<<"return coppy constructor"<<endl;
		x=a.x;
		y=a.y;
	}
ABC fun()
{
	ABC p;
	return p;
}
	
};
int main()
{
	ABC b;
	b.x=10;
	b.y=20;
	ABC a=fun();
	cout<<a.x<<" "<<a.y<<endl;
	cout<<b.x<<" "<<b.y<<endl;
}
