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
// DFS Method
class Solution {
public:
    int sum = 0, deepest = 0;
    void dfs(TreeNode* node, int depth) {
        if (node == NULL)
            return;
        if (!node->right && !node->left)
            if (depth > deepest) {
                deepest = depth;
                sum = node->val;
            } else if (depth == deepest) {
                sum += node->val;
            }
        
        dfs(node->left, depth+1);
        dfs(node->right, depth+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
};
