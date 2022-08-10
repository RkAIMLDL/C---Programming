#include<iostream>
using namespace std;
int main()
{
	int a=10,b=1,c;
	try
	{
		if (b==0)
		throw ("you are dividing by zero");
		if(b==1)
		throw  b;
		c=a/b;
	}catch(const char *msg)
	{
		cout<<msg<<endl;
	}
	catch(int x)
	{
		cout<<" b="<<x<<endl;
	}
	cout<<"division is "<<c<<endl;
	return 0;
}
