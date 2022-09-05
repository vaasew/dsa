class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>> inOut(n+1,{0,0});
for(int i=0;i<trust.size();i++)
{
    inOut[trust[i][1]].first++;
    inOut[trust[i][0]].second++;
}
for(int i=1;i<=n;i++)
{
    if(inOut[i].first==n-1 and inOut[i].second==0)
    {
        return i;
    }
}
return -1;
        
    }
};