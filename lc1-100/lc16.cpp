// https://leetcode.com/problems/3sum-closest/

/*
    ->Same technique used in 3sum problem
      T.C-O(n^2)
      S.C-O(1)
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int closest=INT_MAX;
        int ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++){
            
            int l=i+1;
            int r=n-1;
            
            while(l<r){
                
                int sum=nums[l]+nums[r]+nums[i];
                
                if(abs(sum-target)<closest){
                    closest=abs(sum-target);
                    ans=sum;
                }
                
                if(sum>target){
                    r--;        
                }else if(sum<target){
                    l++;   
                }else{
                    ans=sum;
                    i=n-2;
                    break;
                }
            }
        }
        return ans;
    }
};
