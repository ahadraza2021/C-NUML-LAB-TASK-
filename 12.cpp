#include<iostream>
using namespace std;
int main()
{
	int num;
	int i=1,k,count=0;
	cout<<"number:";
	cin>>num;
	while(i<=num)
	{
		if(num%k==0)
		{
			i++;
			count+1;
		}
	}
	if(count==1)
	cout<<"prime";
	else
	cout<<"not a prime number:";
	return(0);
}
