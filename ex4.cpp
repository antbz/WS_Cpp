#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;

    cout << "Please input an operator (+, -, *, /): ";
    char op;
    cin >> op;

    cout << "Please input a number: ";
    double num1;
    cin >> num1;
    
    cout << "Please input a number: ";
    double num2;
    cin >> num2;

    double result;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "Invalid operation!" << endl;
            return -1;
        }
        result = num1 / num2;
    }

    cout << "Result: " << result << endl;

    return 0;
}
