// Perform a function to reverse a string word-wise. The input here will be the string. In the output, the last word mentioned should come as the first word and vice versa.
// Example
// Input:
// Welcome to code
// Output:
// code to Welcome

// Explanation
// The Reversed string word wise function is applied.
// Example
// Input:
// Code to Crack Puzzle
// Output:
// Puzzle Crack to Code

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string reverseStringWordWise(const string& input) {
    istringstream iss(input);
    vector<string> words;

    // Split the input string into words
    string word;
    while (iss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Build the reversed string
    string reversedString;
    for (const string& w : words) {
        reversedString += w + " ";
    }

    // Remove the trailing space
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

int main() {
    // Example usage
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = reverseStringWordWise(input);

    cout << "Reversed string word-wise: " << result << endl;

    return 0;
}
