class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int c=0;
        sort(g.begin(),g.end(),greater<>());
        sort(s.begin(),s.end(),greater<>());
        int j=0;
        for(int i=0;i<g.size();i++)
        {
            if(j<s.size() and s[j]>=g[i])
            {
                c++;
                j++;
                
            }
        }
        return c;
    }
};