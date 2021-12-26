#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"enter your number:";
	cin>>n1;
	cout<<"enter your number:";
	cin>>n2;
	cout<<"enter your number:";
	cin>>n3;
	if((n1>n2)&&(n1>n3))
	{
		cout<<"n1 is the greatest once!"<<endl;
	}
	else if((n2>n1)&&(n2>n3))
	{
		cout<<"n2 is the greatest once!"<<endl;
	}
	else
	{
		cout<<"n3 is the greatest once!"<<endl;
	}
	return(0);
}
