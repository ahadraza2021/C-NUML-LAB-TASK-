#include<iostream>
using namespace std;
void zero_small(int a,int b);
int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	zero_small(x,y);
	cout<<x;
	cout<<y;
    
        return 0;
}
void zero_small(int a, int b)
{
	if(a<b)
		a=0;
	else
		b=0;
}

