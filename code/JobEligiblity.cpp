#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;
    
    if (age < 18) {
        cout << "Not eligible for job." << endl;
    }
    else {
        if (age >= 55 && age <= 57) {
            cout << "Eligible for job, but retirement soon." << endl;
        }
        else {
            cout << "Time to retire." << endl;
        }
    }

    return 0;
}
