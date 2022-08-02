// using O(n) space comlexity 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int i =0;
        for(auto it =m.begin();it!=m.end();it++){
            nums[i]=it->first;
            i++;
        }
        return m.size();
    }
};


// using constant space 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int cnt = 1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                cnt++;
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return cnt;
    }
};
