#include<iostream>
using namespace std;
struct employee
{
	char employee_name[100];
	int employee_id;
	int employment_year;
};
int main()
{
	employee p1[5];
	cout<<"enter your following detail:name, id and employment year:"<<endl;
	for(int i=1;i<=5;i++)
	{
		cout<<"enter your detail:";
		cin>>p1[i].employee_name;
		cin>>p1[i].employee_id;
		cin>>p1[i].employment_year;
	}
	
	for(int i=1;i<=5;i++)
	{
		cout<<"the following detail of the employee is:"<<endl;
		cout<<"EMPLOYEE NAME:"<<p1[i].employee_name<<endl;
		cout<<"EMPLOYEE ID:"<<p1[i].employee_id<<endl;
		cout<<"EMPLOYMENT YEAR:"<<p1[i].employment_year<<endl;
	}
	return 0;
}
