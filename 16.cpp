#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int search;
	cout<<"enter your values:"<<endl;
	for(int i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"which number you want to search it:";
	cin>>search;
	for(int j=0;j<=5;j++)
	{
		cout<<arr[j];
		cout<<endl;
	}
	if(arr[5]==search)
	cout<<"the number you want to search is:"<<search;
	else
	cout<<"Sorry we didn't find it:";
	return 0;
}
