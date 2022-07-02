// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// O(n2) solution :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(nums[i]+nums[j]== target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
        
    }
};

// O(n) using hashmap

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> map;
        vector<int> v1;
        for(int i =0;i<n;i++){
            map[nums[i]]=i;
        }
        for(int i =0;i<n;i++){
            int diff = target - nums[i];
             
            if(map.count(diff)>0 && map[diff]!=i){
                v1.push_back(i);
                v1.push_back(map[diff]);
                break;
            }
        }
        return v1;
        
    }
};

// O(1) solution using vector and pair class
/* in this first we create pair of nums[i] and i and push this pair into new created vector after it 
   sort the vector and then use two pointer approch 
   two pointer approch --> keep one pointer at 0th index and second pointer at last indx 
                           if(target == 0th and last ) 
                           add pair second value in another new created vector and break their
                           if( target < sum)
                           ed--;
                           else
                           st++;
                         */
#include <bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> v;
        vector<int> v1;
        for(int i =0;i<n;i++){
            pair<int,int> p(nums[i],i);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        int st = 0;
        int ed = v.size()-1;
        while(st<ed){
            if(v[st].first+v[ed].first==target){
                v1.push_back(v[st].second);
                v1.push_back(v[ed].second);
                break;
            }
            else if(v[st].first+v[ed].first<target){
                st++;
            }
            else{
                ed--;
            }
        }
        return v1;
    }
};
