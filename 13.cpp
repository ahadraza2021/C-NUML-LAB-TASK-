#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int sum=0;
	cout<<"enter your number:";
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"the sum of these number is:";
	for(int j=0;j<=5;j++)
	{
		
		sum=sum+arr[j];
	}
	cout<<sum<<endl;
	return 0;
}
