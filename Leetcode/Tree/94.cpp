
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}
// µÝ¹éÖÐÐò±éÀú
#include <vector>
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
        // ×ó
        // ¸ù
        // ÓÒ
    }
};