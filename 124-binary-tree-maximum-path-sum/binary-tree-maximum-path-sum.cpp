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
private:
    int global_sum;

    int MaxBranch(TreeNode* node) {
        if (!node) return 0;

        int left = max(MaxBranch(node->left), 0);
        int right = max(MaxBranch(node->right), 0);

        int current_path_sum = node->val + left + right;

        global_sum = max(global_sum, current_path_sum);

        return node->val + max(left, right);
    }

public:
    int maxPathSum(TreeNode* root) {
        global_sum = INT_MIN;
        MaxBranch(root);
        return global_sum;
    }
};
