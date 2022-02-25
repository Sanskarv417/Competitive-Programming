// 516. Longest Palindromic Subsequence

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string r=s;
        reverse(r.begin(),r.end());
        int dp[s.size()+1][r.size()+1];
        for(int i=0;i<s.size();i++)
        {
            dp[i][0]=0;
            dp[0][i]=0;
        }
        for(int i=1;i<=s.size();i++)
        {
            for(int j=1;j<=s.size();j++)
            {
                if(s[i-1]==r[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        //printing lps
        // string ans="";
        // int i=s.size(),j=s.size();
        // while(i!=0 && j!=0)
        // {
        //     if(s[i-1]==r[j-1])
        //     {
        //         ans.push_back(s[i-1]);
        //         i--;
        //         j--;
        //     }
        //     else if(dp[i-1][j]>dp[i][j-1])
        //         i--;
        //     else
        //         j--;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
        return dp[s.size()][s.size()];
    }
};
