
//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// 双指针法，左右指针
// 无法找到无额外空间的
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head1 = list1;
        ListNode *head2 = list2;
        ListNode node;
        ListNode *list = &node;
        while (list2 && list1)
        {
            if (head1->val <= head2->val)
            {
                head1 = head1->next;
            }
            else
            {
            }
        }
    }
};