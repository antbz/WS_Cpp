#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;
    
    double last_result = 0;

    while (true) {
        cout << "Input an operator (+, -, *, /) - m to use last result - x to quit: ";
        char op;
        cin >> op;

        double num1;

        if (op == 'x') {
            break;
        } else if (op == 'm') {
            num1 = last_result;
            cout << "Please input an operator (+, -, *, /): ";
            cin >> op;
        } else {
            cout << "Please input an integer number: ";
            cin >> num1;
        }
        
        cout << "Please input an integer number: ";
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
        
        last_result = result;
    }

    return 0;
}
