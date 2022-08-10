#include<iostream>
using namespace std;
class account
{
	protected:
	int x=3000;
	public:
		int getx()
		{
			return x;
		}
	
};
class widrawal:public account
{
	public:
	int y;

	void balance()
	{
		account a;
		cout<<"enter ammount"<<endl;
		cin>>y;
		if (a.getx()>=y)
  		{
			cout<<"remainning amount"<<a.getx()-y<<endl;
		}
		else if(a.getx()<y)
		{
			cout<<"you have entered more ammount than balance"<<endl;
		}
	}
};
int main()
{
	widrawal w;
	w.balance();
}
