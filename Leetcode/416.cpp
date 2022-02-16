// 416. Partition Equal Subset Sum

class Solution {
public:
    int dp[205][20005];
    bool func(vector<int> &v,int sum,int i)
    {
        if(sum==0)
            return true;
        if(i<0)
            return false;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        bool ans=func(v,sum,i-1);
        if(sum-v[i]>=0)
            ans|=func(v,sum-v[i],i-1);
        return dp[i][sum]=ans;
    }
    bool canPartition(vector<int>& v) {
        memset(dp,-1,sizeof(dp));
        int sum=accumulate(v.begin(),v.end(),0);
        if(sum%2!=0)
            return false;
        sum>>=1;
        return func(v,sum,v.size()-1);
    }
};
