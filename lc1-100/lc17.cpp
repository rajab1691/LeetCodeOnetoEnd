// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

/*
      ->all possible therefore apply backtracking
      T.C-O(4^n)
*/

class Solution {
public:
    
    vector<string>mapping={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>res;
    vector<string> letterCombinations(string digits) {
        
        if(digits=="")
            return {};
        
        string ans="";
        
        helper(ans,digits,0);
        
        return res;
    }
    void helper(string ans,string digits,int idx){
        
        if(idx==digits.length()){
            res.push_back(ans);
            return;
        }
        
        for(auto &x:mapping[digits[idx]-'2']){
            ans.push_back(x);
            helper(ans,digits,idx+1);
            ans.pop_back();
        }
    }
};
