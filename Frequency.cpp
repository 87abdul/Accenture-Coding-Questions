// In a given list of integers, find the number that has the highest frequency. If there are one or more such numbers, give the smaller one as output.
// Input:
// 3
// 7
// 2 4 5 2 3 2 4
// 6
// 1 2 1 1 2 1
// 10
// 1 1 1 1 1 1 1 1 1 1

// Output:
// 2
// 1
// 1

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findMaxFrequency(const vector<int>& nums) {
    unordered_map<int, int> frequencyMap;

    // Count the frequency of each number
    for (int num : nums) {
        frequencyMap[num]++;
    }

    int maxNum = nums[0];
    int maxFreq = frequencyMap[nums[0]];

    // Find the number with the highest frequency (and the smaller one in case of a tie)
    for (int num : nums) {
        if (frequencyMap[num] > maxFreq || (frequencyMap[num] == maxFreq && num < maxNum)) {
            maxNum = num;
            maxFreq = frequencyMap[num];
        }
    }

    return maxNum;
}

int main() {
    // Example usage
    vector<int> nums1 = {2, 4, 5, 2, 3, 2, 4};
    cout << findMaxFrequency(nums1) << endl;  // Output: 2

    vector<int> nums2 = {1, 2, 1, 1, 2, 1};
    cout << findMaxFrequency(nums2) << endl;  // Output: 1

    vector<int> nums3 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    cout << findMaxFrequency(nums3) << endl;  // Output: 1

    return 0;
}
