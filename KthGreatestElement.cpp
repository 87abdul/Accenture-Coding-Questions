// Create web access management to the kth largest number. It will accept an integer k and an array arr as its conditions and has to return the greatest element based on the value of k. That is, if k = 0, return the greatest element. If k = 1, return the second greatest element, and so on.
// Example

// Suppose the array contains values like {74, 85, 102, 99, 101, 56, 84} and the integer k is 2. The method will return 99, the third greatest element, as there are only two (according to the value of k) values greater than 99 (101 and 102).

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kthLargestElement(vector<int>& arr, int k) {
    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    // Check if k is a valid index
    if (k >= 0 && k < arr.size()) {
        return arr[k];
    } else {
        cout << "Invalid value of k." << endl;
        return -1;  // Return -1 for invalid k
    }
}

int main() {
    // Example usage
    vector<int> arr = {74, 85, 102, 99, 101, 56, 84};
    int k = 2;

    int result = kthLargestElement(arr, k);

    if (result != -1) {
        cout << "The " << k << "th largest element is: " << result << endl;
    }

    return 0;
}
