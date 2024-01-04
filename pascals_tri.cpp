#include <iostream>
using namespace std;

int main() {
    int numRows;

    // Input: Number of rows in Pascal's Triangle
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    // Printing Pascal's Triangle
    for (int i = 0; i < numRows; i++) {
        // Adding spaces to center the triangle
        for (int j = 0; j < numRows - i - 1; j++) {
            cout << " ";
        }

        int coeff = 1;
        for (int j = 0; j <= i; j++) {
            // Calculate and print the binomial coefficient for each position
            cout << coeff << " ";

            // Update the binomial coefficient for the next position
            coeff = coeff * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
