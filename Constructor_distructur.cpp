#include<iostream>
using namespace std;
struct ABC
{
	private:
	int m_x;
	int m_y;
	public:
		ABC(int x=0,int y=0)
		{
			m_x=x;
			m_y=y;
		}
/*	ABC(int x,int y)
	{
	this->x=x;
	this->y=y;
	}*/
	int getX()
	{
		return m_x;
	}
	int getY()
	{
		return m_y;
	}
};
int main()
{
	//ABC *a=new ABC(3,5);
	ABC a(3);
//	ABC b(6,8);

//	cout<<"the value of x "<<a->getX()<<"the value if y "<<a->getY()<<endl;
	cout<<"the value of x "<<a.getX()<<"the value if y "<<a.getY()<<endl;
}
