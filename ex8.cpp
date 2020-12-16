#include <iostream>
#include <string>

using namespace std;
    
double last_result = 0;

void printGreeting() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;
    cout << "Operators: + - * /" << endl;
    cout << "Accessing last result: m or mem" << endl;
    cout << "Exiting: x or exit" << endl;
    cout << "---------------------------------" << endl;
}

string getWithMessage(string message) {
    string op;
    cout << message;
    getline(cin, op);
    return op;
}

double to_num(string str) {
    if (str == "m" || str == "mem") {
        cout << "mem: " << last_result << endl;
        return last_result;
    }
    return stod(str);
}

double calculateResult(double num1, double num2, string op) {
    double result;
    if (op == "+") {
        result = num1 + num2;
    } else if (op == "-") {
        result = num1 - num2;
    } else if (op == "*") {
        result = num1 * num2;
    } else if (op == "/") {
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

    while (true) {
        string aux = getWithMessage("Input first number: ");
        if (aux == "x" || aux == "exit") {
            break;
        } 
        double num1 = to_num(aux);

        aux = getWithMessage("Input operator: ");
        if (aux == "x" || aux == "exit") {
            break;
        }
        string op = aux;
        
        aux = getWithMessage("Input second number: ");
        if (aux == "x" || aux == "exit") {
            break;
        } 
        double num2 = to_num(aux);

        double result = calculateResult(num1, num2, op);
        cout << "Result: " << result << endl;
        last_result = result;
    }

    return 0;
}
