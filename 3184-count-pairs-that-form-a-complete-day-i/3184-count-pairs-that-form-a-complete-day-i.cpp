class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> mp;
        long long count = 0;

        for (int h : hours) {
            int rem = h % 24;
            int need = (24 - rem) % 24;

            count += mp[need];
            mp[rem]++;
        }

        return count;
    }
};