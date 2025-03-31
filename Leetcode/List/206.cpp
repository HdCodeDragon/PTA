
//   Definition for singly-linked list.
// 如何反转，设置两个头指针，边走边逆转节点
// 头指针
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        if (head->next == nullptr)
        {
            return head;
        }
        ListNode *last_slow = head;
        ListNode *last_fast = head->next;
        last_slow->next = nullptr;
        while (last_fast != nullptr)
        {
            ListNode *temp = last_fast->next;
            last_fast->next = last_slow;
            last_slow = last_fast;
            last_fast = temp;
        }
        return last_slow;
    }
};

/*
官方题解更加简练
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

*/