class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0, maxlen = 0, len = 0,zeros = 0;;
        while (j < n) {
            
            if (nums[j] == 0) {
                zeros++;
            }
            if (zeros <= k) {
                len = j - i + 1;
                maxlen = max(maxlen, len);
            }
            if (zeros > k) {
                if (nums[i] == 0)
                    zeros--;
                i++;
            }
            j++;
        }
        return maxlen;
    }
};