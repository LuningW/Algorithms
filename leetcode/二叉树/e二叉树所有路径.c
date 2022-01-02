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
void dfs(char** result,struct TreeNode* root,int* returnSize,int* cached,int loc)
{
    if(!root)
    {
        return ;

    }
    if(!root->left&&!root->right)
    {
        int len=0;
        int i=0;
        char* res=(char*)malloc(sizeof(char)*1000);
        for(i=0;i<loc;i++)
        {
            //printf("%d ",len);
            len+=sprintf(res+len,"%d->",cached[i]);
            //printf("%d/ ",len);
        }
        sprintf(res+len,"%d",root->val);
        result[(*returnSize)++]=res;

    }
    else
    {
        cached[loc++]=root->val;
        if(root->left)dfs(result,root->left,returnSize,cached,loc);
        if(root->right)dfs(result,root->right,returnSize,cached,loc);
    }
}
char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
    //return NULL;
    char** result=(char**)malloc(sizeof(char*)*1000);
    (*returnSize)=0;
    //int* cached=(int*)malloc(sizeof(int)*1000);
    int cached[1000]={0};
    dfs(result,root,returnSize,cached,0);
    return result;
}

