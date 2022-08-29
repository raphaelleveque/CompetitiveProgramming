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
        if (node == NULL)
            return;
        
        if (node->val % 2 == 0) {
            if (node->left != NULL) {
                sum += (node->left->left == NULL ? 0 : node->left->left->val);
                sum += (node->left->right == NULL ? 0 : node->left->right->val);
            }
            if (node->right != NULL) {
                sum += node->right->left == NULL ? 0 : node->right->left->val;
                sum += node->right->right == NULL ? 0 : node->right->right->val;
            }
        } 
        DFS(node->left);
        DFS(node->right);
    }
    int sumEvenGrandparent(TreeNode* root) {
        DFS(root);
        return sum;
    }
};
