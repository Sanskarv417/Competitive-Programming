// 31. Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int ind1,ind2;
        for(int i=v.size()-2;i>=0;i--)
        {
            if(v[i]<v[i+1])
            {
                ind1=i;
                break;
            }
        }
        if(ind1<0)
            reverse(v.begin(),v.end());
        else
        {
            for(int i=v.size()-1;i>ind1;i--)
            if(v[i]>v[ind1])
            {
                ind2=i;
                break;
            }
        swap(v[ind1],v[ind2]);
        reverse(v.begin()+ind1+1,v.end());
        }
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};
