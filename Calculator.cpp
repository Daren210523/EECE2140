#include <iostream>
using namespace std;
int main()
{
    char op;
    double num1, num2;

    //Ask for the action
    cout << "Enter operator (+, -, *, /):";
    cin >> op;

    //Ask for two numbers
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    
    //Perform the calculation
    switch(op) {
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

        case '/':
        if (num2 != 0.0)
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        else
        cout << "Error: Division by zero is not allowed.";
        break;

    }
}