// 39. Combination Sum

class Solution {
public:
    void func(vector<vector<int>> &ans,vector<int> &path,int sum,vector<int>& c,int j)
    {
        if(sum<0)
            return;
        if(sum==0)
        {
            ans.push_back(path);
            return;
        }
        for(int i=j;i<c.size();i++)
        {
            path.push_back(c[i]);
            func(ans,path,sum-c[i],c,i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        sort(candidates.begin(),candidates.end());
        func(ans,path,target,candidates,0);
        return ans;
    }
};
