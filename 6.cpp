#include<iostream>
using namespace std;
int main()
{
	int basic_pay;
	int net_pay;
	int house;
	cout<<"enter your basic pay!";
	cin>>basic_pay;
	if(basic_pay<30000)
	{
		house=basic_pay*30/100;
	}
	else if((basic_pay>=30000)&&(basic_pay<=50000))
	{
		house=basic_pay*35/100;
	}
	else if(basic_pay>50000)
	{
		house=basic_pay*40/100;
	}
	net_pay=basic_pay*house;
	cout<<"netpay of your job:"<<net_pay<<endl;
	cout<<"your house rent:"<<house<<endl;
	cout<<"your basic salary:"<<basic_pay<<endl;
	return(0);
}
