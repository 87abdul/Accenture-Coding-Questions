//  Execute a function that accepts the integer array of length ‘size’ and finds out the maximum number that can be formed by permutation.
// Note: You will have to rearrange the numbers to make the maximum number.

// Example
// Input:
// 34 79 58 64
// Output:
// 98765443

// Explanation
// All digits of the array are 3, 4, 7, 9, 5, 8, 6, and 4. The maximum number found after rearranging all the digits is 98765443.

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool compare(string a, string b) {
    // Concatenate a and b in different orders and compare to find the maximum
    return a + b > b + a;
}

string maxNumberPermutation(int arr[], int size) {
    vector<string> strArr;

    // Convert integers to strings and store in vector
    for (int i = 0; i < size; i++) {
        strArr.push_back(to_string(arr[i]));
    }

    // Sort the strings in descending order to maximize the number
    sort(strArr.begin(), strArr.end(), compare);

    // Concatenate the strings to get the maximum number
    string result;
    for (const string& s : strArr) {
        result += s;
    }

    return result;
}

int main() {
    // Example usage
    int arr[] = {34, 79, 58, 64};
    int size = sizeof(arr) / sizeof(arr[0]);

    string result = maxNumberPermutation(arr, size);

    cout << "Maximum number after permutation: " << result << endl;

    return 0;
}
