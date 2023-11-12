// Write a function mergeArrays which merges two sorted arrays to create one single sorted array. Complete the function int* mergeArrays(int a[], int b[], int asize, int bsize) below which takes the pointers to the first element of the two sorted arrays and the size of the arrays, and returns the base address of the final sorted array.

// Input:
// 4 // Size of 1st array
// 1 2 3 6 // Elements of 1st array
// 3 // Size of 2nd array
// 4 5 7 // Elements of 2nd array

// Output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7

#include <iostream>

using namespace std;

int* mergeArrays(int a[], int b[], int asize, int bsize) {
    int* mergedArray = new int[asize + bsize];

    int i = 0, j = 0, k = 0;

    // Merge the two arrays in sorted order
    while (i < asize && j < bsize) {
        if (a[i] < b[j]) {
            mergedArray[k++] = a[i++];
        } else {
            mergedArray[k++] = b[j++];
        }
    }

    // Copy the remaining elements from the first array
    while (i < asize) {
        mergedArray[k++] = a[i++];
    }

    // Copy the remaining elements from the second array
    while (j < bsize) {
        mergedArray[k++] = b[j++];
    }

    return mergedArray;
}

int main() {
    // Example usage
    int a[] = {1, 2, 3, 6};
    int b[] = {4, 5, 7};
    int asize = sizeof(a) / sizeof(a[0]);
    int bsize = sizeof(b) / sizeof(b[0]);

    int* mergedArray = mergeArrays(a, b, asize, bsize);

    // Print the merged array
    for (int i = 0; i < asize + bsize; ++i) {
        cout << mergedArray[i] << endl;
    }

    // Free the dynamically allocated memory
    delete[] mergedArray;

    return 0;
}
