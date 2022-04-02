// 74. Search a 2D Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        if(v.size()==0)
            return false;
        int n=v.size();
        int m=v[0].size();
        int i=0,j=(n*m)-1;
        while(i<=j)
        {
            int mid=(j+(i-j)/2);
            if(v[mid/m][mid%m]==t)
                return true;
            else if(v[mid/m][mid%m]<t)
                i=mid+1;
            else
                j=mid-1;
        }
        return false;
    }
};
