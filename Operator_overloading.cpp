#include<iostream>
using namespace std;

class Time
{
	public:
		int hour;
		int min;
		Time()
		{
		hour=min=0;
		}
		Time(int h,int m)
		{
		hour=h;
		min=m;
		}
		Time operator +(Time t)
		{
		Time t1;
		int m=min+t.min;
		t1.hour=hour+t.hour+m/60;
		t1.min=m%60;
		return t1;
		}
};
int main()
{
	Time t1;
	Time t2(3,30);
	Time t3(3,50);
//	t1=t2.operator +(t3);
	t1=t2+t3;
	cout<<t1.hour<<": "<<t1.min<<endl;
}
