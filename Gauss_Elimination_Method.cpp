#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 100;

void performGaussianElimination(float matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1
        float pivot = matrix[i][i];
        for (int j = i; j < n + 1; j++)
            matrix[i][j] /= pivot;

        // Make the other rows zero in the current column
        for (int k = 0; k < n; k++) {
            if (k != i) {
                float factor = matrix[k][i];
                for (int j = i; j < n + 1; j++)
                    matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }
}

int main() {
    int n;

    cout << "Enter the number of equations: ";
    cin >> n;

    float matrix[MAX_SIZE][MAX_SIZE + 1];

    cout << "Enter the augmented matrix coefficients:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            cout << "Matrix[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    performGaussianElimination(matrix, n);

    cout << "\nThe solution is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << matrix[i][n] << endl;
    }

    return 0;
}

