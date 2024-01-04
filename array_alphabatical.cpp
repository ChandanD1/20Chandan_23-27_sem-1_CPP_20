#include <iostream>
#include <algorithm>  // For using the sort function
using namespace std;

int main() 
{
    const int size = 5;  // Change the size based on the number of strings you want to input
    string strings[size];

    // Input: Taking strings from the user
    cout << "Enter " << size << " strings:\n";
    for (int i = 0; i < size;i++) 
    {
        cout << "String " << i + 1 << ": ";
        cin >> strings[i];
    }

    // Sorting the array of strings in alphabetical order
    sort(strings, strings + size);

    // Displaying the strings in alphabetical order
    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < size; i++) 
    {
        cout << strings[i] << endl;
    }

    return 0;
}
