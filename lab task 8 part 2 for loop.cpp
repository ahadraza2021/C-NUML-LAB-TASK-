#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter your number:";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		for(int j=0;j<=num-i;j++)
		cout<<"*";
		cout<<endl;
	}
	return(0);
}
