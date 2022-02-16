// 797. All Paths From Source to Target

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        path.push_back(0);
        dfs(graph,ans,path,0);
        return ans;
    }
    void dfs(vector<vector<int>> &graph,vector<vector<int>> &ans,vector<int> &path,int i)
    {
        if(i==graph.size()-1)
        {
            ans.push_back(path);
            return;
        }
        for(auto x:graph[i])
        {
            path.push_back(x);
            dfs(graph,ans,path,x);
            path.pop_back();
        }
    }
};
