#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[100];
	int search;
	int sum=0;
	int avg;
	{
	cout<<"the randow values program pick it is:";
	cout<<endl;
	for(int i=1;i<=100;i++)
	{
	arr[i]=rand()%100;
	}
	for(int j=1;j<=100;j++)
	{
		cout<<arr[j];
		cout<<endl;
	}
	for(int k=1;k<=100;k++)
	{
	sum=sum+arr[100];
	avg=sum/100;
	}
	cout<<avg;
	}
	cout<<"which language you want to search is:";
	cin>>search;
	if(arr[100]==search)
	cout<<"the number you want to search is:"<<search;
	else
	cout<<"Sorry we didn't find it:";

	return 0;
}
