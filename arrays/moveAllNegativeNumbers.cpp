/*
You are given an array 'ARR' consisting of 'N' integers. You need to rearrange the array elements such that all negative numbers appear
before all positive numbers.
Follow Up:
Can you solve this in O(1) auxiliary space?
Note:
The order of elements in the resulting array is not important.
Example:
->Let the array be [1, 2, -3, 4, -4, -5]. On rearranging the array such that all negative numbers appear before all positive numbers 
we get the resulting array [-3, -5, -4, 2, 4, 1].

*/

// -------------------O(n) approach --------------------

#include <bits/stdc++.h>

vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    vector<int> v;
    for(int i =0;i<nums.size();i++){
        if(nums[i]<0){
            v.push_back(nums[i]);
        }
    }
    for(int i =0;i<nums.size();i++){
        if(nums[i]>=0){
            v.push_back(nums[i]);
        }
    }
    return v;
}
// 
#include <bits/stdc++.h>
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    sort(nums.begin(),nums.end());
    return v;
}
