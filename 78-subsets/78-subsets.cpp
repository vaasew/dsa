class Solution {
public:
    vector<vector<int>> ans;
    
    int sol(int idx,int n,vector<int>arr,vector<int>&nums)
    {
        if(idx==n)
        {
            ans.push_back(arr);
            return 0;
        }
        
        sol(idx+1,n,arr,nums);
        arr.push_back(nums[idx]);
        sol(idx+1,n,arr,nums);
        return 0;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        sol(0,nums.size(),arr,nums);
        return ans;
    }
};