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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*> q;
        int cnt = 1;
        q.push(root);
        if (depth == 1) {
            TreeNode* temp = new TreeNode(val, root, NULL);
            return temp;
        }
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
                if (cnt == depth - 1) {
                    TreeNode* t1 = new TreeNode(val, temp->left, NULL);
                    TreeNode* t2 = new TreeNode(val, NULL, temp->right);
                    temp->left = t1;
                    temp->right = t2;
                }
            }
            cnt++;
            if (cnt == depth)
                break;
        }
        return root;
    }
};