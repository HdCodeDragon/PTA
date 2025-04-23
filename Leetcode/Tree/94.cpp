// #include<vector>
#include <vector>
#include <stack>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 递归中序遍历
class Solution
{
public:
    void inorderTraverse(TreeNode *x, std::vector<int> &vec)
    {
        if (!x)
        {
            return;
        }
        inorderTraverse(x->left, vec);
        vec.push_back(x->val);
        inorderTraverse(x->right, vec);
    }
    std::vector<int> inorderTraversal(TreeNode *root)
    {
        std::vector<int> vec{};
        inorderTraverse(root, vec);
        return vec;
        // 左
        // 根
        // 右
    }
};

// 中序遍历迭代

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void visitLeftBranch(TreeNode *root, std::stack<TreeNode *> &S)
{
    // 左子树入栈
    while (root)
    {
        S.push(root);
        root = root->left;
    }
}

std::vector<int> inorderTraverse(TreeNode *root)
{
    std::vector<int> res{};
    std::stack<TreeNode *> S{};
    while (true)
    {
        visitLeftBranch(root, S);
        if (!S.empty())
        {
            break;
        }
        root = S.top();
        res.push_back(root->val);
        S.pop();
        root = root->right;
    }
    return res;
}