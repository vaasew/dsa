class Solution {
public:
    
    int sol(vector<vector<int>>& obstacleGrid,int row,int col,vector<vector<int>>& dp)
        
    {
        
        if(row==0 and col==0)
        {
            return 1;
        }
          
           if(row<0 or col<0){
               return 0;
           }
        if(obstacleGrid[row][col]==1)
        {
            return 0;
        }
        
         if(dp[row][col]!=-1)
        {return dp[row][col];}
        
        int up=sol(obstacleGrid,row-1,col,dp);
        int left=sol(obstacleGrid,row,col-1,dp);
        return dp[row][col]=up+left;
    }
        
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     int n=obstacleGrid.size();
    int m=obstacleGrid[0].size();
        if(n==1 and m==1 and obstacleGrid[n-1][m-1]!=1)
        {
            return 1;
        }
        if(obstacleGrid[n-1][m-1]==1)return 0;
        if(obstacleGrid[0][0]==1)return 0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
            sol(obstacleGrid,n-1,m-1,dp);
        if(dp[n-1][m-1]!=-1)
            return dp[n-1][m-1];
        else
            return 0;
    }
};