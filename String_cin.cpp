#include<iostream>
using namespace std;
int main()
{
	int year;
	char name[20];
	char name1[10];
	cout<<"enter your birth date"<<endl;
	cin>>year;
	cin.get();
	cout<<"eneter second name"<<endl;
	//cin.get(name1,10).get();
	cin.getline(name1,10);
	
	cout<<"Enter your name"<<endl;
	cin.getline(name,10);
	cout<<"your birth date is "<<year<<endl;
	cout<<"your name is "<<name<<endl;
	cout<<"your second name is "<<name1<<endl;
}
