// 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& v) {
        int cnt=0,m;
        for(auto x:v)
        {
            if(cnt==0)
            {
                m=x;
                cnt++;
            }
            else
            {
                if(x==m)
                    cnt++;
                else
                    cnt--;
            }
        }
        return m;
    }
};
