// Perform the function: Int operationchoices(int c, int n, int a, int b). This function considers three positive inputs of a, b and c.
// Execute the function to get:
// (a + b), if c = 1
// (a / b), if c = 4
// (a – b), if c = 2
// (a x b), if c = 3

// Example:

// Input:
// a: 12
// b: 16
// c: 1

// Output:
// 28

// Explanation
// C = 1, hence the function is (a + b). Hence, the output is 28.

// Sample input:
// a: 16
// b: 20
// c: 2

// Sample output:
// –4

#include <iostream>

using namespace std;

int operationChoices(int c, int a, int b) {
    int result = 0;

    switch (c) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b != 0) {
                result = a / b;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operation choice." << endl;
    }

    return result;
}

int main() {
    // Example usage
    int a_example1 = 12, b_example1 = 16, c_example1 = 1;
    int result_example1 = operationChoices(c_example1, a_example1, b_example1);
    cout << "Example 1: " << result_example1 << endl;  // Output: 28

    int a_example2 = 16, b_example2 = 20, c_example2 = 2;
    int result_example2 = operationChoices(c_example2, a_example2, b_example2);
    cout << "Example 2: " << result_example2 << endl;  // Output: -4

    return 0;
}
