class Solution {
public:
    int removeDuplicates(vector<int>& s) {
        int i=0;
        int j=0;
        for(int j=0;j<s.size();j++){
            if(s[i]!=s[j]){
                i++;
                s[i]=s[j];
            }
        }
        return i+1;
    }
};