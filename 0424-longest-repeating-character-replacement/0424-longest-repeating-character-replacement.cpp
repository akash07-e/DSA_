class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,mf=0,maxlen=0,n=s.size(),changes=0;
        vector<int>freq(26,0);
        while(j<n){
            freq[s[j]-'A']++;
            mf=max(mf,freq[s[j]-'A']);
            changes=(j-i+1)-mf;
            if(changes<=k) maxlen=max(maxlen,j-i+1);
            if(changes>k){
                freq[s[i]-'A']--;//A because need to check for uppercase
                mf=0;
                i++;
            } 
            j++;
        }
    return maxlen;
    }
};