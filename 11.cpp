#include<iostream>
using namespace std;
int main()
{
	int num,k,count=0;
	cout<<"number:";
	cin>>num;
	for(k=1;k<=num;k++)
	if(num%k==0)
	count=count+1;
	if(count==1)
	cout<<"prime";
	else
	cout<<"not a prime number:";
	return(0);
}
