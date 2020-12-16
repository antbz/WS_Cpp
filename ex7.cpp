#include <iostream>

using namespace std;

void printGreeting() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;
}

char getOperator() {
    cout << "Input an operator (+, -, *, /) - m to use last result - x to quit: ";
    char op;
    cin >> op;
    return op;
}

double getNum() {
    double num;
    cout << "Please input a number: ";
    cin >> num;
    return num;
}

double calculateResult(double num1, double num2, char op) {
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
    return result;
}

int main() {
    printGreeting();
    
    double last_result = 0;

    while (true) {
        char op = getOperator();

        double num1;

        if (op == 'x') {
            break;
        } else if (op == 'm') {
            num1 = last_result;
            op = getOperator();
        } else {
            num1 = getNum();
        }
        
        double num2 = getNum();

        double result = calculateResult(num1, num2, op);

        cout << "Result: " << result << endl;
        
        last_result = result;
    }

    return 0;
}
