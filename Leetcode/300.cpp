// 300. Longest Increasing Subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        int dp[n+1];
        dp[0]=INT_MIN;
        for(int i=1;i<=n;i++)
            dp[i]=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int pos=upper_bound(dp,dp+n+1,v[i])-dp;
            if(dp[pos-1]<v[i] && v[i]<dp[pos])
                dp[pos]=v[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++)
            if(dp[i]!=INT_MAX)
                ans=i;
        return ans;
    }
};
