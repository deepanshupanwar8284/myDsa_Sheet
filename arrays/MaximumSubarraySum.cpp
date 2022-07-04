/*

You are given an array (ARR) of length N, consisting of integers.
You have to find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.
A subarray is a contiguous segment of an array. 
In other words, a subarray can be formed by removing 0 or more integers from the beginning, and 0 or more integers from the end of an array.


*/
---------------------------- O(n) approach-------------------------------------

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long cs = 0;
    long long ms = INT_MIN;
    for(int i =0 ;i<n;i++){
        cs += arr[i];
        if(cs<0){
            cs=0;
        }
        if(cs>ms){
            ms = cs;
        }
    }
    return ms;
}

------------------------------second approach ----------------------------------
  
  int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
