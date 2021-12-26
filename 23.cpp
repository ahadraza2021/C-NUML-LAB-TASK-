#include<iostream>
using namespace std;
int main()
{
	int days,month,total;
	int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"enter your months:";
	cin>>month;
	cout<<"enter your days:";
	cin>>days;
	total=days;
	for(int i=0;i<month;i++)
	{
		total=total+days_per_month[i];
	}
			cout<<"the number of days in this year till date:"<<total<<endl;

	return 0;
}
