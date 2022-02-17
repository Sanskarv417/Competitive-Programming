// 55. Jump Game

class Solution {
public:
    bool canJump(vector<int>& v) {
        int m=0,i=0;
        while(i<=m && i<v.size())
        {
            m=max(m,i+v[i]);
            i++;
        }
        return (i==v.size()?true:false);
    }
};
