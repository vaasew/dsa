class Solution {
public:
    
    bool rotateString(string s, string goal) {
        
        
        string s1=s+s;
        
        int m=goal.length();
        int n=s1.length();
        
        if(m*2 != n)
        {
            return false;
        }
        
        vector<int>lps= lpsCalc(m,goal);
        
        int i=0,j=0;
        
        while(i < n && j < m){
            if(s1[i] == goal[j]){
                i++;
                j++;
            }else{
                if(j!=0)
                {
                    j = lps[j-1];
                }
                else{
                    i++;
                }
            }
        }
        if(j == m){
            return true;
        }
        return false;
        
    }
    
    vector<int> lpsCalc(int m,string goal)
    {
        int j =0;
        vector<int>lps(m);
        
        lps[0]=0;
        
        int i=1;
        
        while(i<m)
        {
            if(goal[i]==goal[j])
            {
                j++;
                lps[i]=j;
                i++;
            }
            else{
                if(j!=0){
                    j=lps[j-1];
                }
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
    }
};