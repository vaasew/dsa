class Solution {
public:
    int findCircleNum(vector<vector<int>>& adj) {
        set<int> vis;
// vector<int> bfs;
int n=adj.size();
deque<int> q;
int count=0;
for(int i=0;i<n;i++)
{
    if(vis.count(i))
    {
        continue;
    }
    count++;
    vis.insert(i);
    q.push_back(i);
    while(!q.empty())
    {
        int node=q.front();
        q.pop_front();
        // bfs.push_back(node);
        for(int adjel=0;adjel<n;adjel++)
        {
            if(adj[node][adjel] and !vis.count(adjel))
            {
                vis.insert(adjel);
                q.push_back(adjel);
            }
        }

    }
}
return count;
        
    }
};