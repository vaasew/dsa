class Solution {
public:
    void bfs(vector<vector<char>> &grid,vector<vector<int>> &vis,int row,int col)
{
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    int m=grid[0].size();
    int n=grid.size();
    
    while(!q.empty())
    {
        row=q.front().first;
        col=q.front().second;
        q.pop();
    for(int i=-1;i<=1;i++)
    {
        for(int j=-1;j<=1;j++)
        {
            if(abs(i)!=abs(j))
            {
            int nrow=row+i;
            int ncol=col+j;
            if(nrow>-1 and nrow<n and ncol>-1 and ncol<m and grid[nrow][ncol]=='1' and !vis[nrow][ncol])
            {
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
            }
            }
        }
    }
    }
}
 int numIslands(vector<vector<char>>& grid)
 {
//CODE HERE 
int m=grid[0].size();
int n=grid.size();
int count=0;
vector<vector<int>> vis(n,vector<int>(m,0));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(!vis[i][j] and grid[i][j]=='1')
        {
            count++;
            bfs(grid,vis,i,j);
        }
    }
}
return count;
}
    
};