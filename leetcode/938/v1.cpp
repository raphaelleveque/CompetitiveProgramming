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
    void DFS(TreeNode* node, int low, int high) {
        if (node == NULL)
            return;
        if (node->val >= low && node->val <= high)
            sum += node->val;
        DFS(node->left, low, high);
        DFS(node->right, low, high);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        DFS(root, low, high);
        return sum;
    }
};
