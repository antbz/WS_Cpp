#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyCalculator {
private:
    vector<double> result_history;
    bool stop = false;

    void printGreeting();
    string getWithMessage(string message);
    double getFromMem(string pos);
    double to_num(string str);
    double calculateResult(double num1, double num2, string op);
public:
    void run();
};

void MyCalculator::printGreeting() {
    cout << "Welcome to MyCalculator!" << endl;
    cout << "App developed by António Bezerra." << endl;
    cout << "Operators: + - * /" << endl;
    cout << "Accessing N-th previous result: m-N" << endl;
    cout << "Exiting: x or exit" << endl;
    cout << "---------------------------------" << endl;
}

string MyCalculator::getWithMessage(string message) {
    string op;
    cout << message;
    getline(cin, op);
    stop = (op == "x" || op == "exit");
    return op;
}

double MyCalculator::getFromMem(string pos) {
    if (pos.size() == 1 && !pos.empty()) {
        return result_history.back();
    } else if (pos[1] == '-') {
        int shift = stoi(pos.substr(2));
        if (shift < result_history.size()) {
            return result_history[result_history.size() - 1 - shift];
        }
        return result_history[0];
    } else {
        return 0;
    }
}

double MyCalculator::to_num(string str) {
    if (str[0] == 'm') {
        double mem = getFromMem(str);
        cout << "mem: " << getFromMem(str) << endl;
        return mem;
    }
    return stod(str);
}

double MyCalculator::calculateResult(double num1, double num2, string op) {
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

void MyCalculator::run() {
    printGreeting();

    while (true) {
        string aux = getWithMessage("Input first number: ");
        if (stop) {
            break;
        } 
        double num1 = to_num(aux);

        aux = getWithMessage("Input operator: ");
        if (stop) {
            break;
        }
        string op = aux;
        
        aux = getWithMessage("Input second number: ");
        if (stop) {
            break;
        } 
        double num2 = to_num(aux);

        double result = calculateResult(num1, num2, op);
        cout << "Result: " << result << endl;
        result_history.push_back(result);
    }
}

int main() {
    MyCalculator calc;

    calc.run();

    return 0;
}
