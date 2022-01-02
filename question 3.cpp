/*Q3. Write a C++ program to Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks 
having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
#include<iostream>
using namespace std;
struct data
{
	int rollno[100];
	char name[100];
	int chen_mark;
	int math_mark;
	int phy_mark;
};
int main()
{
	data pt[5];
	cout<<"enter your data:"<<endl;
	for(int i=1;i<=5;i++)
	{
		cout<<"enter your roll no:";
		cin>>pt[i].rollno;
		cout<<"enter your name:";
		cin>>pt[i].name;
		cout<<"enter your chemistry marks:";
		cin>>pt[i].chen_mark;
		cout<<"enter your math marks:";
		cin>>pt[i].math_mark;
		cout<<"enter your  physics marks:";
		cin>>pt[i].phy_mark;
		cout<<endl;
	}
	for(int i=1;i<=5;i++)
	{
		float percentage = (pt[i].chen_mark + pt[i].math_mark + pt[i].phy_mark)/300.0*100;
	    cout<<"percentage"<<percentage;
		cout<<endl;	    
	}
	return 0;
}
