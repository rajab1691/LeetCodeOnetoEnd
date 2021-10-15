// https://leetcode.com/problems/generate-parentheses/
/*
    ->Backtracking (bcuz generate all)
    visit Backtracking section for more details
*/

class Solution {
public:
    vector<string>res;
    vector<string> generateParenthesis(int n) {
        
        string ans="";
        helper(n,0,0,ans);
        return res;
    }
    void helper(int n,int open,int close,string ans){
        
        if(ans.length()==2*n){
            res.push_back(ans);
            return;
        }
        if(open<n){
            ans.push_back('(');
            helper(n,open+1,close,ans);
            ans.pop_back();
        }
        if(close<open){
            ans.push_back(')');
            helper(n,open,close+1,ans);
            ans.pop_back();
        }
    }
};
