#include<iostream>
using namespace std;
int main()
{
	int netbalance,d1,payment,d2;
	float rate;
	int avg_balance;
	float interest;
	
	cout<<"enter your netbalance";
	cin>>netbalance;
	
	cout<<"enter your d1 billing cycle";
	cin>>d1;
	
	cout<<"enter your d2 billing cycle";
	cin>>d2;
	
	cout<<"enter your payment";
	cin>>payment;
	
	cout<<"interest rate:";
	cin>>rate;
	
	avg_balance=(netbalance*d1-payment*d2)/d1;
	interest=avg_balance*rate;
	
	cout<<"the interest of your average daily balance is:"<<interest<<endl;
	return(0);	
}
