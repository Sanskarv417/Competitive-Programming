// 48. Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
                swap(v[i][j],v[j][i]);
        }
        for(int i=0;i<n;i++)
            reverse(v[i].begin(),v[i].end());
    }
};
