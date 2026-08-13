class Solution {
public:
    int secondHighest(string s) {
        int l = -1;
        int sl = -1;

        for (char ch : s) {
            if (isdigit(ch)) {
                int digit = ch - '0';

                if (digit > l) {
                    sl = l;
                    l = digit;
                }
                else if (digit > sl && digit != l) {
                    sl = digit;
                }
            }
        }

        return sl;
    }
};