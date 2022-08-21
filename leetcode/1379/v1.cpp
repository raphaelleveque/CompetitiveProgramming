/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* DFS(TreeNode* node, int key){
        if (node == NULL)
            return NULL;

        if (node->val == key)
            return node;

        TreeNode* res1 = DFS(node->left, key);
        if(res1 && res1->val == key) return res1;

        TreeNode* res2 = DFS(node->right, key);
        if (res2 && res2->val == key)
            return res2;
        else
            return NULL;
        return res2;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = DFS(cloned, target->val);
        return ans;
    }
};
