/*When the sum of the digits exceeds a total of 9, a carry digit is added to the right-left of the digit. Execute the function: Int Numberofcarry(Integer num 1, Integer num 2)

Assumption

num1, num2 > = 0

Example

Input:
num1: 451
num2: 349

Output:
2

Explanation

When we add these two numbers from the right to the left, we get two carries. The value of each of the carries is 1. Hence, the output is the total of these two carries, i.e., 2.

Sample input:
num1: 23
num2: 563

Sample output:
0*/

#include <iostream>

using namespace std;

int NumberOfCarry(int num1, int num2) {
    int carry = 0;
    int carryCount = 0;

    while (num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;

        if (carry > 0) {
            carryCount++;
        }

        num1 /= 10;
        num2 /= 10;
    }

    return carryCount;
}

int main() {
    // Example usage
    int num1_example1 = 451;
    int num2_example1 = 349;
    cout << "Example 1: " << NumberOfCarry(num1_example1, num2_example1) << endl;  // Output: 2

    int num1_example2 = 23;
    int num2_example2 = 563;
    cout << "Example 2: " << NumberOfCarry(num1_example2, num2_example2) << endl;  // Output: 0

    return 0;
}
