/*We have mentioned a list of integers that have no duplicates. Find how many swaps it will take to sort the list in ascending order using Bubble sort.
Input:
3
5
2 1 4 6 3
10
123 21 34 45 25 675 23 44 55 900
1
23

Output:
3
16
0*/

// Online C++ compiler to run C++ program online
#include <iostream>
    using namespace std ;
    
    int bubbleSort(int arr[], int n)
    {
        // Your code here  
        int cnt = 0;
        
        for(int i = 0 ; i < n -1 ; i++){
            for(int j = 0 ;j < n - i - 1 ; j++){
                
                if(arr[j] > arr[j+1]){
                    cnt++;
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        
        return cnt;
    }
    
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    
    // int arr[] = {123, 21, 34 ,45, 25, 675, 23, 44, 55, 900};
    int arr[] = {2, 1, 4, 6, 3};
    // int n = 10;
    int n = 5;
    
    int res = bubbleSort(arr, n);
    
    cout<<res<<endl;


    return 0;
}