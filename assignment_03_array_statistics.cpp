// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
// ... (comments omitted for brevity)

#include <iostream>
using namespace std;

int getSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double getAverage(int arr[], int n) {
    return static_cast<double>(getSum(arr, n)) / n;
}

int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int getMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int n;

    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "\nResults:" << endl;
    cout << "Sum:     " << getSum(arr, n) << endl;
    cout << "Average: " << getAverage(arr, n) << endl;
    cout << "Maximum: " << getMax(arr, n) << endl;
    cout << "Minimum: " << getMin(arr, n) << endl;

    return 0;
}
