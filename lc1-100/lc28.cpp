// https://leetcode.com/problems/implement-strstr/

/*
    ->find all substring of haystack of length=length(needle),return 1st occurence
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n=haystack.size();
        int m=needle.size();
        
        if(n<m)return -1;
        if(needle=="")return 0;
        
        int idx=-1;
        for(int i=0;i<n-m+1;i++){
            if(haystack.substr(i,m)==needle){
                idx=i;
                break;
            }
        }
        return idx;
    }
};
