// Write a function to find roots of a quadratic equation ax^2 + bx + c = 0.
// Note: The formula to find the roots of a quadratic equation is given below:

// Example
// Input 1: 1
// Input 2: –2
// Input 3: 3
// Output:
// {3.0,–1.0}

// Explanation:
// On substituting the values of a, b, and c in the formula, the roots will be as follows:
// +X = 3.0
// -X = –1.0

#include <iostream>
#include <cmath>
#include <tuple>
#include <vector>

using namespace std;

tuple<double, double> findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        cout << "No real roots." << endl;
        return {0.0, 0.0};
    }

    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);

    return {root1, root2};
}

int main() {
    // Example usage
    double a, b, c;
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;

    tuple<double, double> roots = findRoots(a, b, c);

    cout << "Roots: {" << get<0>(roots) << ", " << get<1>(roots) << "}" << endl;

    return 0;
}
