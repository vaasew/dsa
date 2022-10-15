class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        
        string s1=strs[0];
        string s2=strs[n-1];
        string ans="";
        
        int lmt=min(s1.length(),s2.length());
        
        for(int i=0;i<lmt;i++)
        {
            if(s1[i]==s2[i])
            {
                ans=ans+s1[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};