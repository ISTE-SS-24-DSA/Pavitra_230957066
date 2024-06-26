#include <iostream>
using namespace std;

bool isPalindrome(const string& str, int start, int end) {
    // Base case: If there is only one character or no character
    if (start >= end) {
        return true;
    }

    // Check if the first and last characters are the same
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive case: check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}


int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin,str);

    if (isPalindrome(str,0,str.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}