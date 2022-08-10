#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int x,n;
	priority_queue<int>q;
	cout<<"enter the element number"<<endl;
	cin>>n;
	cout<<"enter the values"<<endl;
	for(int i;i<n;i++)
	{
		cin>>x;
	//	q.push(x);
	q.push(-x);
	}
	cout<<"your elemnets are"<<endl;
	while(!q.empty())
	{
	//	cout<<q.front()<<endl;
//	cout<<q.top()<<endl;
	cout<<-q.top()<<endl;
		q.pop();
	}

}
