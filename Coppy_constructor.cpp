#include<iostream>
#include<cstring>
using namespace std;
class String
{
	private:
		int size;
		char * s;
public:
	String(const String *str)
	{
		size=strlen(str);
		s=new char[size+1];
		strcpy(s,str);
	}
	String()
	{
		s=new char[1];
	}
	~String()
	{
		delete[] s;
	}
	String(const String & old_str)
	{
		size=strlen(old_str);
		s=new char[size+1];
		strcpy(s,old_str.s);
	}
		void print()
	{
		cout<<s<<endl;
	}
	void change()
	{
		delete []s;
		size=strlen(str);
		s=new char[size+1];
		strcpy(s,str);
	}
	String & operator String(const string & a)
	{
		if(this==&a)
			return * this;
			
		delete [] s;
		size=strlen(a);
		s=new char[size+1];
		strcpy(s,a.s);
		
	}
};
int main()
{
	String str1("hello word");
	string str2str1;
	
	str1.print();
	str2.print();
	
	str2.change("namaste");
	
	str1.print();
	str2.print();

}
