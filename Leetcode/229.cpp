// 229. Majority Element II

class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int c1=0,c2=0,a=0,b=1;
        int n=v.size();
        vector<int> ans;
        for(auto x:v)
        {
            if(a==x)
                c1++;
            else if(b==x)
                c2++;
            else if(c1==0)
            {
                a=x;
                c1++;
            }
            else if(c2==0)
            {
                b=x;
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        int cnt1=count(v.begin(),v.end(),a);
        int cnt2=count(v.begin(),v.end(),b);
        if(cnt1>(n/3))
            ans.push_back(a);
        if(cnt2>n/3)
            ans.push_back(b);
        unique(ans.begin(),ans.end());
        return ans;
    }
};
