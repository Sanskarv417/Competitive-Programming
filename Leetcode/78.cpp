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

class Solution {
public:
    void func(int i,vector<int> &v,vector<int> &a,vector<vector<int>> &ans)
    {
        ans.push_back(v);
        for(int j=i;j<a.size();j++)
        {
            v.push_back(a[j]);
            func(j+1,v,a,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        func(0,v,nums,ans);
        return ans;
    }
};
