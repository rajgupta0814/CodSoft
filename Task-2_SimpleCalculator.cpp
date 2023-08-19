/*
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/
#include <iostream>
using namespace std;

class SimpleCalculator {
public:
    float num1 = 0, num2 = 0;

    void getInput() {
        cout << "\nEnter the First Number: ";
        cin >> num1;
        cout << "\nEnter the Second Number: ";
        cin >> num2;
    }

    void addition() {
        getInput();
        cout << "\nAddition" << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }

    void subtraction() {
        getInput();
        cout << "\nSubtraction" << endl;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }

    void multiplication() {
        getInput();
        cout << "\nMultiplication" << endl;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }

    void division() {
        getInput();
        cout << "\nDivision" << endl;
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        } else {
            cout << "Cannot divide by zero." << endl;
        }
    }
};

int main() {
    int choice = 0;

    SimpleCalculator calculator;
    do {
        cout << "\n\n**** Simple Calculator ****" << endl;
        cout << "1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n0) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                calculator.addition();
                break;

            case 2:
                calculator.subtraction();
                break;

            case 3:
                calculator.multiplication();
                break;

            case 4:
                calculator.division();
                break;

            case 0:
                cout << "\nThank you!!\nExit";
                break;

            default:
                cout << "\nEntered Wrong Choice!!" << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}

