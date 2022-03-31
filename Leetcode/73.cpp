// 73. Set Matrix Zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        int col0=1;
        for(int i=0;i<n;i++)
        {
            if(v[i][0]==0)
                col0=0;
            for(int j=1;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    v[i][0]=0;
                    v[0][j]=0;
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>0;j--)
            {
                if(v[i][0]==0 || v[0][j]==0)
                    v[i][j]=0;
            }
            if(col0==0)
                v[i][0]=0;
        }
    }
};
