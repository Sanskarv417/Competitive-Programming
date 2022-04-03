// 1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n=v.size();
        vector<int> q;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            if(m.find(t-v[i])!=m.end())
            {
                q.push_back(m[t-v[i]]);
                q.push_back(i);
            }
            m[v[i]]=i;
        }
        return q;
    }
};
