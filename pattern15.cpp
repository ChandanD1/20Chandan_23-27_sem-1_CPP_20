#include <iostream>
using namespace std;

int main() 
{
    const int size = 4;  // Change the size based on the desired pattern size

    // Printing the pattern
    for (int i = 1; i <= size * 2 - 1; ++i) 
    {
        int num;

        if (i <= size) 
        {
            // Printing increasing numbers for the first half
            num = i;
        } else 
        {
            // Printing decreasing numbers for the second half
            num = 2 * size - i;
        }

        // Printing the numbers with appropriate spacing
        for (int j = 1; j <= num; ++j) 
        {
            cout << j;
        }

        for (int j = num - 1; j >= 1; --j) 
        
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
