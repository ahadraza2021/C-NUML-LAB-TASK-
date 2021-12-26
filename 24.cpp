#include<iostream>
using namespace std;
int main()
{
	int age[150],i,n,count=0;
	cout<<"enter the numbrer of persons required:";
	cin>>n;
	cout<<"enter ages of"<<n<<"person"<<endl;
	for(int i=0;i<=n;i++)
	{
		cin>>age[i];
		if(age[i]>=50&&age[i]>=60)
		count=count+1;
	}
	cout<<count<<"person are between 50 and 60";
	return 0;
}
