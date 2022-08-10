#include<iostream>
using namespace std;
class base
{
	public:
	virtual void print()
	{
		cout<<"base function print"<<endl;
	}
	void def()
	{
		cout<<"base function define"<<endl;
	}
	virtual ~base()
	{
	}
};
class derived:public base
{
	public:
	virtual	void print()
		{
			cout<<"derived print "<<endl;
		}
	virtual ~derived()
	{
		
	}
};

int main()
{
	derived d;
	base b;
	base *p=&d;
	p->print();
	p->def();
	
	p=&b;
	p->print();
	p->def();
}
