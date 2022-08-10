#include<iostream>
using namespace std;
class shape
{
	public:
		
	virtual void area(int l,int b)=0;
	void show()
	{
		cout<<"void function"<<endl;
	}
};
class rectangle:public shape
{
	public:
		void area (int l,int b)
		{
			int a=l*b;
			cout<<"area of rectangle  "<<a<<endl;
		}
};
class traingle:public shape
{
	public:
		void area(int a,int b)
		{
			int c=(a*b)/2;
			cout<<"area of traingle "<<c<<endl;
		}
};
int main()
{
	rectangle r;
	r.area(3,4);
	r.show();
	traingle t;
	t.area(3,4);
}
