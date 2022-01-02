int countNodes(struct TreeNode* root){
    if(root==NULL)
    {
        return 0;
    }
    int num=0;
    if(root->left!=NULL)
    {
        num+=countNodes(root->left);
    } 
    if(root->right!=NULL)
    {
        num+=countNodes(root->right);
    }
    return num+1;
