// 987. Vertical Order Traversal of a Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void ver_ord(TreeNode *root,map<int,multiset<pair<int,int>>> &m,int dis,int l)
    {
        if(!root)
            return;
        m[dis].insert({l,root->val});
        ver_ord(root->left,m,dis-1,l+1);
        ver_ord(root->right,m,dis+1,l+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,multiset<pair<int,int>>> m;
        ver_ord(root,m,0,0);
        for(auto x:m)
        {
            vector<int> v;
            for(auto xx:x.second)
                v.push_back(xx.second);
            ans.push_back(v);
        }
        return ans;
    }
};
