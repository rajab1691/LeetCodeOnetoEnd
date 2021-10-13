// https://leetcode.com/problems/4sum/

/*
    T.C-O(n^k-1)
    any kSum problem just apply k-1 loops outside and solve twoSum problem inside
*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        int n=nums.size();
        if(n<4)return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-3;i++){
            int target3=target-nums[i];
            for(int j=i+1;j<n-2;j++){
                int target2=target3-nums[j];
                int l=j+1;
                int r=n-1;
                
                while(l<r){
                    int twoSum=nums[l]+nums[r];
                    if(twoSum>target2){
                        r--;
                    }else if(twoSum<target2){
                        l++;
                    }else{
                        res.push_back({nums[i],nums[j],nums[l],nums[r]});
                        while(l+1<r and nums[l]==nums[l+1])l++;
                        while(r-1>l and nums[r]==nums[r-1])r--;
                        l++;
                        r--;
                    }
                }
                while(j+1<n and nums[j]==nums[j+1])j++;
            }
            while(i+1<n and nums[i]==nums[i+1])i++;
        }
        return res;
    }
};
