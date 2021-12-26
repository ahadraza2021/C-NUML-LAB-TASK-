#include<iostream>
using namespace std;
int main()
{
	int sum;
	int i=30;
	while(i<=60)
	{
		i=i+3;
		cout<<i<<endl;
		sum=sum+i;
	}
	cout<<"the sum of these number is!"<<sum<<endl;
	return(0);
}
