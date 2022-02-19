// 347. Top K Frequent Elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        vector<int> ans(k);
        unordered_map<int,int> m;
        for(auto x:v)
            m[x]++;
        vector<pair<int,int>> p;
        for(auto x:m)
            p.push_back({x.second,x.first});
        sort(p.begin(),p.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++)
            ans[i]=p[i].second;
        return ans;
    }
};
