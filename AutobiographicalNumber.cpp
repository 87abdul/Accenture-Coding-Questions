//  Execute the function Def Autocount(n).
// The function accepts the string n. It checks whether the number is an autobiographical number or not. If an integer returns, then it is an autobiographical number. If 0 returns, then it is not an autobiographical number.

// Assumption

// The input value should not be more than 10 characters.
// The input string will have numeric characters.
 
// Example

// Input:
// N: “1210”

// Output:
// 3

// Explanation
// The 0th position has the number 1, the 1st position has the number 2, the 2nd position has the number 1, and the 3rd position has number 0. Hence, it is an autobiographical number.

// The count of autobiographical numbers in the input is 3, hence 3 is returned.

#include <iostream>
#include <string>

using namespace std;

int AutoCount(string n) {
    int len = n.length();

    // Check if the length exceeds 10 characters
    if (len > 10) {
        cout << "Input value should not be more than 10 characters." << endl;
        return 0;
    }

    int count = 0;

    // Iterate through each character in the string
    for (int i = 0; i < len; ++i) {
        int digit = n[i] - '0';

        // Count occurrences of digit at position i
        int digitCount = 0;
        for (int j = 0; j < len; ++j) {
            if (n[j] - '0' == i) {
                digitCount++;
            }
        }

        // Check if the count matches the digit at position i
        if (digitCount == digit) {
            count++;
        }
    }

    return count;
}

int main() {
    // Example usage
    string n = "1210";
    int result = AutoCount(n);

    cout << "Output: " << result << endl;  // Output: 3

    return 0;
}
