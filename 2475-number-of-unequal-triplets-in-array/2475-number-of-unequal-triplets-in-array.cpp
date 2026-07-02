class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int,int> mp;

        // Frequency count
        for(int x : nums) {
            mp[x]++;
        }

        vector<int> freq;
        for(auto it : mp) {
            freq.push_back(it.second);
        }

        int count = 0;
        int m = freq.size();

        // Choose 3 distinct value groups
        for(int i = 0; i < m; i++) {
            for(int j = i + 1; j < m; j++) {
                for(int k = j + 1; k < m; k++) {
                    count += freq[i] * freq[j] * freq[k];
                }
            }
        }
        /*count += freq[0] * freq[1] * freq[2]

Substitute:

count += 3 * 1 * 1

So:

count = 3
*/

        return count;
    }
};