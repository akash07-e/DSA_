class Solution {
public:
    int bestClosingTime(string log) {

        int n = log.size();

        vector<int> pre(n + 1, 0);
        vector<int> suf(n + 1, 0);

        // pre[i] = number of N before i
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + (log[i] == 'N');
        }

        // suf[i] = number of Y from i onwards
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] + (log[i] == 'Y');
        }

        int minPenalty = INT_MAX;
        int ans = 0;

        for (int i = 0; i <= n; i++) {
            int penalty = pre[i] + suf[i];

            if (penalty < minPenalty) {
                minPenalty = penalty;
                ans = i;
            }
        }

        return ans;
    }
};