#include <iostream>
using namespace std;
int main() 
{
	char ch;
	cout<<"enter your character:";
	cin>>ch;
	if((ch>=65)&&(ch<=90))
	{
		cout<<"your character is in uppercase:"<<ch;
	}
	else if((ch>=97)&&(ch<=122))
	{
		cout<<"your character is in lowercase:"<<ch;
	}
	else
	{
		cout<<"invalid character"<<ch<<endl;
	}
	return(0);
}
