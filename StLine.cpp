// Find out if the given set of points are on a straight line or not. If the points are on a straight line, then return the equation. If not, then return 0.
// Example
// Input:
// 3
// 1 1 2 2 3 3
// Output:
// 1x – 1y = 0

// Explanation
// The three points here are [1,1], [2,2], and [3,3]. These lie on a line, so the function returned the equation.
 

 /*To determine if a set of points are on a straight line and find the equation of the line, you can use the slope-intercept form (y = mx + b) of a line. If all points lie on the same line, they should have the same slope.*/

 #include <iostream>
#include <vector>
#include<stdlib.h>
#include<string>

using namespace std;

string findEquation(const vector<pair<int, int>>& points) {
    if (points.size() < 2) {
        return "Insufficient points to form a line.";
    }

    int x1 = points[0].first;
    int y1 = points[0].second;
    int x2 = points[1].first;
    int y2 = points[1].second;

    // Calculate the slope (m) and intercept (b)
    int m = (y2 - y1) / (x2 - x1);
    int b = y1 - m * x1;

    // Check if all points lie on the same line
    for (size_t i = 2; i < points.size(); i++) {
        int x = points[i].first;
        int y = points[i].second;

        if (y != m * x + b) {
            return "0"; // Not on the same line
        }
    }

    // Return the equation of the line in the form of ax + by = c
    return to_string(m) + "x - " + to_string(1) + "y = " + to_string(b);
}

int main() {
    // Example usage
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    vector<pair<int, int>> points;
    cout << "Enter the points (x y): ";
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }

    string result = findEquation(points);
    cout << "Equation: " << result << endl;

    return 0;
}
