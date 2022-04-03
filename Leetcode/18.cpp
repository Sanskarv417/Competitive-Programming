// 18. 4Sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int t) {
        vector<vector<int>> ans;
        if(v.empty())
            return ans;
        int n=v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x=j+1,y=n-1;
                while(x<y)
                {
                    int d=t-v[i]-v[j];
                    if(v[x]+v[y]==d)
                    {
                        vector<int> a(4);
                        a[0]=v[i];
                        a[1]=v[j];
                        a[2]=v[x];
                        a[3]=v[y];
                        ans.push_back(a);
                        while(x<y && v[x]==a[2])
                            x++;
                        while(x<y && v[y]==a[3])
                            y--;
                    }
                    else if(v[x]+v[y]<d)
                        x++;
                    else
                        y--;
                }
                while(j+1<n && v[j]==v[j+1])
                    j++;
            }
            while(i+1<n && v[i]==v[i+1])
                i++;
        }
        return ans;
    }
};
