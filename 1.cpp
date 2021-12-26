#include<iostream>
using namespace std;
int rectangle (int length, int width)
{
	cout<<"the area of rectangle is:"<<length*width<<endl;
}
int main ()
{
	int length;
	int width;
	cin>>length>>width;
	rectangle (length, width);
	return 0;
}
