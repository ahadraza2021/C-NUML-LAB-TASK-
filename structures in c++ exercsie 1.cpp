#include<iostream>
using namespace std;
struct phone
{
	int area_code;
	int exchange;
	int number;
};
int main()
{
    int area_code=200;
    int exchange=7123;
    int number=456;
	phone p1;
	cout<<"enter your number in the following pattern:";
	cout<<"enter your area code:";
	cin>>p1.area_code;
	cout<<"enter your exchange code:";
	cin>>p1.exchange;
	cout<<"enter your number code:";
	cin>>p1.number;
	cout<<"MY NUMBER IS:"<<"("<<area_code<<")"<<"("<<exchange<<")"<<"-"<<number<<endl;
	cout<<"YOUR NUMBER IS:"<<"("<<p1.area_code<<")"<<"("<<p1.exchange<<")"<<"-"<<p1.number<<endl;
}
