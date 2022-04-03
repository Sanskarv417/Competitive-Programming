// 493. Reverse Pairs

class Solution {
public:
    int merge(vector<int> &v,int l,int m,int r)
    {
        int cnt=0;
        int j=m+1;
        for(int i=l;i<=m;i++)
        {
            while(j<=r && v[i]>2ll*v[j])
                j++;
            cnt+=j-m-1;
        }
        vector<int> temp;
        int i=l;
        j=m+1;
        while(i<=m && j<=r)
        {
            if(v[i]<=v[j])
            {
                temp.push_back(v[i]);
                i++;
            }
            else 
            {
                temp.push_back(v[j]);
                j++;
            }
        }
        while(i<=m)
        {
            temp.push_back(v[i]);
            i++;
        }
        while(j<=r)
        {
            temp.push_back(v[j]);
            j++;
        }
        for(int j=l;j<=r;j++)
        {
            v[j]=temp[j-l];
        }
        return cnt;
    }
    int mergesort(vector<int> &v,int l,int r)
    {
        if(l>=r)
            return 0;
        long int m=(l+r)/2;
        int ans=mergesort(v,l,m);
        ans+=mergesort(v,m+1,r);
        ans+=merge(v,l,m,r);
        return ans;
    }
    int reversePairs(vector<int>& v) {
        return mergesort(v,0,v.size()-1);
    }
};
