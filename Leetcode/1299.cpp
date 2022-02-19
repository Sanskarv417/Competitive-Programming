// 1299. Replace Elements with Greatest Element on Right Side

class Solution {
public:
    vector<int> replaceElements(vector<int>& v) {
        int mx=v[v.size()-1];
        v[v.size()-1]=-1;
        for(int i=v.size()-2;i>=0;i--)
        {
            int temp=mx;
            mx=max(v[i],mx);
            v[i]=temp;
        }
        return v;
    }
};
