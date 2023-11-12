//  Write a function to find if the given string is a palindrome or not. Return 1 if the input string is a palindrome, else return 0.
// Input:
// level
// Output:
// 1

// Explanation:
// The reverse of the string ‘level’ is ‘level’. As they are the same, the string is a palindrome.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main() {
    // Example usage
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int result = isPalindrome(input);

    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
