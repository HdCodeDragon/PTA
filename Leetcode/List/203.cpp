
//  跑项目！！！！
//   Definition for singly-linked list.
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
    ListNode *removeElements(ListNode *head, int val)
    {
        // 这里的头结点指的是什么
        ListNode *header = head;
        while (header->next != nullptr)
        {
            if (header->next->val == val)
            {
                header->next = header->next->next;
            }
            else
            {
                header = header->next;
            }
        }
        return head->next;
    }
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        // 这里的头结点指的是什么
        ListNode *first = new ListNode;
        first->next = head;
        // head指针链表改变
        while (first->next != nullptr)
        {
            if (first->next->val == val)
            {
                // 删除当前重复节点
                ListNode *temp = first->next;
                first->next = first->next->next;
                delete temp;
            }
            else
            {
                first = first->next;
            }
        }
        delete first;
        return head;
    }
};