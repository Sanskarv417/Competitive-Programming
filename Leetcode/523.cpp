// 523. Continuous Subarray Sum

class Solution {
public:
    bool checkSubarraySum(vector<int>& v, int k) {
        unordered_map<int,int> dp;
        dp[0]=-1;
        int r=0;
        for(int i=0;i<v.size();i++)
        {
            r+=v[i];
            if(k!=0)
                r%=k;
            if(dp.count(r))
            {
                if(i-dp[r]>1)
                    return true;
            }
            else
                dp[r]=i;
        }
        return false;
    }
};
