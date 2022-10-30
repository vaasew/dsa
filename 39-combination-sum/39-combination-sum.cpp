class Solution {
public:
    vector<vector<int>>ans;
    void sol(int idx,int n,vector<int>& candidates, int target,vector<int>vec)
    {
        if(idx>=n or target<0 )
        {
            return;
        }
        if(target==0)
        {
            ans.push_back(vec);
            return;
        }
    
        sol(idx+1,n,candidates,target,vec);
        vec.push_back(candidates[idx]);
        sol(idx,n,candidates,target-candidates[idx],vec);
       
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        sol(0,n,candidates,target,{});
        return ans;
    }
};