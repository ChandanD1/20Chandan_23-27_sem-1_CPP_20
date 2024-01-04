#include <iostream>
using namespace std;

int main() {
    double base, power, result = 1;

    // Input base and exponent from the user
   cout << "Enter the base: ";
   cin >> base;

   cout << "Enter the power: ";
   cin >> power;

    // Calculate power using a loop
    for (int i = 0; i < power; i++) {
        result *= base;
    }

    // Display the result
   cout << base << " raised to the power " << power << " is: " << result << endl;

    return 0;
}
