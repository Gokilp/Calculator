// operators
// simple calculators
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;

    char option;

    cout << "Enter the Operator: +, -, *, /, %" << endl;
    cout << "Enter the option: ";
    cin >> option;

    if (option == '+') {
        cout << "Addition operator" << endl;
    }
    else if (option == '-') {
        cout << "Subtraction operator" << endl;
    }
    else if (option == '*') {
        cout << "Multiplication operator" << endl;
    }
    else if (option == '/') {
        cout << "Division operator" << endl;
    }
    else if (option == '%') {
        cout << "Modulo operator" << endl;
    }
    else {
        cout << "Invalid operator" << endl;
    }
    cout<<" Enter number:"<<endl;
    cin>>num1;
    cout<<" Enter number:"<<endl;
    cin>>num2;

     switch (option) {
        case '+':
            cout << "Addition of value A=" << num1 << " and B=" << num2 << " Result=" << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtraction of value A=" << num1 << " and B=" << num2 << " Result=" << num1 - num2 << endl;
            break;
        case '*':
            cout << "Multiplication of value A=" << num1 << " and B=" << num2 << " Result=" << num1 * num2 << endl;
            break;
        case '/':
            cout << "Division of value A=" << num1 << " and B=" << num2 << " Result=" << num1 / num2 << endl;
            break;
        case '%':
            cout << "Modulus of value A=" << num1 << " and B=" << num2 << " Result=" << (int) num1 % (int) num2 << endl;
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            break;
    }
     cout<<"\n \t \t \t  Thanking you";

 return 0;
}


