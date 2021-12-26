#include<iostream>
using namespace std;
struct person
{
	char name[100];
	int age;
	double salary;
};
int main()
{
	person p[3];
	cout<<"enter person detail like name, age and salary:"<<endl;
	for(int i=1;i<=3;i++)
	{
		cout<<"enter your detail:"<<endl;
		cin>>p[i].name;
		cin>>p[i].age;
		cin>>p[i].salary;
	}
	cout<<endl;
	for(int i=1;i<=3;i++)
	{
		cout<<endl;
		cout<<"detail of a person:"<<endl;
		cout<<"name:"<<p[i].name<<endl;
		cout<<"age:"<<p[i].age<<endl;
		cout<<"salary:"<<p[i].salary<<endl;
	}
	return 0;
	
}
