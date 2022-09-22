class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
      auto p=minmax_element(bloomDay.begin(),bloomDay.end());   
     int l=*p.first;
    int r=*p.second;
        int mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(bloom(bloomDay,mid,k,m))
               {
                   r=mid-1;
               }
               else
               {
                   l=mid+1;
               }
        }
        if(l!=*p.second+1)
        return l;
        else
            return -1;
    }
    int bloom(vector<int>&bloomDay,int x,int k,int m)
    {
        int c=k;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=x)
            {
                k--;
            }
            else
            {
                k=c;
            }
            if(k==0)
            {
                m--;
                if(m==0)
                {
                    break;
                }
                k=c;
            }
            
        }
        if(m==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};