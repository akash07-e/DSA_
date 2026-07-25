class Solution {
public:
int longestsubsequencestring(string s, string r){
    int n=s.size();
    int m=r.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++)  dp[i][0]=0;
    for(int i=0;i<=m;i++)  dp[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==r[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
    int minInsertions(string s) {
        string r=s;
        reverse(r.begin(),r.end());
      int aps= longestsubsequencestring(s, r);//that will give the your current string according maximum palindrome subsequence
      return s.size()-aps;//number i should insert to get palindrome 
    }
};