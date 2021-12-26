//递归
void postTraversal(struct TreeNode* cur, int* ret, int* size) {
    if (cur == NULL) {
        return;
    }
    postTraversal(cur->left, ret, size);
    postTraversal(cur->right, ret, size);
    ret[(*size)++] = cur->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int* ret = (int*)calloc(101, sizeof(int));
    int size = 0;
    postTraversal(root, ret, &size);
    *returnSize = size;
    return ret;
}
//栈
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    /* 返回数组 */
    int* res = (int*)calloc(10001, sizeof(int));
    *returnSize = 0;
    if (!root) {
        return NULL;
    }
    /* 栈用于迭代，存储遍历过的节点 */
    struct TreeNode** stack = (struct TreeNode**)calloc(10001, sizeof(struct TreeNode*));
    int top = -1;
    stack[++top] = root;
    /* 栈不为空，则遍历继续 */
    while (top >= 0) {
        struct TreeNode* cur = stack[top--];
        /* 后序遍历，为 左右根，但是用栈迭代时，入栈顺序为 根左右
         * 这样出栈之后才为 根右左
         */
        res[(*returnSize)++] = cur->val;    //根
        if(cur->left) { //左
            stack[++top] = cur->left;
        }
        if (cur->right) {   //右
            stack[++top] = cur->right;
        }
    }
    /* 翻转一下即为 左右根 */
    for (int i = 0; i < (*returnSize) / 2; i++) {
        int tmp = res[i];
        res[i] = res[*returnSize - 1 - i];
        res[*returnSize - 1 - i] = tmp;
    }
    return  res;
}
