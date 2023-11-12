// Find the sum of the divisors for the N integer number.
// Example 1
// Input:
// 6
// Output:
// 12

// Explanation
// Divisors of 6 are 1, 2, 3, and 6. The sum of these numbers is 12.

// Example 2
// Input:
// 36
// Output:
// 91
 

 #include <iostream>

using namespace std;

int sumOfDivisors(int n) {
    int sum = 1; // Initialize sum with 1 because every number is divisible by 1

    // Iterate from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // If i is a divisor, add it to the sum
            sum += i;

            // If i is not the square root of n, add the corresponding divisor
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum;
}

int main() {
    // Example usage
    int N;
    cout << "Enter an integer N: ";
    cin >> N;

    int result = sumOfDivisors(N);

    cout << "Sum of divisors for " << N << ": " << result << endl;

    return 0;
}
