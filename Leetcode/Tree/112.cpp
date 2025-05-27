/*
给你二叉树的根节点 root 和一个表示目标和的整数 targetSum 。
判断该树中是否存在 根节点到叶子节点 的路径，这条路径上所有节点值相加等于目标和 targetSum 。
如果存在，返回 true ；否则，返回 false
*/
// BFS遍历，找出，需要带回溯
// DFS 先序，到叶子节点计算一次Sum
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int preOrder(TreeNode *bn, int target, int &sum)
    {
        if (bn == nullptr)
        {
            return 0;
        }
        return sum += preOrder(bn->left, target, sum);
        return sum += preOrder(bn->right, target, sum);
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
    }
};