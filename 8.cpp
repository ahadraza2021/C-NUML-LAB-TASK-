#include<iostream>
using namespace std;
int main()
{
	int sum;
	cout<<"for loop!"<<endl ;
	for(int i=30;i<=60;i=i+3)
	{
		cout<<i<<endl;
		sum=sum+i;
	}
	cout<<"the sum of these number is!";
	cout<<sum<<endl;
}
