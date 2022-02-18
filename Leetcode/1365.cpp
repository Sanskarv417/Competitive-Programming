// 1365. How Many Numbers Are Smaller Than the Current Number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& v) {
        //  1st method->O(nlogn)
        // vector<int> ans;
        // vector<int> r=v;
        // sort(r.begin(),r.end());
        // for(int i=0;i<v.size();i++)
        // {
        //     auto pos=lower_bound(r.begin(),r.end(),v[i])-r.begin();
        //     ans.push_back(pos);
        // }
        // return ans;
        
        // 2nd method->O(n)
        vector<int> pre(105,0);
        int n=v.size();
        for(auto x:v)
            pre[x]++;
        for(int i=1;i<pre.size();i++)
            pre[i]+=pre[i-1];
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(pre[v[i]]>0)
                if(v[i]-1>=0)
                    ans[i]=(pre[v[i]-1]);
        }
        return ans;
    }
};
