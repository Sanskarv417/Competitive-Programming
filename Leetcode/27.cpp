27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(auto x:nums)
        {
            if(x!=val)
            {
                nums[i]=x;
                i++;
            }
        }
        
        return i;
    }
};
