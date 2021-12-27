//sum=30+33+36+39...+60;
//sum=answer:
#include<iostream>
using namespace std;
int main()
{
	int sum;
	for(int i=30;i<=60;i=i+3)
	{
		sum=sum+i;
		cout<<i<<" ";
	}
	cout<<"the sum:"<<endl;
	cout<<sum;
}
