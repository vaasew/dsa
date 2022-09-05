class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<pair<int,int>> inOut(edges.size()+2,{0,0});
for(int i=0;i<edges.size();i++)
{
    inOut[edges[i][1]].first++;
    inOut[edges[i][0]].second++;
}
for(int i=1;i<=edges.size()+1;i++)
{
    if(inOut[i].first + inOut[i].second==edges.size())
    {
        return i;
    }
}
return -1;
        
    }
};