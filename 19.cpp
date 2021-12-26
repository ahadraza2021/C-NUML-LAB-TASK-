#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int copy[5];
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<=5;j++)
	{
		arr[j]=copy[j];
	}
	cout<<"the actual array is:"<<arr[j]<<endl;
	cout<<"the copy of the array is:"<<copy[j]<<endl;
	return 0;
}
