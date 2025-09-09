#include <bits/stdc++.h>
using namespace std;

int main() {

    int grade;

    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 80) {
        cout << "Your grade is A." << endl;
    }
    else if (grade >= 60) {
        cout << "Your grade is B." << endl;
    }
    else if (grade >= 50) {
        cout << "Your grade is C." << endl;
    }
    else if (grade >= 45) {
        cout << "Your grade is D." << endl;
    }
    else if (grade >= 25) {
        cout << "Your grade is E." << endl;
    }
    else {
        cout << "Your grade is F." << endl;
    }
    
    return 0;
}
