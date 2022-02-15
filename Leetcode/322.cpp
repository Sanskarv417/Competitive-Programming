// 322. Coin Change

class Solution {
public:
    int dp[10005];
    int min_coin(vector<int>& coins, int amount)
    {
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        int ans=INT_MAX;
        for(auto coin:coins)
        {
            if(amount-coin>=0)
                ans=min(ans+0ll,min_coin(coins,amount-coin)+1ll);
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        return (min_coin(coins,amount)==INT_MAX?-1:min_coin(coins,amount));
    }
};
