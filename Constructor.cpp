#include<iostream>
using namespace std;
class ABC
{
	private:
		int x;
	public:
	void setX(int a)
	{
		x=a;
	}
	ABC(int a)
	{
		x=a;
	}
	int getX()
	{
		return x;
	}
	ABC add(ABC a)
	{
	

		a.x=x+a.x;
	}
	friend ABC add(ABC a,ABC b);
};
ABC add(ABC a,ABC b)
{
	a.x=b.x+a.x;
}
int main()
{
//	ABC a,b,c;
//	a.setX(5);
//	b.setX(6);
ABC a=ABC(5);
ABC b=ABC(10);
	a=a.add(b);
	cout<<a.getX()<<endl;
 a=add(5,6);
 cout<<a.getX();
}
