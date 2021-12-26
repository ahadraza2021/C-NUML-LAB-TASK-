#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int sum=0;
	int avg;
	cout<<"enter your number:";
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<=5;i++)
	{
		sum=sum+arr[i];
		avg=sum/5;
	}
	cout<<"the average of array is:"<<avg;
	return 0;
}

