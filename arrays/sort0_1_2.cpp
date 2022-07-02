/*
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words
, you will be visiting each element in the array/list just once.

sample input

2
6
0 1 2 2 1 0
7
0 1 2 1 2 1 2

sample output

0 0 1 1 2 2
0 1 1 1 2 2 2


*/
//---------------- O(n) approach ----------
#include <bits/stdc++.h> 
void swap(int &a,int &b){
    int temp  = a;
    a = b;
    b = temp;
}
void sort012(int *arr, int n)
{
    int lo = 0;
    int mid  = 0;
    int hi = n-1;
    while(mid<=hi){
        if(arr[mid]==0){
            swap(arr[lo],arr[mid]);
            lo++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }
}
