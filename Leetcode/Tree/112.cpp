/*
����������ĸ��ڵ� root ��һ����ʾĿ��͵����� targetSum ��
�жϸ������Ƿ���� ���ڵ㵽Ҷ�ӽڵ� ��·��������·�������нڵ�ֵ��ӵ���Ŀ��� targetSum ��
������ڣ����� true �����򣬷��� false
*/
// BFS�������ҳ�����Ҫ������
// DFS ���򣬵�Ҷ�ӽڵ����һ��Sum
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