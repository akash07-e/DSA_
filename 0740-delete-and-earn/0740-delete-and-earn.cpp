class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {

        int mx = *max_element(nums.begin(), nums.end());

        // points[i] = total points earned from value i
        vector<int> points(mx + 1, 0);

        for (int num : nums) {
            points[num] += num;
        }

        int prev2 = 0;
        int prev1 = 0;

        for (int i = 0; i <= mx; i++) {
            int take = prev2 + points[i];
            int skip = prev1;

            int curr = max(take, skip);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};