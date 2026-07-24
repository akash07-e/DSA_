class Solution {
public:
    bool isPalindrome(string s) {
        string m="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                char c=tolower(s[i]);
                m+=c;
            }
        }
        int i = 0;
        int j = m.size() - 1;

        while (i < j) {
            if (m[i] != m[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

};