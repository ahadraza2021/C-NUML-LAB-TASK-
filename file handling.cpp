#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char arr[100];
	cout<<"enter your name and age:"<<endl;
	cin.getline(arr,100);
	ofstream myfile("ahad.txt");
	//myfile.open("ahad.txt");
	myfile<<arr;
	myfile.close();
	cout<<"file write operation preformed successfully:"<<endl<<endl;	
	return 0;
}
