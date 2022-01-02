/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int Find(struct TreeNode* root) 
{
    if (root == NULL) {
        return 0;
    }
    int hLeft = Find(root->left);
    int hRight = Find(root->right);
    if (hLeft - hRight > 1 || hRight - hLeft > 1 || hLeft == -1 || hRight == -1) {
        return -1;
    } else {
        return hLeft > hRight ? hLeft + 1 : hRight + 1;
    }
}

bool isBalanced(struct TreeNode* root){
    int height = Find(root);
    return height > -1;
}
