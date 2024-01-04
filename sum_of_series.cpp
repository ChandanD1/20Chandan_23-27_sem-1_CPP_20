#include <iostream>
using namespace std;

int main() {
    int N;

    // Input: Number of terms in the series
    cout << "Enter the value of N: ";
    cin >> N;

    double sum = 0;
    double term = 1;

    // Calculating the sum of the series
    for (int i = 1; i <= N; i++) {
        term *= i;  // Calculate factorial
        sum += i / term;
    }

    // Displaying the result
    cout << "Sum of the series: " << sum << endl;

    return 0;
}

