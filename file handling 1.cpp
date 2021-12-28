#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"enter your name and age:"<<endl;
	cin.getline(arr,100);
	ofstream myfile("ahadraza1.txt");
	myfile<<arr;
	myfile.close();
	cout<<"file write operation preformed successfully:"<<endl<<endl;
	
	cout<<"reading from file operation started:"<<endl;
	char arr1[100];
	ifstream obj("ahadraza1.txt");
	cin.getline(arr1,100);
	cout<<"array content:"<<arr1;
	cout<<"file read operation preformed successfully:";
	obj.close();
	
}
