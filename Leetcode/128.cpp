// 128. Longest Consecutive Sequence

class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        unordered_set<int> s(v.begin(),v.end());
        int ans=0;
        for(auto x:s)
        {
            if(s.find(x-1)!=s.end())
                continue;
            int len=1;
            while(s.find(++x)!=s.end())
                len++;
            ans=max(ans,len);
        }
        return ans;
    }
};
