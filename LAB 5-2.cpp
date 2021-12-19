#include<iostream>
using namespace std;
int main()
{
		
	int num1;
	int num2;
	char ch;
	int add,sub,prod,div;
	cout<<"enter the value of first number 1:"<<num1<<endl;
	cin>>num1;
	cout<<"enter the value of number 2:"<<num2<<endl;
	cin>>num2;
	cout<<"Which opperator you want to use:";
	cin>>ch;
	add=num1+num2;
	sub=num1-num2;
	prod=num1*num2;
	div=num1/num2;
	if(ch=='A')
	{
	cout<<"The sum of tow Number is:"<<add<<endl;
	}					
  	else if(ch=='B')
	{
	cout<<"The substriction  of tow Number is:"<<sub<<endl;
	}
	else if(ch=='C')
	{
	cout<<"The product  of tow Number is:"<<prod<<endl;
	}
	else if(ch=='D')
	{
	cout<<"The division  of tow Number is:"<<div<<endl;
	}
		
	
 	return(0);                                                                                                                                                                                                                                                                                                                                                                                                         
}
