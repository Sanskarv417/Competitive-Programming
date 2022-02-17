// 1678. Goal Parser Interpretation

class Solution {
public:
    string interpret(string s) 
    {
        string r;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='G')
                r+='G';
            else if(s[i]=='a')
            {
                r+="al";
                i++;
            }
            else if(s[i]=='(' && s[i+1]==')')
            {
                r+='o';
            }
            else
                continue;
        }
        return r;
    }
};
