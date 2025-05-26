
// O(N*N)
// ¿ìÂýÖ¸Õë£¬¹êÍÃÈüÅÜFloyd
//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *fast = head->next;
        ListNode *slow = head->next;
        while (fast != nullptr)
        {
        }
    }
};