#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int sum;
	int avg;
	cout<<"enter your number:";
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"the average of these number is:";
	for(int i=0;i<=5;i++)
	{
		sum=sum+arr[i];
		avg=sum/5;
	}
	cout<<avg;
	return 0;
}
