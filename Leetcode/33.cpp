// 33. Search in Rotated Sorted Array

class Solution {
public:
    int find_key(vector<int>& v,int n,int key)
    {
        int s=0,e=n-1;
        while(s<=e)
        {
            int m=(e+(s-e)/2);
            if(key==v[m])
                return m;
            else if(v[s]<=v[m])
            {
                if(v[s]<=key && key<=v[m])
                    e=m-1;
                else
                    s=m+1;
            }
            else
            {
                if(key<=v[e] && key>=v[m])
                    s=m+1;
                else
                    e=m-1;
            }
        }
        return -1;
    }
    int search(vector<int>& v, int key) {
        int n=v.size();
        return find_key(v,n,key);
    }
};
