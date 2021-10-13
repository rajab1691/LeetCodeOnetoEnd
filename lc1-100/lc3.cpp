// https://leetcode.com/problems/longest-substring-without-repeating-characters

/*  
      T.C= O(n) and S.C= O(n)
    ->Acquire till it becomes invalid and Release till it becomes valid
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=-1,j=-1;
        int n=s.length();
        int maxi=0;
        
        unordered_map<char,int>mp;
        while(true){
            bool f1=false,f2=false;
            
            //acquire
            while(i<n-1){
                f1=true;
                i++;
                mp[s[i]]++;
                
                if(mp[s[i]]==2){
                    break;
                }else{
                    maxi=max(maxi,i-j);
                }
            }
            
            //release
            while(j<i){
                f2=true;
                j++;
                mp[s[j]]--;
                
                if(mp[s[j]]==1){
                    break;
                }
            }
            if(!f1 and !f2)break;
        }
        return maxi;   
    }
};
