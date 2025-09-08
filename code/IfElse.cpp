#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;
    
    if (age <= 18) {
        cout << "Less than 18, may not enter." << endl;
    } else if (age == 18) {
        cout << "Equal to 18, may enter." << endl;
    } else {
        cout << "Greater than 18, may enter." << endl;
    }

    return 0;
}
