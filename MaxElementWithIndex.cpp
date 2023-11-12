// Execute this function Void MaxInArray(int arr[], int length)
// This function helps in finding the maximum element in the array. Execute this function to print the maximum element in the array with its index.

// Assumptions

// The index in the array for all the elements starts at 0.
// The maximum element is in a different line in the output.
// There has to be only one maximum element.
// The function prints only what is required.
 
// Example

// Input:
// 23 45 82 27 66 12 78 13 71 86

// Output:
// 86
// 9

// Explanation
// The maximum element is 86 and the array is 9.
 
 #include <iostream>

using namespace std;

void MaxInArray(int arr[], int length) {
    if (length <= 0) {
        cout << "Array is empty." << endl;
        return;
    }

    int maxElement = arr[0];
    int maxIndex = 0;

    // Find the maximum element and its index
    for (int i = 1; i < length; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    // Print the maximum element and its index
    cout << maxElement << endl;
    cout << maxIndex << endl;
}

int main() {
    // Example usage
    int arr[] = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};
    int length = sizeof(arr) / sizeof(arr[0]);

    MaxInArray(arr, length);

    return 0;
}
