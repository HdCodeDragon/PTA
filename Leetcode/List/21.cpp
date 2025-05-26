
//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// ˫ָ�뷨������ָ��
// �޷��ҵ��޶���ռ��
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode list;
        ListNode *head = &list;
        while (list2 && list1)
        {
            if (list1->val < list2->val)
            {
                head->next = list1;
                list1 = list1->next;
            }
            else
            {
                head->next = list2;
                list2 = list2->next;
            }
            // ���ﲢû���ƶ�
            head = head->next;
        }
        head->next = (list1 == nullptr ? list2 : list1);
        return list.next;
    }
};
/*
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *list = new ListNode();
        ListNode *head = list;
        while (list2 && list1)
        {
            if (list1->val < list2->val)
            {
                list->next = list1;
                list1 = list1->next;
            }
            else
            {
                list->next = list2;
                list2 = list2->next;
            }
            list = list->next;
        }
        list1 == nullptr ? list->next = list2 : list->next = list1;
        return head->next;
    }
};
*/
