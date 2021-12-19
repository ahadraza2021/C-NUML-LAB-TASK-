//V=PI*R*2*H;
//AREA=2*PI*R*(H+R)
#include<iostream>
using namespace std;
int main()
{
	float pi=3.14;
	int r;
	int h;
	float volume;
	float area;
	cout<<"enter the value of radius:";
	cin>>r;
	cout<<"enter the value of height:";
	cin>>h;
	volume=pi*r*2*h;
	area=2*pi*r*(h+r);
	cout<<"the volume of cylinder is:"<<volume<<endl;
	cout<<"the area of cylinder is:"<<area<<endl;
	return(0);
	
}
