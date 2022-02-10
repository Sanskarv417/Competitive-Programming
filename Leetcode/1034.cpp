// 1034. Coloring A Border

class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    void dfs(vector<vector<int>>& grid,int i,int j,int pc)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m)
            return;
        if(grid[i][j]!=pc)
            return;
        grid[i][j]=-pc;
        for(int k=0;k<4;k++)
        {
            dfs(grid,i+dx[k],j+dy[k],pc);
        }
        if(i==0 || i==n-1 || j==0 || j==m-1)
            return;
        if (abs(grid[i + 1][j]) == pc &&
        abs(grid[i - 1][j]) == pc &&
        abs(grid[i][j + 1]) == pc &&
        abs(grid[i][j - 1]) == pc)
      grid[i][j] = pc;
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        dfs(grid,row,col,grid[row][col]);
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]<0)
                    grid[i][j]=color;
        }
        return grid;
    }
};
