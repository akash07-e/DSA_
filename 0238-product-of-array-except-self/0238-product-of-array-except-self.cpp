class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> prev(n);
        vector<int> suff(n);

        int p = 1;
        for(int i = 0; i < n; i++){
            prev[i] = p;
            p *= nums[i];
        }

        int q = 1;
        for(int i = n-1; i >= 0; i--){
            suff[i] = q;
            q *= nums[i];
        }

        vector<int> ans(n);
        for(int i = 0; i < n; i++)
            ans[i] = prev[i] * suff[i];

        return ans;
    }
};