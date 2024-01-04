#include <iostream>
using namespace std;

int main() {
    const int size = 5;  // Change the size based on the size of your array
    int array[size];

    // Input: Taking array elements from the user
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    // Checking if the array is sorted in ascending order
    int i;
    for (i = 1; i < size; ++i) {
        if (array[i] < array[i - 1]) {
            cout << "The array is not sorted in ascending order.\n";
            break;
        }
    }

    // If the loop completed without breaking, the array is sorted
    if (i == size) {
        cout << "The array is sorted in ascending order.\n";
    }

    return 0;
}
