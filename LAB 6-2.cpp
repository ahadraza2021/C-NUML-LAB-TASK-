#include<iostream>
using namespace std;
int main()
{
 // int num1;
  int num2;
  int num2;
  cout<<"Enter The Value Of Number 1:";
  cin>>num1;
  cout<<"Enter The Value Of Number 2:";
  cin>>num2;
  cout<<"Enter Your Operator:";//sslslslsls
  cin>>op;
  switch(op)
  {
  	case '+':
  		cout<<"the sum of two value is:"<<num1+num2<<endl;
  		break;
  	case'-':
	  	cout<<"the sub of two value is:"<<num1-num2<<endl;
	 	 break;
	case'/':
	  	cout<<"the division of two value is:"<<num1-num2<<endl;
	  	break;
	case'*':
	  	cout<<"the multipilication of two value is:"<<num1*num2<<endl;
	  	break;
	default:
	   cout<<"invalid operator:";
	   break; 
	} 
	   return 0;
}
