// 581. Shortest Unsorted Continuous Subarray

class Solution {
public:
    int findUnsortedSubarray(vector<int>& v) {
        int mn=INT_MAX,mx=INT_MIN;
        int n=v.size();
        for(int i=1;i<n;i++)
            if(v[i]<v[i-1])
                mn=min(mn,v[i]);
        for(int i=n-2;i>=0;i--)
            if(v[i]>v[i+1])
                mx=max(mx,v[i]);
        bool flag=true;
        for(int i=1;i<n;i++)
            if(v[i]<v[i-1])
                flag=false;
        if(flag)
            return 0;
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]>mn)
            {
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]<mx)
            {
                r=i;
                break;
            }
        }
        return (l<r?r-l+1:0);
    }
};
