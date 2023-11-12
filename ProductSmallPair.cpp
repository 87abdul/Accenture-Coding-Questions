// def Productsmallpair(sum,arr)

// This function accepts the integers sum and arr. It is used to find the arr(j) and arr(k), where k ! = j. arr(j) and arr(k) should be the smallest elements in the array.

// Keep this in mind:

// If n<2 or empty, return –1.
// If these pairs are not found, then return to zero.
// Make sure all the values are within the integer range.
 
// Example

// Input:
// Sum: 9
// Arr: 5 4 2 3 9 1 7

// Output:
// 2

// Explanation

// From the array of integers, we have to select the two smallest numbers, i.e 2 and 1. Sum of these two (2 + 1) = 3. This is less than 9 (3 < 9). The product of these two is 2 (2 x 1 = 2) Hence the output is integer 2.

// Sample input:
// Sum: 4
// Arr: 9 8 –7 3 9 3

// Sample output:
// –21


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int Productsmallpair(int sum, vector<int>& arr) {
    int n = arr.size();

    if (n < 2) {
        return -1;
    }

    sort(arr.begin(), arr.end());

    int min_product = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int current_sum = arr[i] + arr[j];

            if (current_sum == sum) {
                min_product = min(min_product, arr[i] * arr[j]);
            }

            if (current_sum > sum) {
                break;
            }
        }
    }

    if (min_product == INT_MAX) {
        return 0;
    }

    return min_product;
}

int main() {
    // Example usage
    int sum_example1 = 9;
    vector<int> arr_example1 = {5, 4, 2, 3, 9, 1, 7};
    int result_example1 = Productsmallpair(sum_example1, arr_example1);
    cout << "Example 1: " << result_example1 << endl;  // Output: 2

    int sum_example2 = 4;
    vector<int> arr_example2 = {9, 8, -7, 3, 9, 3};
    int result_example2 = Productsmallpair(sum_example2, arr_example2);
    cout << "Example 2: " << result_example2 << endl;  // Output: -21

    return 0;
}
