#include <iostream>
using namespace std;
void display(int m[5]) 
{
    cout<<"Displayin:"<<endl;  
    for (int i = 0; i < 5; ++i) 
	{
        cout << "the value is:" << i + 1 << ": " << m[i] << endl;
    }
}

int main() 
{
    int marks[5];
    cout<<"enter your values:";
    cout<<endl;
    for(int i=0;i<=5;i++)
    {
    	cin>>marks[i];
	}
    display(marks);
    return 0;
}
