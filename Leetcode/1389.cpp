// 1389. Create Target Array in the Given Order

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            ans.insert(index[i]+ans.begin(),nums[i]);
        return ans;
    }
};
