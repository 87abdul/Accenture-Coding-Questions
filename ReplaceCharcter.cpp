// The given function has a string (str) and two characters, ch1 and ch2. Execute the function in such a way that str returns to its original string, and all the events in ch1 are replaced by ch2, and vice versa.
// Replacecharacter(Char str1, Char ch1, Int 1, Char ch2)

// Assumption

// This string has only alphabets that are in lower case.

// Example

// Input:
// str: apples
// ch1: a
// ch2: p

// Output:
// paales

// Explanation
// All the ‘a’ in the string is replaced with ‘p’. And all the ‘p’s are replaced with ‘a’.

#include <iostream>
#include <string>

using namespace std;

void ReplaceCharacter(string& str, char ch1, char ch2) {
    for (char& c : str) {
        if (c == ch1) {
            c = ch2;
        } else if (c == ch2) {
            c = ch1;
        }
    }
}

int main() {
    // Example usage
    string str_example = "apples";
    char ch1_example = 'a';
    char ch2_example = 'p';

    ReplaceCharacter(str_example, ch1_example, ch2_example);

    cout << "Output: " << str_example << endl;  // Output: paales

    return 0;
}
