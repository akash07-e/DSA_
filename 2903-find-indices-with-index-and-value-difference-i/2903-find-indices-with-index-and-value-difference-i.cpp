class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference,
                            int valueDifference) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i ; j < nums.size(); j++) {
                int id = abs(i - j);
                int vd = abs(nums[i] - nums[j]);
                if (id >= indexDifference && vd >= valueDifference) {
                    return {i, j};
                }
            }
        }
        return {-1,-1};
    }
};