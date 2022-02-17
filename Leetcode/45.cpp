// 45. Jump Game II

class Solution {
public:
    int jump(vector<int>& v) {
        int jumps=0,curr=0,mx=0;
        for(int i=0;i<v.size()-1;i++)
        {
            mx=max(mx,i+v[i]);
            if(i==curr)
            {
                curr=mx;
                jumps++;
            }
        }
        return jumps;
    }
};
