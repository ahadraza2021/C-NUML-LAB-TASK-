#include<iostream>
using namespace std;
int main()
{
	int num;
	int count=0;
	cout<<"enter your number:";
	cin>>num;
	do
	{
		cout<<num/2;
		count++;
	}
	while(num>=1);
	cout<<count;
	return 0;
}
