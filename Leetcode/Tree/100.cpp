#include <queue>
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        std::queue<TreeNode *> Q_p{};
        std::queue<TreeNode *> Q_q{};
        Q_p.push(p);
        Q_q.push(q);
        while (!Q_p.empty() && !Q_q.empty())
        {
            if (Q_p.front()->val != Q_q.front()->val)
            {
                return false;
            }
            else
            {
                if (p->left)
                {
                    Q_p.push(p->left);
                }
                if (p->right)
                {
                    Q_p.push(p->right);
                }
                Q_p.pop();
                p = Q_p.front();
                if (q->left)
                {
                    Q_q.push(q->left);
                }
                if (q->right)
                {
                    Q_q.push(q->right);
                }
                Q_q.pop();
                q = Q_q.front();
            }
        }
        return true;
    }
};