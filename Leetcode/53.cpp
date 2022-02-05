// 53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& v) 
    {
        int ans=INT_MIN,sum=0;
        
        for(auto x:v)
        {
            sum+=x;
            ans=max(ans,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return ans;
    }
};
