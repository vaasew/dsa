class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        if(n==0)
        {return{-1,-1};}
        int r=n-1;
        int mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
            {
                break;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            
        }
        int first=-1,last=-1;
        l=0;
        r=mid;
        int m;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]==target)
            {
                first=m;
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        l=mid;
        r=n-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]==target)
            {
                last=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        if(first!=-1 and last==-1)
        {
            return {first,first};
        }
        return {first,last};
        
    }
};