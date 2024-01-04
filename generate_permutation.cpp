#include <iostream>
#include <algorithm>  // For using std::next_permutation
using namespace std;

int main() {
    string str;

    // Input: Taking a string from the user
    cout << "Enter a string: ";
    cin >> str;

    // Sorting the string to get the initial permutation
    sort(str.begin(), str.end());

    // Displaying the initial permutation
    cout << "\nAll permutations of the string:\n";
    do 
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    return 0;
}
