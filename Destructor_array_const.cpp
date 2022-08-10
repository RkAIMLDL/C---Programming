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
		~ABC()
		{
			cout<<"delete the object"<<endl;
		}

		int getX() const
		{
			
		return m_x;
		}
		int getY() const
		{
		return m_y;
		}
};
int main()
{
const	ABC a=ABC(1,2);
	ABC *b=new ABC(1,2);
	ABC c[3]={ABC(5,6),ABC(7,6)};
	for(int i;i<3;i++)
	{
		cout<<c[i].getX()<<" "<<c[i].getY()<<endl;
	}

	cout<<a.getX()<<" "<<a.getY()<<endl;
	cout<<b->getX()<<" "<<b->getY()<<endl;
	delete b;
}
