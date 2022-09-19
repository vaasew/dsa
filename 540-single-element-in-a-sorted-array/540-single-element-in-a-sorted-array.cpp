class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if((mid!=nums.size()-1 and mid%2==0 and nums[mid]==nums[mid+1]) or (mid !=0 and mid%2==1 and nums[mid]==nums[mid-1]))
            {
                start=mid+1;
                //we are at left side of single element
            }
            else 
            {
            end=mid-1;
            }
           
        }
        return nums[start];
        
    }
};