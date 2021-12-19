#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[10];
	cout<<"the random number is enter:"<<endl;
	for(int i=1;i<=10;i++)
	{
		arr[10]=rand()%100;
		cout<<arr[10]<<endl;
	}
	return 0;
}
