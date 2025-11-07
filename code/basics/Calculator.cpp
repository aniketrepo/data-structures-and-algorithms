#include <bits/stdc++.h>
using namespace std;

int main() {

    int num1, num2;
    char operation;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Select your operation [+, -, /, *]: ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Sum: " << num1 + num2;
            break;

        case '-':
            cout << "Difference: " << num1 - num2;
            break;

        case '/':
            cout << "Division: " << num1 / num2;
            break;

        case '*':
            cout << "Product: " << num1 * num2;
            break;

        default:
            cout << "Invalid Operation Entered";
    }
    
    return 0;
}
