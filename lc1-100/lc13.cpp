// https://leetcode.com/problems/roman-to-integer/

/*
    ->use a hashmap to store char and corresponding number, if next char's corresponding number is greater, then 
      subtract otherwise add
      
      T.C-O(n)
      S.C-O(1)
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
            
        int ans=0;
        
        for(int i=0;i<s.length()-1;i++){
           int num1=mp[s[i]];
           char ch=s[i+1];
           int num2=mp[ch];
            
            if(num1<num2){
                ans-=num1;
            }else{
                ans+=num1;
            }
        }
        char ch=s[s.length()-1];
       ans+=mp[ch];
        return ans;
    }
};
