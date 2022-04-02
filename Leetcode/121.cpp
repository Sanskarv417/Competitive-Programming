// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mp=0;
        int mn=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            mn=min(mn,v[i]);
            mp=max(mp,v[i]-mn);
        }
        return mp;
    }
};
