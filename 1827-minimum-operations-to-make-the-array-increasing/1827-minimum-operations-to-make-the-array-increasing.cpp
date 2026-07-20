class Solution {
public:
    int minOperations(vector<int>& nums) {
        int steps = 0;
        if (nums.size() == 1)
            return 0;
        for (int i = 1; i < nums.size(); i++) {
            int needed = 0;

            if (nums[i - 1] >= nums[i]) {
                needed = nums[i - 1] - nums[i];
                nums[i] += needed + 1;
                steps += (needed + 1);
            }
        }
        return steps;
    }
};