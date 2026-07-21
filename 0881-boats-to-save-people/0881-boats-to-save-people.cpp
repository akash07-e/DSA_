class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int n = nums.size();
        int i = 0;
       int j = n - 1;
       sort(nums.begin(),nums.end());
        int count = 0;
        while (i <= j) {
            if (i == j) {
                count++;
                break;
            }
           else if (nums[i] + nums[j] <= limit) {
                count++;
                i++;
                j--;
            } else {
                count++;
                j--;
            }
        }
        return count;
    }
};