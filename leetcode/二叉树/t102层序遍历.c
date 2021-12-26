struct TreeNode* queue[2010];

int getHigh(struct TreeNode* root) {
    if (!root) return 0;
    
    int left = getHigh(root->left);
    int right = getHigh(root->right);
    
    return left > right ? left + 1 : right + 1;
}

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    
    *returnSize = 0;
    if (!root) 
        return NULL;
    
    int height = getHigh(root);
    int** ret = (int**)malloc(height * sizeof(int*));
    *returnColumnSizes = (int*)malloc(sizeof(int) * height);
    
    int head = 0;
    int tail = 0;
    
    queue[tail++] = root;
    while (tail - head) {
        int cur = tail;
        ret[*returnSize] = (int*)malloc(sizeof(int) * (tail - head));
        (*returnColumnSizes)[*returnSize] = 0;
        ret[*returnSize] = (int*)malloc(sizeof(int) * (tail - head));
        while (head < cur) {
            ret[*returnSize][(*returnColumnSizes)[*returnSize]++] = queue[head]->val;
            if (queue[head]->left) queue[tail++] = queue[head]->left;
            if (queue[head]->right) queue[tail++] = queue[head]->right;
            ++head;
        }
        (*returnSize)++;
    }
    
    return ret;
}
