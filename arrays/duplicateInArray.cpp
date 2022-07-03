/*
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once.
There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.

*/
// ---------------------------- approach 1 ------------------------------
#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    int sum=0;
    for(int i =0;i<arr.size();i++){
        sum+= arr[i];
    }
    return sum-(n*(n-1))/2;
           
}
// --------------------------approach 2 ----------------------------
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    unordered_map<int,int> map;
    for(int i =0;i<arr.size();i++){
        map[arr[i]]++;
    }
    for(auto it = map.begin();it!=map.end();it++){
        if(it->second >1){
            return it->first;
        }
    }
           
}
