// https://leetcode.com/problems/palindrome-number

/*
    T.C= O(N)
    S.C= const
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        int ans=0;
        int num=x;
        while(x>0){
            int rem=x%10;
            if(INT_MAX/10>=ans){
                ans=ans*10;
            }else{
                return false;
            }
            ans+=rem;
            x/=10;
        }
        if(ans==num)return true;
        return false;
    }
};
