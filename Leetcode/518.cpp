// 518. Coin Change 2

class Solution {
public:
    int dp[305][5005];
    int ways(int amount, vector<int>& coins,int i)
    {
        if(amount<0)
            return 0;
        if(amount==0)
            return 1;
        if(i<0)
            return 0;
        if(dp[i][amount]!=-1)
            return dp[i][amount];
        int ans=0;
        for(int j=0;j<=amount;j+=coins[i])
            ans+=ways(amount-j,coins,i-1);
        return dp[i][amount]=ans;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return ways(amount,coins,coins.size()-1);
    }
};
