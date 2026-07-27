class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> freq(101, 0);
        vector<int> ans;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            freq[nums[j]+50]++;
           
            if (j - i + 1 == k) {
                 int count = 0;
                 int beauty=0;
                for (int m = -50; m <0; m++) {
                    count += freq[m + 50];
                    if (count >= x) {
                        beauty=m;
                        break;
                    }
                }
                ans.push_back(beauty);
                freq[nums[i] + 50]--;
                i++;
            }
        }
        return ans;
    }
};