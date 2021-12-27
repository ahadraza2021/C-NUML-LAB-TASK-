#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	int count=0;
	cout<<"enter your character:";
	cin>>ch;
	while(ch!='0')
	{
		ch=getch();
		cout<<ch;
		cout<<endl;
		count++;
	}
	cout<<count;
	return 0;
}
