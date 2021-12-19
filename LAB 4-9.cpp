#include<iostream>
using namespace std;
int main()
{
	int days,years,weeks,month;
	cout<<"enter days please:";
	cin>>days;
	years=days/365;
	weeks=days/7;
	month=days/30;
	cout<<"days convert into years:"<<years<<endl;
	cout<<"days convert into weeks:"<<weeks<<endl;
	cout<<"days convert into month:"<<month<<endl;
	return(0);
}
