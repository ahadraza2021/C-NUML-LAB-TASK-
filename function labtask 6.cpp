#include<iostream>
using namespace std;
int array(int arr);
int main()
{
	int arr1[5];
	cout<<"enter your arrays:";
	cin>>arr1[5];
	array(arr1);
	return 0;
}
int array(int arr)
{
	int arr1[5];
	cout<<"enter your arrays:";
	for(int i=0;i<=5;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<=5;i++)
	{
		cout<<arr1[i];
	}
}
