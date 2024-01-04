#include <iostream>
using namespace std;

int main() {
    const int size = 5;  // Change the size based on the desired pattern size

    // Printing the pattern
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size; ++j) {
            // Printing '*' for the first and last rows, and the first and last columns
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "*";
            } else {
                // Printing space for other positions
                cout << "";
            }
        }
        cout << endl;
    }

    return 0;
}
