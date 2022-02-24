// 40. Combination Sum II

class Solution {
public:
    void func(vector<vector<int>> &ans,vector<int> &v,vector<int> &a,int sum,int i)
    {
        if(sum==0)
        {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<a.size();j++)
        {
            if(j>i && a[j]==a[j-1])
                continue;
            if(sum<a[j])
                break;
            v.push_back(a[j]);
            func(ans,v,a,sum-a[j],j+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        func(ans,v,candidates,target,0);
        return ans;
    }
};
