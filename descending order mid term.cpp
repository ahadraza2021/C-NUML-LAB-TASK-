#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,desd;
	cout<<"enter the value of num1";
	cin>>num1;
	cout<<"enter the value of num2";
	cin>>num2;
	cout<<"enter the value of num3";
	cin>>num3;
	if((num1<num2)||(num1<num3))
	{
    cout<<"num1 is smallest"<<num1<<endl;
	}
	else if((num2<num1)||(num2<num3))
	{
	cout<<"num2 is smallest:"<<num2<<endl;
	}
	else
	{
	cout<<"the value of num3 is:"<<num3<<endl;
	}
	desd=num1;
	num1=num2;
	num3=desd;
	cout<<num1<<endl;
	cout<<num2<<endl;
	cout<<num3<<endl;
    return(0);
}
