#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	int y;

};
void add(int x,int y)
{
	cout<<"addition is "<<x+y<<endl;
}


int main()
{
	A a,b;
	a.x=6;
	a.y=4;
	add(a.x,a.y);
	
	b.x=50;
	b.y=10;
	add(b.x,b.y);
}
