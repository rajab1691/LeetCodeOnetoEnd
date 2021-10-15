// https://leetcode.com/problems/valid-parentheses/

/*
    T.C-O(n)
    S.C-O(n)
    ->use a stack
    ->if stack is empty then always push element in stack
    ->if comnination found then pop
    if stack is not empty then false else true
*/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            
            if(st.top()=='(' and s[i]==')'){
                st.pop();
            }else if(st.top()=='[' and s[i]==']'){
                st.pop();
            }else if(st.top()=='{' and s[i]=='}'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return !st.size();
    }
};
