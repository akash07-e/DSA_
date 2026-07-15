class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> st;

        for (int i = 0; i < arr.size(); i++) {

            while (!st.empty() && st.top() > 0 && arr[i] < 0) {

                if (st.top() < abs(arr[i])) {
                    st.pop();                   // stack asteroid destroyed
                }
                else if (st.top() == abs(arr[i])) {
                    st.pop();                   // both destroyed
                    arr[i] = 0;
                    break;
                }
                else {
                    arr[i] = 0;                // current asteroid destroyed
                    break;
                }
            }

            if (arr[i] != 0)
                st.push(arr[i]);
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};