#include <iostream>
using namespace std;

void printName(string name) {
    cout << "Hi " << name << endl;
}

int main() {

    string name;
    
    cout << "Enter your name: ";
    cin >> name;

    printName(name);

    return 0;
}
