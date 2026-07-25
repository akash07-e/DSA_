class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        vector<int>dp(n);
       
        dp[0]=nums[0];
         if(n==1) return dp[0];
        dp[1]=max(nums[1],nums[0]);
        if(n==2) return max(dp[1],dp[0]);
        for(int i=2;i<n;i++){
            int take=nums[i]+dp[i-2];
            dp[i]=max(take,dp[i-1]);

        }
        return dp[n-1];
    }
};