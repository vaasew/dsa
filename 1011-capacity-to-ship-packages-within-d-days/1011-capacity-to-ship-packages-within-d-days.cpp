class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s=1;
        int e=0;
        int mid;
        for(int i=0;i<weights.size();i++)
        {
            e=e+weights[i];
        }
        while(s<=e)
        {
            mid=(s+e)/2;
            if(possi(weights,mid,days))
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return s;
    }
    int possi(vector<int>&weights,int mid,int days)
    {
        int x=mid;
        for(int i=0;i<weights.size();i++)
        {
            if(x>=weights[i])
            x=x-weights[i];
            else if(mid<weights[i])
            {
                return 0;
            }
            else
            {
                days--;
                x=mid-weights[i];
            }
        }
        if(x!=mid)
        {days--;}
        if(days>=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};