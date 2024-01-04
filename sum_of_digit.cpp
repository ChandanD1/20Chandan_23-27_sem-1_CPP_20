#include <iostream>
using namespace std;

int main() 
{
    int number;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Keep finding the sum of digits until it becomes a single-digit number
    while (number >= 10) {
        int sum = 0;

        // Calculate the sum of digits
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }

        number = sum;
    }

    // Display the final result
    cout << "The sum of digits until it becomes a single-digit number: " << number <<endl;

    return 0;
}
