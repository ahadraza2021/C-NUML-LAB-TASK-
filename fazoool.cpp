#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//type casting->explicit and implicit
	int a;
	int b;
    float d;
	int m;
	cout<<"enter the value of num1";
	cin>>a;
	cout<<"enter the value of num2:";
	cin>>b;
	d=(float)a/(float)b;
	m= a%b;
	cout<<"the divide of two number is:"<<d<<endl;
	cout<<"the modulus of two number is:"<<m<<endl;
	return(0);
}
