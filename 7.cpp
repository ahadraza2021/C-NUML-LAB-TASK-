#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int fahrenheit;
	int celsius;
	cout<<"fahrenheit"<<setw(10)<<"celsius"<<endl;
	for(fahrenheit=50;fahrenheit<=100;fahrenheit=fahrenheit+5)
	{
		celsius=5.0/9.0*(fahrenheit-32);
		cout<<fahrenheit<<setw(10)<<celsius<<endl;
	}
}
