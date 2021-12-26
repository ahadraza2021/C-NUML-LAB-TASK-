#include<iostream>
using namespace std;
int factorial(int n);
int main()
{	
	int num;
	cout<<"enter your number:";
	cin>>num;
	factorial(num);
    return 0;
}
int factorial(int n)
{
	int i;
	long fact;
	fact=1;
	for(int i=1;i<=n;i++)
	fact=fact*i;
	cout<<"factorial of:"<<" "<<n<<" "<<"is"<<" "<<fact;
}
