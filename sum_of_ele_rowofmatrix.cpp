#include <iostream>
using namespace std;

int main() {
    const int rows = 3;  // Change the number of rows based on your matrix
    const int cols = 3;  // Change the number of columns based on your matrix
    int matrix[rows][cols];

    // Input: Taking matrix elements from the user
    cout << "Enter matrix elements row-wise:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculating the sum of elements in each row
    cout << "\nSum of elements in each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}
