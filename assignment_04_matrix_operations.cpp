// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
// ... (comments omitted for brevity)

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void readMatrix(int mat[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void printMatrix(int mat[10][10], int rows, int cols, string label) {
    cout << "\n" << label << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << mat[i][j];
        }
        cout << endl;
    }
}

void transposeMatrix(int mat[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

void addMatrices(int a[10][10], int b[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[10][10], int b[10][10], int rowsA, int colsA, int colsB, int result[10][10]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            int sum = 0;
            for (int k = 0; k < colsA; k++) {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }
}

int main() {
    int choice;
    cout << "Matrix Operations Menu" << endl;
    cout << "1. Transpose a Matrix" << endl;
    cout << "2. Add Two Matrices" << endl;
    cout << "3. Multiply Two Matrices" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        int rows, cols;
        int mat[10][10], result[10][10];

        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;

        readMatrix(mat, rows, cols);
        transposeMatrix(mat, rows, cols, result);

        printMatrix(mat, rows, cols, "Original Matrix");
        printMatrix(result, cols, rows, "Transposed Matrix");

    } else if (choice == 2) {
        int rows, cols;
        int a[10][10], b[10][10], result[10][10];

        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;

        cout << "\nEnter values for Matrix A:" << endl;
        readMatrix(a, rows, cols);

        cout << "\nEnter values for Matrix B:" << endl;
        readMatrix(b, rows, cols);

        addMatrices(a, b, rows, cols, result);

        printMatrix(a, rows, cols, "Matrix A");
        printMatrix(b, rows, cols, "Matrix B");
        printMatrix(result, rows, cols, "Sum (A + B)");

    } else if (choice == 3) {
        int rowsA, colsA, rowsB, colsB;
        int a[10][10], b[10][10], result[10][10];

        cout << "Enter rows for Matrix A: ";
        cin >> rowsA;
        cout << "Enter columns for Matrix A: ";
        cin >> colsA;

        cout << "Enter rows for Matrix B: ";
        cin >> rowsB;
        cout << "Enter columns for Matrix B: ";
        cin >> colsB;

        if (colsA != rowsB) {
            cout << "Error: Columns of A must equal rows of B for multiplication." << endl;
            return 0;
        }

        cout << "\nEnter values for Matrix A:" << endl;
        readMatrix(a, rowsA, colsA);

        cout << "\nEnter values for Matrix B:" << endl;
        readMatrix(b, rowsB, colsB);

        multiplyMatrices(a, b, rowsA, colsA, colsB, result);

        printMatrix(a, rowsA, colsA, "Matrix A");
        printMatrix(b, rowsB, colsB, "Matrix B");
        printMatrix(result, rowsA, colsB, "Product (A x B)");

    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

