class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
     vector<int> par(1001,0);
int node_a,node_b,par_a,par_b;
for(int i=1;i<=1000;i++)
{
    par[i]=i;
}
for(int i=0;i<edges.size();i++)
{
    node_a=edges[i][0];
    node_b=edges[i][1];
    par_a=node_a;
    par_b=node_b;
    while(par_a!=par[par_a])
    {
        par_a=par[par_a];
    }
     while(par_b!=par[par_b])
    {
        par_b=par[par_b];
    }
    if(par_a!=par_b)
    {par[par_a]=par_b;}
    else
    {return edges[i];}
}
return {0};   
    }
};