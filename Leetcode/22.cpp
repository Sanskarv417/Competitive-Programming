// 22. Generate Parentheses

class Solution {
public:
    void generate(vector<string> &ans,string &s,int o,int c)
    {
        if(o==0 && c==0)
        {
            ans.push_back(s);
            return;
        }
        if(o>0)
        {
            s.push_back('(');
            generate(ans,s,o-1,c);
            s.pop_back();
        }
        if(c>0)
            if(c>o)
            {
                s.push_back(')');
                generate(ans,s,o,c-1);
                s.pop_back();
            }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        generate(ans,s,n,n);
        return ans;
    }
};
