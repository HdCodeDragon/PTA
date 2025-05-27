#include <vector>
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
    void postorder(TreeNode *bn, std::vector<int> &v)
    {
        if (bn == nullptr)
        {
            return;
        }
        postorder(bn->left, v);
        postorder(bn->right, v);
        v.push_back(bn->val);
    }
    std::vector<int> postorderTraversal(TreeNode *root)
    {
        std::vector<int> vec{};
        postorder(root, vec);
        return vec;
    }
};