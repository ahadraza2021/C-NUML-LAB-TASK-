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
	int larger=arr[0];
	int smaller=arr[0];
	for(int i=0;i<=5;i++)
	{
		if(arr[i]<smaller)
		smaller=arr[i];
		if(arr[i]>larger)
		larger=arr[i];
	}
	cout<<"the larger once is:"<<larger;
	cout<<endl;
	cout<<"the smallest once is:"<<smaller;
	return 0;
}
