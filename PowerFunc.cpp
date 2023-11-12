// Adam decides to do some charity work. From day 1 till day n, he will give i^2 coins to charity. On day ‘i’ (1 < = i < = n), find the number of coins he gives to charity.
// Example 1
// Input:
// 2
// Output:
// 5
// Explanation:
// There are 2 days.
// Example 2

// Input:
// 3

// Output:
// 14

// Total Coins=1^2 + 2^2 + 3^2 + .... = (n(n+1)(2*n+1))/6 

#include <iostream>

using namespace std;

int calculateCoins(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    // Example usage
    int days;
    cout << "Enter the number of days: ";
    cin >> days;

    int totalCoins = calculateCoins(days);

    cout << "Total coins given to charity: " << totalCoins << endl;

    return 0;
}

