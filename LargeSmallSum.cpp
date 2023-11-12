/*def LargeSmallSum(arr)

The function takes an integral arr which is of the size or length of its arguments. Return the sum of the second smallest element at odd position ‘arr’ and the second largest element at the even position.

Assumption

Every array element is unique.
Array is 0 indexed.
Note:

If the array is empty, return 0.
If array length is 3 or <3, return 0.
 
Example

Input:
Arr: 3 2 1 7 5 4

Output:
7
 

Explanation

The second largest element at the even position is 3.
The second smallest element at the odd position is 4.
The output is 7 (3 + 4).*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int LargeSmallSum(vector<int>& arr) {
    int n = arr.size();
    
    if (n == 0 || n < 3) {
        return 0;
    }

    // Extract even and odd position elements
    vector<int> evenPos, oddPos;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenPos.push_back(arr[i]);
        } else {
            oddPos.push_back(arr[i]);
        }
    }

    // Sort the even and odd position vectors in descending and ascending order respectively
    sort(evenPos.rbegin(), evenPos.rend());
    sort(oddPos.begin(), oddPos.end());

    // Return the sum of the second largest even position element and the second smallest odd position element
    return evenPos[1] + oddPos[1];
}

int main() {
    vector<int> arr = {3, 2, 1, 7, 5, 4};

    int result = LargeSmallSum(arr);

    cout << "Output: " << result << endl; // Output: 7

    return 0;
}
