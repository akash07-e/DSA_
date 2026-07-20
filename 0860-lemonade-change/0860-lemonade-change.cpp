class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {
        int five = 0, ten = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == 5) {
                five++;
            } else if (arr[i] == 10) {
                if (five != 0) {
                    five--;
                    ten++;
                } else
                    return false;
            } else {
                if (five != 0 && ten != 0) {
                    five--;
                    ten--;

                } else if (five >= 3) {
                    five -= 3;
                } else
                    return false;
            }
        }
        return true;
    }
};