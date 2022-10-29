class Solution {
public:
    vector<string> ans;
    void sol(int o,int c,string s)
    {
        if(o==0 and c==0)
        {
            ans.push_back(s);
            return;
        }
        if(o==0 and c>0)
        {
            s=s+")";
            sol(o,c-1,s);
            return;
        }
        
        if(o==c)
        {
            s=s+"(";
            sol(o-1,c,s);
            return;
        }
        if(o<c)
        {
            s=s+"(";
            sol(o-1,c,s);
            s=s.substr(0,s.size()-1);
            s=s+")";
            sol(o,c-1,s);
        }
        
        
        
    }
    vector<string> generateParenthesis(int n) {
        sol(n,n,"");
        return ans;
    }
};