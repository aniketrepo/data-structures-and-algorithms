#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    int num3 =  num1 + num2;
    return num3;
}

int main() {

    int num1, num2;

    cout << "Enter the value of number 1: ";
    cin >> num1;
    
    cout << "Enter the value of number 2: ";
    cin >> num2;

    int result = sum(num1, num2);

    cout << "Result is: " << result << endl;

    return 0;
}
