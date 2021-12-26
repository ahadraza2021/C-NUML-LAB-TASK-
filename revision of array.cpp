#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"enter your number:";
	cout<<endl;
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array you enter is:";
	cout<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
	return 0;
}
