class Solution {
public:
 
    // int minEatingSpeed(vector<int>& piles, int h) {
        
//         int s=0;
//         int n=piles.size();
//         int e=*max_element(piles.begin(),piles.end());
//         //max eating speed needed
//         int mid;
//         while(s<=e)
//         {
//             mid=(s+e)/2;
//             if(possible(piles,mid,h))
//             {
//                 e=mid-1;
             
                
//             }
//             else
//             {
//                 s=mid+1;
//             }
//         }
//         return s;
        
//     }
//     int possible(vector<int>&piles,int k,int h)
//     {
//         int hours=0;
//          for(int pile : piles){
//             int div = pile / k;
//             hours += div;
//             if(pile % k != 0) hours++;
//         }
        
//         if(hours<=h)
//         {
//             return 1;
//         }
//         else 
//         {
//             return 0;
//         }
// }
    // this answer didnt work for a big integer so alternate solution is given below but the other answer is also right and good enough
       int minEatingSpeed(vector<int>& piles, int H) {
        int l = 1, r = 1000000000;
        while (l < r) {
            int m = (l + r) / 2, total = 0;
            for (int p : piles)
                total += (p + m - 1) / m;
            if (total > H)
                l = m + 1;
            else
                r = m;
        }
        return l;
    
    }
};