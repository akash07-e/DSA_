class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> prev(amount+ 1, 0), curr(amount + 1, 0);
        int n = coins.size();
        for (int i = 0; i <= amount; i++) {//base case
            if (i % coins[0] == 0)
                prev[i] = i / coins[0];
            else
                prev[i] = 1e9;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= amount; j++) {
                int nottake = 0 + prev[j];
                int take = INT_MAX;
                if (coins[i] <= j)
                    take = 1 + curr[j - coins[i]];
                curr[j] = min(take, nottake);
                
            }
            prev= curr;
        }
        int ans=prev[amount];
        if(ans>=1e9) return -1;
        return ans;
    }
};