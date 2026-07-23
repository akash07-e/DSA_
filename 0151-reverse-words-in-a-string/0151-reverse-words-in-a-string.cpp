class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        int i = 0;

        // Step 1: Extract words
        while (i < n) {

            // skip spaces
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n) break;

            string word = "";

            // build one word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            words.push_back(word);
        }

        // Step 2: Reverse words
        reverse(words.begin(), words.end());

        // Step 3: Join with single spaces
        string ans = "";

        for (int i = 0; i < words.size(); i++) {
            ans += words[i];

            if (i != words.size() - 1)
                ans += ' ';
        }

        return ans;
    }
};