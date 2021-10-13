// https://leetcode.com/problems/container-with-most-water/

/*
     ->use two pointer technique
     T.C-O(n)
     S.C-O(1)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
            
        int i=0;
        int j=height.size()-1;
        int area=0;
        
        while(i<j){
            if(height[i]<height[j]){
                area=max(area,min(height[i],height[j])*(j-i));
                i++;
            }else{
                area=max(area,min(height[i],height[j])*(j-i));
                j--;   
            }
        }
        return area;
    }
};
