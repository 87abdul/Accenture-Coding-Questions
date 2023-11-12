// Write a program to count the number of swaps required to sort a given list of integers in ascending order using the selection sort algorithm.
// Input:
// 2
// 3
// 4 2 5
// 5
// 10 11 8 7 1

// Output:
// 1
// 3

// Online C++ compiler to run C++ program online
#include <iostream>
    using namespace std ;
    
    int selectionSort(int arr[], int n)
    {
        // Your code here  
        int cnt = 0;

       for(int i = 0 ; i < n-1; i++){
           
           int mini = i;
           
           for(int j = i +1 ; j < n ; j++){
               
               if(arr[j] < arr[mini]){
                   mini = j;
               }
           }
           
           if( mini != i){
               cnt++;
               swap(arr[mini], arr[i]);
           }
       }
               return cnt;
    }
    
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    
    // int arr[] = {123, 21, 34 ,45, 25, 675, 23, 44, 55, 900};
    int arr[] = {10, 11, 8, 7, 1};
    // int n = 10;
    int n = 5;
    
    int res = selectionSort(arr, n);
    
    cout<<res<<endl;


    return 0;
}