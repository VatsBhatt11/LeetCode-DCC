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
    bool isEvenOddTree(TreeNode* root) {
        if (!(root->val & 1))
            return false;
        queue<TreeNode*> q;
        q.push(root);
        int x, ind = 0;
        while (!q.empty()) {
            if (ind & 1)
                x = INT_MAX;
            else
                x = -1;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                int y = temp->val;
                if (ind & 1) {
                    if (y & 1)
                        return false;
                    if (x <= y)
                        return false;
                    x = y;
                } else {
                    if (y & 1) {
                        if (x >= y)
                            return false;
                        x = y;
                    } else
                        return false;
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ind++;
        }
        return true;
    }
};