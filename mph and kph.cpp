#include<iostream>
using namespace std;
int main()
{
//	int kph;
	int mph;
	int spd1;	
	int spd2;
	cout<<"enter your number:";
	cin>>spd1;
	cout<<"enter your number:";
	cin>>spd2;
	for(int i=spd1;i<=spd2;i++)
	{
		mph=i*0.6214;
		cout<<mph<<"mph"<<endl;
	}
	return 0;
}
