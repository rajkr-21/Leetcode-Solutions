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
        if(subRoot == nullptr) return false;
        else if (root == nullptr) return false;
        else if (identical(root, subRoot)) return true;
        else return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool identical(TreeNode* a, TreeNode* b){
        if(a == nullptr && b == nullptr) return true;
        else if (a == nullptr || b == nullptr) return false;
        else if(a->val != b->val) return false;
        else return identical(a->left, b->left) && identical(a->right, b->right);
    }
};