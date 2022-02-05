// 329. Longest Increasing Path in a Matrix

class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int lip(vector<vector<int>>& v,vector<vector<int>> &dp,int i,int j,int prev)
    {
        int n=v.size();
        int m=v[0].size();
        if(i<0 || j<0 || i>=n || j>=m)
            return 0;
        if(v[i][j]<=prev)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=0;
        for(int k=0;k<4;k++)
            ans=max(ans,lip(v,dp,i+dx[k],j+dy[k],v[i][j]));
        return dp[i][j]=ans+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                ans=max(ans,lip(matrix,dp,i,j,INT_MIN));
        return ans;
    }
};
