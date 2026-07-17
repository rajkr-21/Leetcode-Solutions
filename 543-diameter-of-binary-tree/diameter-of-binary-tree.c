/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dia;
int max(int a, int b){
    return (a>b)? a:b;
}

int height(struct TreeNode* node){
    if(node == NULL) return 0;
    int l = height(node->left);
    int r = height(node->right);
    if(l+r > dia) dia = l + r;
    return 1 + max(l,r);
}

int diameterOfBinaryTree(struct TreeNode* root) {
    dia = 0;
    height(root);
    return dia;
}