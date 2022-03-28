// 287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& v) 
    {
        int fast=v[0],slow=v[0];
        do{
            fast=v[v[fast]];
            slow=v[slow];
        }
        while(fast!=slow);
        fast=v[0];
        while(fast!=slow)
        {
            slow=v[slow];
            fast=v[fast];
        }
        return fast;
    }
};
