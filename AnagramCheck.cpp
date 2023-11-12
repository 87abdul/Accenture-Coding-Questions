// Write a function to validate if the provided two strings are anagrams or not. If the two strings are anagrams, then return ‘yes’. Otherwise, return ‘no’.
// Input:

// Input 1: 1st string
// Input 2: 2nd string

// Output:
// (If they are anagrams, the function will return ‘yes’. Otherwise, it will return ‘no’.)

// Example

// Input 1: Listen
// Input 2: Silent

// Output:
// Yes

// Explanation

// Listen and Silent are anagrams (an anagram is a word formed by rearranging the letters of the other word).

#include <iostream>
#include <algorithm>

using namespace std;

string areAnagrams(const string& str1, const string& str2) {
    // Sort both strings
    string sortedStr1 = str1;
    string sortedStr2 = str2;

    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());

    // Check if the sorted strings are equal
    if (sortedStr1 == sortedStr2) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    // Example usage
    string input1 = "Listen";
    string input2 = "Silent";

    string result = areAnagrams(input1, input2);

    cout << "Output: " << result << endl; // Output: Yes

    return 0;
}
