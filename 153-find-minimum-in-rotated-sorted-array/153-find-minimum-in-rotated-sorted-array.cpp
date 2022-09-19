class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int mid;
        if(r==0)
        {
            return nums[r];
        }
        while(l<r)
        {
            mid=(l+r)/2;
            if(nums[mid]>=nums[0] and nums[mid]>=nums[nums.size()-1])
            {
                l=mid+1;
            }
            else 
            {
                r=mid;
            }
        }
        return nums[l];
    }
};