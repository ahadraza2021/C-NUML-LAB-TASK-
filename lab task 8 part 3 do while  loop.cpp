#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter your number:";
	cin>>num;
	int i=1;
	do
	{
		int j=1;
		do
		{
			cout<<"*";
			j++;
		}
		while(j<=num);
		cout<<endl;
		i++;
	}
	while(i<=num);
	return 0;
}
