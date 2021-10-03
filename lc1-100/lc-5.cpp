// https://leetcode.com/problems/longest-palindromic-substring

/*
    ->Use DP + gap technique
      T.C=O(N^2)
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int dp[n][n];
        int maxL=0;
        int start=0,end=0;
        for(int gap=0;gap<n;gap++){
            for(int i=0,j=gap;j<n;i++,j++){
                if(gap==0){
                    dp[i][j]=1;   
                }else if(gap==1){
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                    }else{
                        dp[i][j]=0;
                    }
                }else{
                    if(s[i]==s[j] and dp[i+1][j-1]){
                        dp[i][j]=1;
                    }else{
                        dp[i][j]=0;
                    }
                }
                if(dp[i][j]==1){
                    if(maxL<gap){
                        maxL=gap;
                        start=i;
                        end=j;
                    }
                }
            }
        }
        string res="";
        for(int i=start;i<=end;i++){
            res+=s[i];
        }
        return res;
    }
};
