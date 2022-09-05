class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> degree(edges.size()+2,0);
for(int i=0;i<edges.size();i++)
{
    degree[edges[i][1]]++;
    degree[edges[i][0]]++;
}
for(int i=1;i<=edges.size()+1;i++)
{
    if(degree[i]==edges.size())
    {
        return i;
    }
}
return -1;
        
    }
};