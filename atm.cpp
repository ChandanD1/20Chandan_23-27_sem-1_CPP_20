#include <iostream>
using namespace std;

// Function to display the menu
void displayMenu() 

{
    cout << "ATM Menu:";
    cout << "1. Check Balance";
    cout << "2. Deposit";
    cout << "3. Withdraw";
    cout << "4. Exit";
}

int main() 
{
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    do 
    {
        displayMenu(); // Display the menu

        // Get user choice
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Process user choice using a switch statement
        switch (choice) 
        {
            case 1:
                // Check Balance
                cout << "Your balance is: "  << balance <<endl;
                break;

            case 2:
                // Deposit
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                if (amount > 0)
                {
                    balance += amount;
                    cout << "Deposit successful. Your new balance is: "  << balance << endl;
                } else {
                    std::cout << "Invalid amount. Please enter a positive value.";
                }
                break;

            case 3:
                // Withdraw
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) 
                {
                    balance -= amount;
                    cout << "Withdrawal successful. Your new balance is: " << balance <<endl;
                } else 
                {
                    cout << "Invalid amount or insufficient funds.";
                }
                break;

            case 4:
                // Exit
                cout << "Exiting the ATM. Thank you!";
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.";
        }

    } while (choice != 4);
    
    return 0;
}
