bool MyRecursive(struct TreeNode* tree1, struct TreeNode* tree2)
{
    if (tree1 == NULL && tree2 == NULL) {   // 两子树均为空
        return true;
    }
    if (tree1 == NULL || tree2 == NULL) {   // 一边为空边非空
        return false;
    }
    return (tree1->val == tree2->val) && MyRecursive(tree1->left, tree2->right) &&  // 根节点相同，且子树互为镜像
           MyRecursive(tree1->right, tree2->left);
}

bool isSymmetric(struct TreeNode* root){
    if (root == NULL) {
        return true;
    }
    return MyRecursive(root->left, root->right);
}
