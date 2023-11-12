// Perform the function Int calculate(int m, int n). This function needs two positive integers. Calculate the sum of numbers between these two numbers that are divisible by 3 and 5.
// Assumption
// m > n > = 0

// Example

// Input:
// m: 12
// n: 50

// Output:
// 90

// Explanation
// The numbers between 12 and 50 that are divisible by 3 and 5 are 15, 30, and 45. The sum of these numbers is 90.

// Sample input:
// m: 100
// n: 160

// Sample output:
// 405

#include <iostream>

using namespace std;

int calculate(int m, int n) {
    int sum = 0;

    // Ensure m is greater than or equal to n
    if (m < n) {
        swap(m, n);
    }

    for (int i = n; i <= m; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    // Example usage
    int m_example1 = 12, n_example1 = 50;
    int result_example1 = calculate(m_example1, n_example1);
    cout << "Example 1: " << result_example1 << endl;  // Output: 90

    int m_example2 = 100, n_example2 = 160;
    int result_example2 = calculate(m_example2, n_example2);
    cout << "Example 2: " << result_example2 << endl;  // Output: 405

    return 0;
}
