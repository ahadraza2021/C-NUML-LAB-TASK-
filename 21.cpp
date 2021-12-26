#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=1;i<=5;i++)
	{
		cin>>arr[i];
	}
	for(int j=1;j<=5;j++)
	{
		arr[i]=arr[j];
		cout<<arr[i];
	}
	cout<<"the copy of the array is:";
	for(int k=1;k<=5;k++)
	{
		cout<<arr[k];
	}
}
