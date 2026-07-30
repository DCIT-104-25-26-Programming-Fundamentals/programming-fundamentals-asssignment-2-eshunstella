// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
// ... (comments omitted for brevity)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

bool divide(double a, double b, double& result) {
    if (b == 0) {
        return false; // signal failure — division by zero
    }
    result = a / b;
    return true;
}

bool mod(int a, int b, int& result) {
    if (b == 0) {
        return false;
    }
    result = a % b;
    return true;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

void getTwoNumbers(double& first, double& second) {
    cout << "Enter first number : ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
}

int main() {
    int choice;
    double num1, num2;

    cout << fixed << setprecision(2);

    do {
        cout << "\n============================" << endl;
        cout << "     SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;
        cout << "Select an operation (1-7): ";
        cin >> choice;

        if (choice >= 1 && choice <= 6) {
            getTwoNumbers(num1, num2);
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Result: " << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Result: " << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                break;

            case 4: {
                double result;
                if (divide(num1, num2, result)) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                break;
            }

            case 5: {
                int result;
                if (mod(static_cast<int>(num1), static_cast<int>(num2), result)) {
                    cout << "Result: " << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << result << endl;
                } else {
                    cout << "Error: Cannot perform modulus by zero." << endl;
                }
                break;
            }

            case 6:
                cout << "Result: " << num1 << " ^ " << num2 << " = " << power(num1, num2) << endl;
                break;

            case 7:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Error: Invalid choice. Please enter 1-7." << endl;
        }

    } while (choice != 7);

    return 0;
}