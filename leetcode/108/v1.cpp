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
    void insert(TreeNode* node, vector<int>& nums, int l, int r) {
        if (l > r)
            return;
        int mid = (l + r) / 2;
        TreeNode* son = new TreeNode(nums[mid]);
        if (nums[mid] > node->val)
            node->right = son;
        else
            node->left = son;
        insert(son, nums, l, mid - 1);
        insert(son, nums, mid + 1, r);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int mid = (nums.size() - 1) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        insert(root, nums, 0, mid - 1);
        insert(root, nums, mid + 1, nums.size() - 1);
        return root;
    }
};
