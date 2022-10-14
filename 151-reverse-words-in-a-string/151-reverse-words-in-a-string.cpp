class Solution {
public:
    string reverseWords(string s) {
     
         int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
        int cnt=0;
    
        while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
            cnt=0;
        } else if (ch == ' ') {
            if(cnt>0)
            {
                left++;
                continue;
                
            }
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
            cnt++;
        }
        left++;
    }
    
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
       
    }
};