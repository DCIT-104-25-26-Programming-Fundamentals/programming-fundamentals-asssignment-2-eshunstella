// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 6
// =============================================================================
//
// TASK: Multiplication Table Generator
// ... (comments omitted for brevity)

#include <iostream>
using namespace std;

void printSingleTable(int num) {
    cout << "\nMultiplication Table for " << num << ":" << endl;
    for (int i = 1; i <= 12; i++) {
        cout << num << "  x  " << i << "  =  " << (num * i) << endl;
    }
}

void printTablesUpToN(int n) {
    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }

    for (int num = 1; num <= n; num++) {
        printSingleTable(num);
        if (num != n) {
            cout << "---------------------------" << endl;
        }
    }
}

int main() {
    // Part A
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printSingleTable(number);

    // Part B
    int n;
    cout << "\nEnter N (to print tables from 1 to N): ";
    cin >> n;
    printTablesUpToN(n);

    return 0;
}

