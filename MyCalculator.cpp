#include <iostream>

using namespace std;

int ex0() {
    cout << "Hello world!" << endl;
    return 0;
}

int ex1() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;

    return 0;
}

int ex2() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;

    cout << "Please input an integer number: ";
    
    int input;
    cin >> input;

    cout << "Your input: " << input << endl;

    return 0;
}

int ex3() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;

    cout << "Please input an integer number: ";
    int num1;
    cin >> num1;
    
    cout << "Please input an integer number: ";
    int num2;
    cin >> num2;

    int sum = num1 + num2;

    cout << "Sum: " << sum << endl;

    return 0;
}

int ex4() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;

    cout << "Please input an operator (+, -, *, /): ";
    char op;
    cin >> op;

    cout << "Please input an integer number: ";
    int num1;
    cin >> num1;
    
    cout << "Please input an integer number: ";
    int num2;
    cin >> num2;

    int result;

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

int ex5() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;
    
    while (true) {
        cout << "Please input an operator (+, -, *, /) - x to quit: ";
        char op;
        cin >> op;

        if (op == 'x') {
            break;
        }

        cout << "Please input an integer number: ";
        int num1;
        cin >> num1;
        
        cout << "Please input an integer number: ";
        int num2;
        cin >> num2;

        int result;

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
    }

    return 0;
}

int ex6() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;
    
    double last_result = 0;

    while (true) {
        cout << "Input an operator (+, -, *, /) - m to use last result - x to quit: ";
        char op;
        cin >> op;

        int num1;

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
        int num2;
        cin >> num2;

        int result;

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

int ex7() {
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

int main() {
    ex6();
    return 0;
}