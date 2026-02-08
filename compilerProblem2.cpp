#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;


    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "It is a Vowel.";
    }


    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "It is a Consonant.";
    }


    else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
        cout << "It is an Arithmetic Operator.";
    }


    else if (ch == '&' || ch == '|') {
        cout << "It is a Logical Operator.";
    }


    else if (ch >= '0' && ch <= '9') {
        cout << "It is a Numerical value.";
    }


    else {
        cout << "It is a Special Character.";
    }

    return 0;
}

