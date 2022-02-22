// 46. Permutations

class Solution {
public:
    void permutations(vector<vector<int>> &ans,vector<int> &v,int i)
    {
        if(i==v.size())
        {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<v.size();j++)
        {
            swap(v[i],v[j]);
            permutations(ans,v,i+1);
            swap(v[i],v[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& v) {
        vector<vector<int>> ans;
        permutations(ans,v,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
