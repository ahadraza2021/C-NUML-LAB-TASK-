#include <iostream>
using namespace std;
int main()
 {
    char op;
    float num1, num2;
      
    cout << "Enter an arithemetic operator(+ - * /)\n";
    cin >> op;
    cout << "Enter two numbers as operands\n";
    cin >> num1 >> num2;
  
    switch(op) 
	{
        case '+': 
                cout<<"the sum of two value is:"<< num1+num2;
                break;
        case '-':
                cout<<"the sub of two value is:"<< num1+num2;
                break;
        case '*':
                cout<<"the product of two value is:"<< num1*num2;
                break;
        case '/':
                cout<<"the divide of two value is:"<< num1/num2;
                break;
        default: 
                cout<<"ERROR: Unsupported Operation";
    }
      
    return 0;
}
