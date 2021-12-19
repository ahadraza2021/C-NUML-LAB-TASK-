#include<iostream>
using namespace std;
int main()
{
	int stud1,stud2,stud3;
	int average;
	int sum;
	cout<<"enter your marks student1";
	cin>>stud1;
	cout<<"enter your marks student2";
	cin>>stud2;
	cout<<"enter your marks student3";
	cin>>stud3;
	sum=stud1+stud2+stud3;
	average=sum/3;
	cout<<"the average marks of three student is:"<<average<<endl;
	return(0);


}
