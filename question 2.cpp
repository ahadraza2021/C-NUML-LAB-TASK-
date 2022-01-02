//Q2. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include<iostream>
using namespace std;
struct data
{
	char rollno[100];
	char name[100];
	int age;
	char address[100];
	int marks;	
};
int main()
{
	data pt[15];
	cout<<"enter your data:"<<endl;
	for(int i=1;i<=5;i++)
	{
		cout<<"enter your roll no:";
		cin>>pt[15].rollno;
		cout<<"enter your name:";
		cin>>pt[15].name;
		cout<<"enter your age:";
		cin>>pt[15].age;
		cout<<"enter your address:";
		cin>>pt[15].address;
		cout<<"enter your marks:";
		cin>>pt[15].marks;
		cout<<endl;
	}
	cout<<"DATA:";
	for(int i=1;i<=5;i++)
	{
		cout<<"your roll no:"<<pt[15].rollno<<endl;
		cout<<"your name is:"<<pt[15].name<<endl;
		cout<<"your age is:"<<pt[15].age<<endl;
		cout<<"your address is:"<<pt[15].address<<endl;
		cout<<"your marks is:"<<pt[15].marks<<endl;
	}
	return 0;
}
