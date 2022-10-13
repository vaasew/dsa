class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
     int n=nums.size();
        int swap1=0;
        int swap2=n-1;

        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                for(int j=n-1;j>i;j--)
                {
                    if(nums[j]>nums[i])
                    {
                        
                        swap1=i;
                        swap2=j;
                        break;
                    }
                }
                break;
            }
        }
                swap(nums[swap1],nums[swap2]);
                sort(nums.begin()+swap1+1,nums.end());
                
        }
        
            
};