#include<iostream>
using namespace std;
class A
{
	public:
	static int x;
	int y;
	static void show()
	{
		cout<<x;
		//only we can access static variables using static functions cout<<y error
	}
};
/*void show()
{
	static int x=10;
	int y=20;
	cout<<x<<endl;
	cout<<y<<endl;
	x++;
	y++;
	
}*/

int A::x=10;
int main()
{
	A a1;
	A a2;
	a2.y=30;
	a1.y=20;
	cout<<a1.x<<endl;
	cout<<a1.y<<endl;
	cout<<a2.x<<endl;
	cout<<a2.y<<endl;
	A::show();

}
