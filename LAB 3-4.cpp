#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c=90;
	int reverse;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	reverse=a;
	a=c;
	c=reverse;
	cout<<"the value of a:"<<a<<endl;
	cout<<"the value of b:"<<b<<endl;
	cout<<"the value of c:"<<c<<endl;
	return(0);
}
