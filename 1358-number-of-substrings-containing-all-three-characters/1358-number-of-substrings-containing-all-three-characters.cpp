class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>freq(3,0);
        int i=0,j=0,n=s.size(),count=0;
        for(j;j<n;j++){
            freq[s[j]-'a']++;
            while(freq[0]&&freq[1]&&freq[2]){
                count+=(n-j);
                freq[s[i]-'a']--;
                i++;
            }
        }
        return count;
    }
};