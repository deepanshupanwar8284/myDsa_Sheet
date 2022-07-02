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
