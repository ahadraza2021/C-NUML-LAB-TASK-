#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
 	do
 	{
    j=1;
	do
 	{
    cout<<"*";
    j++;
	}
 	while(j<=8-i);
    cout<<endl;
    i++;
    }
	while(i<=9);
    return 0;
    }
