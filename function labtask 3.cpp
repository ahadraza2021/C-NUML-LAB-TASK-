#include<iostream>
using namespace std;
int sum(int a, int b, int c);
int main()
{
	int num1;
	int num2;
	int num3;
	cout<<"enter the value of num1,num2 and num3 is:";
	cin>>num1>>num2>>num3;
	sum(num1, num2, num3);
	return(0);
}
int sum(int a , int b , int c)
{
	int add;
	add=a+b+c;
	cout<<"the sum of three number is:"<<add<<endl;
}
