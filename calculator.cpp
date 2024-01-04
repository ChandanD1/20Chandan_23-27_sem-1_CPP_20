#include <iostream>

class Calculator {
public:
    // Method to perform addition
    float add(float num1, float num2) {
        return num1 + num2;
    }

    // Method to perform subtraction
    float subtract(float num1, float num2) {
        return num1 - num2;
    }

    // Method to perform multiplication
    float multiply(float num1, float num2) {
        return num1 * num2;
    }

    // Method to perform division
    float divide(float num1, float num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero is not allowed.\n";
            return 0;
        }
    }
};

int main() {
    // Create an instance of the Calculator class
    Calculator calculator;

    // Input two numbers from the user
    float num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display menu for operation selection
    std::cout << "Select operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";

    int choice;
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    // Perform the selected operation
    switch (choice) {
        case 1:
            std::cout << "Result: " << calculator.add(num1, num2) << "\n";
            break;
        case 2:
            std::cout << "Result: " << calculator.subtract(num1, num2) << "\n";
            break;
        case 3:
            std::cout << "Result: " << calculator.multiply(num1, num2) << "\n";
            break;
        case 4:
            std::cout << "Result: " << calculator.divide(num1, num2) << "\n";
            break;
        default:
            std::cerr << "Error: Invalid choice.\n";
            break;
    }

    return 0;
}
