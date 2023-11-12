/* The binary number system only uses two digits 1 and 0.
Perform the function: Int OperationsBinarystring(char* str)

Assumptions

Return to –1 if str is null.
The str is odd.
 
Example:

Input:
Str: ICOCICIAOBI

Output:
1

Explanation
The input when expanded is “1 XOR 0 XOR 1 XOR 1 XOR 1 AND 0 OR 1”. The result becomes 1 and hence the output is 1.*/

#include <iostream>
#include <string>
using namespace std;

int OperationsBinaryString(const string& str) {
    if (str.empty()) {
        return -1; // Return -1 if str is empty
    }

    int result = str[0] - '0'; // Initialize result with the first bit

    for (size_t i = 1; i < str.length(); i += 2) {
        char operation = str[i];
        char operand = str[i + 1] - '0';

        switch (operation) {
            case 'A':
                result &= operand;
                break;
            case 'O':
                result |= operand;
                break;
            case 'X':
                result ^= operand;
                break;
            default:
                cout << "Invalid operation: " << operation << endl;
                return -1;
        }
    }

    return result;
}

int main() {
    // Example usage
    string binaryString = "1011101AOX";

    int result = OperationsBinaryString(binaryString);

    cout << "Output: " << result << endl; // Output: 1

    return 0;
}
