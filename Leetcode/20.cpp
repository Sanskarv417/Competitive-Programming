// 20. Valid Parentheses

class Solution {
public:
    char top(stack<char> &s)
    {
        char c=s.top();
        s.pop();
        return c;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(')');
            else if(s[i]=='{')
                st.push('}');
            else if(s[i]=='[')
                st.push(']');
            else if(st.empty() || top(st)!=s[i])
            {
                return false;
            }
        }
        return st.empty();
    }
};
