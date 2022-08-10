#include<iostream>
using namespace std;

class bace
{
	private:
		int x;
	public:
		int y;
	getx()
	{
		return x;
	}
	gety()
	{
		return y;
	}
	bace(int a,int b)
	{
		x=a;
		y=b;
		cout<<"bace class"<<endl;
	}
	~bace()
	{
		cout<<"destructor for bace class"<<endl;
	}
};
class derived:public bace
{
	public:
		int z;
	getz()
	{
		return z;
	}
	derived(int a,int b,int c):bace(a,b)
	{
		c=z;
		cout<<"derived class"<<endl;
	}
	~derived()
	{
		cout<<"destructor of derived class"<<endl;
	}
};

int main()
{
	derived d(1,2,20);
	d.z=20;

	bace *p=&d;


	cout<<p->getx()<<" "<<p->gety()<<" "<<endl;
}
