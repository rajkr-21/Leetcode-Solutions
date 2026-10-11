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
    int pid; //preorder index
    unordered_map<int,int>m;
    
    TreeNode* helper(vector<int>& preorder, int start, int end) {
        if (start > end) return NULL;

        int rootVal = preorder[pid++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = m[rootVal];

        root->left = helper(preorder, start, mid - 1);
        root->right = helper(preorder, mid + 1, end);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            m[inorder[i]] = i;
        }
        pid = 0;
        return helper(preorder, 0, inorder.size() - 1);
    }  
};