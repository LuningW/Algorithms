/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//递归
int sum;

void dfs(struct TreeNode* root, int flag)
{
    //
    if(!root)
    {
        return;
    }
    if(flag && root->left == NULL && root->right == NULL)
    {
        sum = sum + root->val;
    }
    //struct TreeNode* temp = root;
    dfs(root->left, 1);
    dfs(root->right, 0);
}

int sumOfLeftLeaves(struct TreeNode* root){
    sum = 0;
    dfs(root, 0);
    return sum;
}



//迭代
int sumOfLeftLeaves(struct TreeNode* root){
    if(!root)
    {
        return 0;
    }
    int sum = 0;
    struct TreeNode** p = (struct TreeNode**)malloc(sizeof(struct TreeNode*)*2001);
    int index[2001];
    int left = 0;
    int right = 0;
    index[0] = false;
    p[right++] = root;
    while(left < right)
    {
        struct TreeNode* pNode = p[left++];
        if(pNode->left)
        {
            index[left -1] = false;
            index[right] = true;
            p[right++] = pNode->left;
        }
        if(pNode->right)
        {
            index[left -1] = false;
            index[right] = false;
            p[right++] = pNode->right;
        }
    }
    for(int i = 0; i < right; i++)
    {
        if(index[i])
        {
            sum = sum + p[i]->val;
        }
    }
    return sum;
}
