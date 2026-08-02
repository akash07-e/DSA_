class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long curr = 1;

            for (int j = i; j < n; j++) {
                curr = (curr / gcd(curr, (long long)nums[j])) * nums[j];

                if (curr == k)
                    ans++;

                if (curr > k || k % curr != 0)
                    break;
            }
        }

        return ans;
    }
};