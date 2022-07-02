/*
You are given an array “ARR” of size N. Your task is to find out the sum of maximum and minimum elements in the array.
*/

#include <bits/stdc++.h>
pair<int,int> max_minofArr(int arr[],int n){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    pair<int,int> p(max,min);
    return p;
}
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    pair<int,int> p = max_minofArr(arr,n);
    int sum = p.first + p.second;
    return sum;
}
