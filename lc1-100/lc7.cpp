// https://leetcode.com/problems/reverse-integer
/*
     T.C= O(N)
     S.C= const
*/

class Solution {
public:
    int reverse(int x) {
        
        int num=abs(x);
        int ans=0;
        while(num>0){
            int rem=num%10;
            if(INT_MAX/10>=ans){
                ans=ans*10;
            }else{
                return 0;
            }
            ans=ans+rem;
            num/=10;
        }
        if(x<0){
            ans=ans*(-1);
        }
        if(ans>INT_MAX or ans<INT_MIN)return 0;
        return ans;
    }
};
