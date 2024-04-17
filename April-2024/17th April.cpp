/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, int& len, string s, string& ans) {
        if (!root)
            return;
        s += ('a' + root->val);
        helper(root->left, len, s, ans);
        if (!root->left && !root->right) {
            string temp = s;
            reverse(temp.begin(), temp.end());
            if (ans.empty() || ans > temp) {
                ans = temp;
                len = s.size();
                cout << ans << " ";
            }
        }
        helper(root->right, len, s, ans);
    }

    string smallestFromLeaf(TreeNode* root) {
        int mnl = INT_MAX;
        string ans, s;
        helper(root, mnl, s, ans);
        return ans;
    }
};