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
    int sum = 0;
    void DFS(TreeNode* node) {
        if (!node)
            return;
        DFS(node->right);
        node->val = node->val + sum;
        sum = node->val;
        DFS(node->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        DFS(root);
        return root;
    }
};
