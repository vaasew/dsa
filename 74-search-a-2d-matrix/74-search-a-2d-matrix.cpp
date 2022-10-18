class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        int mid;
        int s=0;
        int e=m*n -1;
        
        while(s<=e)
        {
            mid=(s+e)>>1;
            if(matrix[mid/m][mid%m]==target)
            {
                return 1;
            }
            else if(matrix[mid/m][mid%m]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        
        return 0;
        
    }
};