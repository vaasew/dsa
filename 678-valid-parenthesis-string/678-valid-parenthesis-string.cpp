class Solution {
public:
    bool checkValidString(string s) {
          if(s.size()==0) return true;
        
     
        stack<int> st1;
        stack<int> st2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                st2.push(i);
            }
            else if(s[i]=='(')
            {
                st1.push(i);
            }
            else
            {
                if(st1.size()>0)
                {
                    st1.pop();
                }
                else if(st2.size()>0)
                {
                    st2.pop();
                }
                else
                {
                    return false;
                }
            }
        }
         while(!st1.empty() && !st2.empty())
        {
            if(st1.top()>st2.top()) return false;
            st1.pop();
            st2.pop();
        }
        if(st1.size()>0) return false;
        return true;
 
    }
};