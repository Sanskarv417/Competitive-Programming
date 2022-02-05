// 746. Min Cost Climbing Stairs

class Solution {
public:
    int minCostClimbingStairs(vector<int>& v) {
        int ans=0;
        int a[v.size()];
        int n=v.size();
        a[0]=v[0];
        a[1]=v[1];
        for(int i=2;i<n;i++)
        {
            a[i]=min(a[i-1],a[i-2])+v[i];
        }
        return min(a[n-1],a[n-2]);
    }
};
