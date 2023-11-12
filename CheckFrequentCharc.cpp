// The function to execute is
// Char Frequentcharacter(Char str, char x)

// This function has a string and a character. This function requires replacing the most used character in the str with the ‘x’ character.

// Note: If two characters have the same frequency, then we will have to consider the frequency which has the lower ASCII value.

// Example

// Input:
// str: bbadbbababb
// char x: t

// Output:
// ttadttatatt

// Explanation
// The maximum character repeated is ‘b’ that is replaced with ‘t’.

#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

string FrequentCharacter(string str, char x) {
    if (str.empty()) {
        return str; // Return the original string if it's empty
    }

    unordered_map<char, int> frequencyMap;

    // Count the frequency of each character in the string
    for (char c : str) {
        frequencyMap[c]++;
    }

    // Find the character with the maximum frequency
    char maxChar = str[0];
    int maxFreq = frequencyMap[str[0]];

    for (auto& entry : frequencyMap) {
        if (entry.second > maxFreq || (entry.second == maxFreq && entry.first < maxChar)) {
            maxChar = entry.first;
            maxFreq = entry.second;
        }
    }

    // Replace the most frequent character with 'x'
    replace(str.begin(), str.end(), maxChar, x);

    return str;
}

int main() {
    // Example usage
    string str = "bbadbbababb";
    char x = 't';

    string result = FrequentCharacter(str, x);

    cout << "Output: " << result << endl;  // Output: ttadttatatt

    return 0;
}
