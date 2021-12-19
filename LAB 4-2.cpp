#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a;
	float b;
    float divide;
	int m;
	cout<<"enter the value of num1";
	cin>>a;
	cout<<"enter the value of num2:";
	cin>>b;
	divide=a/b;
	m=a%b;
	cout<<"the divide of two number is:"<<divide<<endl;
	cout<<"the modulus of two number is:"<<m<<endl;
	return(0);
}
