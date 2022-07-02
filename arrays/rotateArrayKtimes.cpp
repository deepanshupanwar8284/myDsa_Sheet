/*
Given an array with N elements, the task is to rotate the array to the left by K steps, where K is non-negative.

Input Format:
The first line contains an integer N representing the size of the array.
The second line contains N space-separated integers representing the elements of the array.
The last line contains an integer K representing the number of times the array has to be rotated in the left direction. 

Output Format:
The only line of the output prints N space-separated integers representing the Rotated array elements.

Sample Input:
8
7 5 2 11 2 43 1 1
2
Sample Output:
2 11 2 43 1 1 7 5

*/

#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,k ;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int i =0;
    while(i<k){
        int first = arr[0];
        for(int i =1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1] = first;
        i++;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


