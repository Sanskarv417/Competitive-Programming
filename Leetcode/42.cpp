// 42. Trapping Rain Water

class Solution {
public:
    int trap(vector<int>& v) {
        int n=v.size();
        int l=0,r=n-1;
        int lm=-1,rm=-1,ans=0;
        while(l<r)
        {
            if(v[l]<=v[r])
            {
                if(v[l]>=lm)
                    lm=v[l];
                else
                    ans+=lm-v[l];
                l++;
            }
            else
            {
                if(rm<=v[r])
                    rm=v[r];
                else
                    ans+=rm-v[r];
                r--;
            }
        }
        return ans;
    }
};
