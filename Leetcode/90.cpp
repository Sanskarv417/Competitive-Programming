// 90. Subsets II

class Solution {
public:
    void func(int i,vector<int> &a,vector<int> &v,vector<vector<int>> &ans)
    {
        ans.push_back(v);
        for(int j=i;j<a.size();j++)
        {
            if(j!=i && a[j]==a[j-1])
                continue;
            v.push_back(a[j]);
            func(j+1,a,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(),nums.end());
        func(0,nums,v,ans);
        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        vector<vector<int>> ans;
        int n=v.size();
        set<vector<int>> s;
        sort(v.begin(),v.end());
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> ss;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))!=0)
                    ss.push_back(v[j]);
            }
            s.insert(ss);
        }
        for(auto x:s)
            ans.push_back(x);
        return ans;
    }
};
