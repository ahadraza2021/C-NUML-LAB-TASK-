#include<iostream>
using namespace std;
int max(int a,int b);
int main()
{
	int num1,num2;
	cout<<"ENTER THE VALUE OF NUM1 IS:";
	cin>>num1;
	cout<<"ENTER THE VALUE OF NUM2 IS:";
	cin>>num2;
	max(num1,num2);
	return 0;
}
int max(int a , int b)
{
	if(a>b)
	{
		cout<<"a is greater then b:"<<a<<endl;
	}
	else
	{
		cout<<" b is greater then a:"<<b<<endl;
	}
}
