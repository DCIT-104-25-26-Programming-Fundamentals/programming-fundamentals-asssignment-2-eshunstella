// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 5
// =============================================================================
//
// TASK: Fibonacci Sequence Generator
// ... (comments omitted for brevity)

#include <iostream>
using namespace std;

void printFibonacci(int n) {
    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }

    int a = 0, b = 1;

    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

bool isFibonacci(int num) {
    if (num < 0) {
        return false;
    }

    int a = 0, b = 1;

    while (a <= num) {
        if (a == num) {
            return true;
        }
        int next = a + b;
        a = b;
        b = next;
    }
    return false;
}

int main() {
    // Part A
    int n;
    cout << "How many terms? ";
    cin >> n;
    printFibonacci(n);

    // Part B
    int num;
    cout << "\nEnter a number to check: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << num << " is a Fibonacci number." << endl;
    } else {
        cout << num << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}

