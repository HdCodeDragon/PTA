
//  ����Ŀ��������
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
        // �����ͷ���ָ����ʲô
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
        // �����ͷ���ָ����ʲô
        ListNode *first = new ListNode;
        first->next = head;
        // headָ������ı�
        while (first->next != nullptr)
        {
            if (first->next->val == val)
            {
                // ɾ����ǰ�ظ��ڵ�
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