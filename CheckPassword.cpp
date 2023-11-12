/*Perform the function Checkpassword (char str[], int n)
Execute the function which happens to be 1 if the str is a valid password or it remains 0.

Conditions for a valid password: 

The password should have at least 4 characters.
It should have at least 1 digit.
It should have one capital letter.
It should not have any spaces or obliques (/).
The first character should not be a number.
 
Assumption
The input is not empty.

Example

Input:
aA1_67

Output:
1*/

#include <iostream>
#include <cctype>

using namespace std;

int CheckPassword(char str[], int n) {
    // Check if the password has at least 4 characters
    if (n < 4) {
        return 0;
    }

    // Check if the first character is not a number
    if (isdigit(str[0])) {
        return 0;
    }

    // Check if there is at least 1 digit
    bool hasDigit = false;

    // Check if there is one capital letter
    bool hasCapital = false;

    // Check for spaces or obliques (/)
    for (int i = 0; i < n; ++i) {
        if (isspace(str[i]) || str[i] == '/') {
            return 0;
        }

        if (isdigit(str[i])) {
            hasDigit = true;
        }

        if (isupper(str[i])) {
            hasCapital = true;
        }
    }

    // Return 1 if all conditions are met, else return 0
    return (hasDigit && hasCapital) ? 1 : 0;
}

int main() {
    // Example usage
    char password1[] = "aA1_67";
    int result1 = CheckPassword(password1, sizeof(password1) - 1);
    cout << "Example 1: " << result1 << endl;  // Output: 1

    char password2[] = "Abc123";
    int result2 = CheckPassword(password2, sizeof(password2) - 1);
    cout << "Example 2: " << result2 << endl;  // Output: 0

    return 0;
}
