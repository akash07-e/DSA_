class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int n = nums.size();
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        nums.push_back(target);
        int a=0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
             a = i;
                break;
            }
        }
        return a;
    }
};