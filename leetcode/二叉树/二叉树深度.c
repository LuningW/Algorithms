class Solution
{
public:
    int maxDepth(TreeNode *root)//深度优先
    {
        if (root == nullptr)//若无孩子则返回零
            return 0;
        return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
    }
     int maxDepth(TreeNode *root)//广度优先
    {
        if (root == nullptr)
            return 0;
        queue<TreeNode *> que;//辅助站
        que.push(root);
        int res = 0;
        while (!que.empty())//外层while循环，判断该二叉树是否还有更深的层次
        {
            int currentLevelNodeSize = que.size();//得到当前层所有节点数，维护for循环
            for (int i = 1; i <= currentLevelNodeSize; ++i)//内层for循环，确将该层所有节点访问完
            {
                TreeNode *node = que.front();
                que.pop();//每次取出该层一个节点
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);//若还有左或右孩子，则加入队列
            }
            res += 1;//深度+1
        }
        return res;
    }
};
