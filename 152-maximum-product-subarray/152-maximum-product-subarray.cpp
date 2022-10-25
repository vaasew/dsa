class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int pro=1;
        int maxi=0;
        if(nums.size()==1)
        {
            return nums[0];
        }
        
        for(auto el:nums)
        {
             if(el==0)
            {
                pro=1;
                 continue;
            }
            
            pro=pro*el;
            maxi=max(maxi,pro);
           
        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
             if(nums[i]==0)
            {
                pro=1;
                 continue;
            }
        
            pro=pro*nums[i];
            maxi=max(maxi,pro);
        }
        
        return maxi;
        
    }
};