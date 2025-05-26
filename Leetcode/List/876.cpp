
//   Definition for singly-linked list.
// ��������һ�Σ�֪�����������м�������������
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        int nums = 0;
        ListNode *mid = head;
        while (head != nullptr)
        {
            ++nums;
            head = head->next;
        }
        int midNum = (nums / 2) + 1;
        while ((--midNum) > 0)
        {
            mid = mid->next;
        }
        return mid;
    }
};
