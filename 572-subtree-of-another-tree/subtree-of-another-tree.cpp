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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        return subtree(root, subRoot) || 
               isSubtree(root->left, subRoot) || 
               isSubtree(root->right, subRoot);
    }

    bool subtree(TreeNode* a, TreeNode* b){
        if (!a || !b) return a == b;
        return (a->val == b->val) && 
               subtree(a->left, b->left) && 
               subtree(a->right, b->right);
    }
};