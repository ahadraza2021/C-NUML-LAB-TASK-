#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"the actual array is:"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
	cout<<"the reverse of the actual array is:"<<endl;
	for(int i=5;i>=0;--i)
	{
		cout<<arr[i];
		cout<<endl;
	}
	return 0;
}
