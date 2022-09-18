class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int n=nums.size();
      
        mp[0]=1;
        int sum=0,c=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        
            if(mp.count(sum-k)>0)
            {
                c+=mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    
    }
};