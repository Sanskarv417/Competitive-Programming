// 1143. Longest Common Subsequence

class Solution {
public:
    int dp[1005][1005];
    int func(int i,int j,string &a,string &b)
    {
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=func(i-1,j,a,b);
        ans=max(max(ans,func(i,j-1,a,b)),func(i-1,j-1,a,b)+(a[i]==b[j]));
        return dp[i][j]=ans;
    }
    int longestCommonSubsequence(string a, string b) {
        memset(dp,-1,sizeof(dp));
        return func(a.size()-1,b.size()-1,a,b);
    }
};
