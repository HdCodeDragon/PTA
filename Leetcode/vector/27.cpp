// ˫ָ�뷨 ��Ҫ�󷵻�˳��
// �ֽ����⣬           �����裬
// 1.�������� -> n�α���
// 2.��Val�Ƚ�
// 3.�Ƿ��ƶ�valֵ ->�ƶ���������valֵ���ƶ�
// 4 �ƶ�Val   ->ֱ�Ӹ���nums[not_valuenums] -> ��ָ��
// 5 �ظ�
#include <vector>
class Solution
{
public:
    int removeElement(std::vector<int> &nums, int val)
    {
        unsigned val_nums = 0;
        // int fast = 0;
        // int slow = 0;
        int slow = 0;
        for (int fast = 0; fast < nums.size(); fast++)
        {
            if (nums[fast] == val)
            {
                val_nums++;
            }
            else
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};
