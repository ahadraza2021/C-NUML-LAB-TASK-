#include<iostream>
using namespace std;
int fahrenheit(int temperature);
int main()
{
	int temp;
	cout<<"enter your temperature:";
	cin>>temp;
	fahrenheit(temp);
	return 0;
}
int fahrenheit(int temperature)
{
	float celsius;
	celsius=5.0/9.0*(temperature-32);
	cout<<"fahrenheit convert into celsius is:"<<celsius<<endl;
}
