// 47. Permutations II

class Solution {
public:
    void permutation(vector<int> v,vector<vector<int>> &ans,int i,int n)
    {
        if (i == n)
        {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<n;j++)
        {
            if (j != i && v[j] == v[i])
                continue;
            swap(v[j], v[i]);
            permutation(v, ans, i + 1, n);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        permutation(nums,ans,0,nums.size());
        return ans;
    }
};
