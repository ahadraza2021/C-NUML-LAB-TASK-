#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int* ptr=arr;
	cout<<"enter your arrays:";
	cout<<endl;
	for(int i=1;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"your arrays is through pointer address:";
	cout<<endl;
	for(int i=1;i<=5;i++)
	{
		cout<<&arr[i];
		cout<<endl;
	}
	cout<<"your arrays is through pointer:";
	for(int i=1;i<=5;i++)
	{
		cout<<*ptr;
		cout<<endl;
	}
	return 0;
}
