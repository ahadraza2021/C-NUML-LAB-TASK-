#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter your number:";
	cin>>num;
	int i=1;
	while(i<=num)
	{
		int j=1;
		while(j<=num)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return(0);
}
