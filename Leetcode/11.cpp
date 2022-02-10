// 11. Container With Most Water

class Solution {
public:
    int maxArea(vector<int>& v) {
        int l=0,r=v.size()-1,ans=0;
        while(l<=r)
        {
            int mn=min(v[l],v[r]);
            ans=max(ans,mn*(r-l));
            if(v[r]>v[l])
                l++;
            else
                r--;
        }
        return ans;
    }
};
