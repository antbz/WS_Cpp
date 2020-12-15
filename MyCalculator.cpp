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

int main() {
    ex2();
    return 0;
}