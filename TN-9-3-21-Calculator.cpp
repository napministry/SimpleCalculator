// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char ch;
    double num1, num2;

    cout << "Please enter first number: ";
        cin >> num1;

    cout << "Please enter second number: ";
        cin >> num2;

    cout << "Please enter operator ( +, -, *, /): ";
        cin >> ch;

    if (ch == '+') {
        cout << "Your values added are: " << num1 + num2;
    }
    else if (ch == '-') {
        cout << "Your values subtracted are: " << num1 - num2;
    }
    else if (ch == '*') {
        cout << "Your values multiplied are: " << num1 * num2;
    }
    else if (ch == '/') {
        cout << "Your values divided are: " << num1 / num2;
    }
    else {
        cout << "This is not a valid operator";
    }
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
