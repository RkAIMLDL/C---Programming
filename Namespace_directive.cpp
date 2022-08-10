#include<iostream>
using namespace std;
namespace A
{
	int x;
}
int x=10;
int main()
{
	int x=5;
	cout<<::x;
	//cout<<A::x;
	
}
