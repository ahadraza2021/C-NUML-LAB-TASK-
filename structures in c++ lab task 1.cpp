#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
	char employee_name[100];
	int employee_id;
	int employment_year;
};
int main()
{
	employee p1;
	cout<<"enter your name:";
	cin>>p1.employee_name;
	cout<<"enter your id:";
	cin>>p1.employee_id;
	cout<<"what is your employment year";
	cin>>p1.employment_year;
	cout<<endl;
	cout<<"detail of the employee is given below:"<<endl;
	cout<<"employee name:"<<p1.employee_name<<endl;
	cout<<"employee id:"<<p1.employee_id<<endl;
	cout<<"employment year:"<<p1.employment_year<<endl;
	return 0;
}
