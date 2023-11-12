/*1. Execute the given function.
def differenceofSum(n.m)

The function takes two integrals m and n as arguments. You are required to obtain the total of all integers ranging between 1 to n (both inclusive) which are not divisible by m. You must also return the distinction between the sum of integers not divisible by m with the sum of integers divisible by m.

Assumption

m > 0 and n > 0
Sum lies within the integral range
 
Example

Input:
m = 6
n = 30

Output:
285

Integers divisible by 6 are 6, 12, 18, 24, and 30. Their sum is 90.
Integers that are not divisible by 6 are 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 27, 28, and 29. Their sum is 375.
The difference between them is 285 (375 – 90).
 
Sample input:
m = 3
n = 10

Sample output:
19
 */


 #include <iostream>
    
    using namespace std;
    
    int diffSum(int n,  int m)
    {
        int sum_not = 0;
        for(int i = 1 ; i<= n ; i++)
        {
            if( i%m != 0 )
            {
                sum_not += i;
            }
        }
        
        int sum = 0;
        
        for(int i = 1 ; i <= n ; i++)
        {
            if( i%m == 0)
            {
                sum += i;
            }
        }
        
        int diff = sum_not - sum;
        
        return diff;
    }
    
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    // int t;
    // cout<<"Enter the test cases"<<endl;
    
    // cin>>t;
    
    int n , m ;
    
    // cout<<"Enter the values of n and m"<<endl;
    // while(t--){
        // cin>>n>>m;
        n = 30, m = 6;
        // n = 10, m = 3;
    int res = diffSum(n, m);
    cout<<res<<endl;
        
    // }
        return 0;
}