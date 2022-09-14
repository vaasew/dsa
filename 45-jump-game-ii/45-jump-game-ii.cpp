class Solution {
public:
    int jump(vector<int>& nums) {
       int maxRe=nums[0];
        int n=nums.size();
        int currRe=nums[0];
        int jumps=0;
        for(int i=0;i<n;i++)
        {
            if(currRe>=n-1)
            {break;}
            maxRe=max(i+nums[i],maxRe);
            if(i==currRe)
            {
                currRe=maxRe;
                jumps++;
            }
            
        }
        if(n==1)
        {
            return 0;
        }
        return jumps+1;
    }
    };