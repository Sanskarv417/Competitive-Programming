// 78. Subsets

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) {
        int n=v.size();
        vector<vector<int>> ans;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> s;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))!=0)
                    s.push_back(v[j]);
            }
            ans.push_back(s);
        }
        return ans;
    }
};
