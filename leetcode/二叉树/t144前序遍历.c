/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


#define MAXSIZE 10000
void visite(struct TreeNode *root, int *res, int *returnSize)
{
    if (root == NULL) {
        return;
    }
    res[(*returnSize)++] = root->val;
    visite(root->left, res, returnSize);
    visite(root->right, res, returnSize);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    *returnSize = 0;
    if (root == NULL) {
        return NULL;
    }
    int *res = (int *)malloc(sizeof(int) * MAXSIZE);
    visite(root, res, returnSize);
    return res;
}
