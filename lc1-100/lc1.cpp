// https://leetcode.com/problems/two-sum/

/*
    -> If the array is Sorted then we can use two pointer approach
    -> Optimal approach- Use hashmap
     T.C and S.C =O(n)
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                res.push_back(i);
                res.push_back(mp[temp]);
            }else{
                mp[nums[i]]=i;
            }
        }
        return res;
    }
};
