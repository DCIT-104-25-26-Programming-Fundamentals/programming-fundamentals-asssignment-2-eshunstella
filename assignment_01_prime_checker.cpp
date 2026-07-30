// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 1
// =============================================================================
//
// TASK: Prime Number Checker
//
// Write a C++ program that checks whether a given number is prime.
// ... (comments omitted for brevity)

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false; // numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // divisible by something other than 1 and itself
        }
    }
    return true;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}

