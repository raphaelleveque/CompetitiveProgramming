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
// BFS Method
class Solution {
public:
    int bfs(TreeNode* root) {
        if (root == NULL) return -1;
        
        int sum = 0, n = 0;
        TreeNode* node;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            sum = 0;
            n = size(q);
            for (int i = 0; i < n; i++) {
                node = q.front();
                q.pop();
                sum += node->val;
                if (node && node->left)
                    q.push(node->left);
                if (node && node->right)
                    q.push(node->right);
            }
        }
        return sum;
    }

    int deepestLeavesSum(TreeNode* root) {
        return bfs(root);
    }
};
