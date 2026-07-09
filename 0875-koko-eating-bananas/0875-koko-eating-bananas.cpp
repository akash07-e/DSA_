class Solution {
public:
    long long fun(vector<int>& piles, int speed) {
        long long tt = 0;
        for (int i = 0; i < piles.size(); i++) {
            tt +=(piles[i]+speed-1)/speed;
            }
        return tt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int n = 0;
        for (int i = 0; i < piles.size(); i++) {
            n = max(n, piles[i]);
        }
        int r = n;
       
        while (l <= r) {
            int mid = l + (r - l) / 2;
           
            if (fun(piles,mid) <= h) {
              
                r=mid-1;  
            }
           
           else
                l = mid + 1;
        }
        return l;
    }
};