// https://leetcode.com/problems/two-sum/

/*
    -> If the array is Sorted then we can use two pointer approach
    -> Optimal approach- Use hashmap
     T.C and S.C =O(n)
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                res.push_back(i);
                res.push_back(mp[temp]);
            }else{
                mp[nums[i]]=i;
            }
        }
        return res;
    }
};

// Pair with largest sum which is less than K in the array
// https://www.geeksforgeeks.org/pair-with-largest-sum-which-is-less-than-k-in-the-array/

/*
    T.C-O(nlogn)
    S.c-O(1)
*/
void solve() {

    int n,k;cin>>n>>k;
    arrip(a,n);

    sort(a,a+n);

    int l=0,r=n-1;
    int maxi=INT_MIN;
    vi res;
    int m1,m2;
    while(l<r){

        int sum=a[l]+a[r];

        if(sum<k){
            if(sum>maxi){
                maxi=sum;
                m1=a[l];
                m2=a[r];
            }
            l++;
        }else{
            r--;
        }
    }
    cout<<m1<<" "<<m2<<endl;
}
