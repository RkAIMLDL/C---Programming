#include<iostream>
using namespace std;
namespace//anonymous namespace
{
	int z=3;
}
namespace A
{
	namespace B
	{
		int y=5;
	}
	int x=10;
}
using namespace A::B;
namespace C=A::B;//alias namespce
int main()
{
	cout<<A::B::y<<endl;//nested namespace
	cout<<C::y<<endl;
	cout<<z;
}

