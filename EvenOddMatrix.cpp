// Create a matrix and mention the elements in it. Now, divide the main matrix into two halves in such a way that the elements in index 0 are even, the elements in index 1 are odd, and so on.

// Then arrange the values in ascending order for even and odd. After this, calculate the sum of the second largest numbers from both even and odd matrices.

// Example
// The size of the array is 5.
// Element at 0 index: 3
// Element at 1 index: 4
// Element at 2 index: 1
// Element at 3 index: 7
// Element at 4 index: 9

// Even array: 1,3,9
// Odd array: 4,7

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Create a matrix (2x4 for illustration)
    vector<vector<int>> matrix = {
        {3, 8, 2, 7},
        {1, 6, 5, 4}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    // Separate the matrix into even and odd halves
    vector<int> evenMatrix, oddMatrix;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i * cols + j) % 2 == 0) {
                evenMatrix.push_back(matrix[i][j]);
            } else {
                oddMatrix.push_back(matrix[i][j]);
            }
        }
    }

    // Sort even and odd matrices in ascending order
    sort(evenMatrix.begin(), evenMatrix.end());
    sort(oddMatrix.begin(), oddMatrix.end());

    // Calculate the sum of the second-largest numbers
    int sumSecondLargest = 0;

    if (evenMatrix.size() >= 2) {
        sumSecondLargest += evenMatrix[evenMatrix.size() - 2];
    }

    if (oddMatrix.size() >= 2) {
        sumSecondLargest += oddMatrix[oddMatrix.size() - 2];
    }

    // Output the results
    cout << "Even Matrix: ";
    for (int num : evenMatrix) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Odd Matrix: ";
    for (int num : oddMatrix) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Sum of second-largest numbers: " << sumSecondLargest << endl;

    return 0;
}
