#include<iostream>
using namespace std;
int main()
{
	int small,large;
	int arr[5];
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	small=arr[0];
	large=arr[0];
	for(int i=0;i<=5;i++)
	{
		int count=1;
		if(arr[i]<small)
		{
			small=arr[i];
		}
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	cout<<"the smallest number is:"<<small<<endl;
	cout<<"the largest number is:"<<large<<endl;
}
