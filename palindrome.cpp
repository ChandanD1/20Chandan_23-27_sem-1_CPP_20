#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }

    return true; // Palindrome
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    if (isPalindrome(inputString)) {
        cout <<  inputString <<" " <<"is a palindrome." << endl;
    } else {
        cout << inputString <<" "<<" is not a palindrome." << endl;
    }

    return 0;
}


