#include<iostream>
using namespace std;
int main()
{
	int num;
	int count=0;
	cout<<"enter your number:";
	cin>>num;
	while(num>=1)
	{
		cout<<num/2;
		count++;
	}
	cout<<count;
	return 0;
}
