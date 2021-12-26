#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter your character:";
	cin>>ch;
	if((ch=='a')||(ch=='z'))
	{
		cout<<"your character is in lowercase:";
	}
	else if((ch=='A')||(ch=='Z'))
	{
		cout<<"your character is in uppercase:";
	}
	else
	{
		cout<<"invalid character!";
	}
	return(0);
}
