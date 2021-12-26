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
		int j=0;
		while(j<=num-i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return(0);
}
