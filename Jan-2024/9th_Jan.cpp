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
    void helper(TreeNode* root,vector<int>&v)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
        {
            v.push_back(root->val);
            return;
        }
        helper(root->left,v);
        helper(root->right,v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1,ans2;
        helper(root1,ans1);
        helper(root2,ans2);
        return ans1==ans2;
    }
};