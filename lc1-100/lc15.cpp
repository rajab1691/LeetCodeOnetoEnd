// https://leetcode.com/problems/3sum/

/*
    ->sort the array and use two pointer technique
      T.C-O(n^2)
      S.C-O(1)
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++){
            //to handle duplicates
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1;
            int r=n-1;
         
            while(l<r){
                
                int sum=nums[l]+nums[r]+nums[i];
                if(sum>0){
                    r--;
                }else if(sum<0){
                    l++;
                }else{
                    res.push_back({nums[i],nums[l],nums[r]});
                    //to handle duplicates
                    while(l+1<r and nums[l]==nums[l+1])l++;
                    while(r-1>l and nums[r]==nums[r-1])r--;
                    l++;
                    r--;
                }
            }
        }
        return res;
    }
};
