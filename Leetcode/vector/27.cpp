// 双指针法 不要求返回顺序
// 分解问题，           抽象步骤，
// 1.遍历数组 -> n次遍历
// 2.与Val比较
// 3.是否移动val值 ->移动条件，非val值便移动
// 4 移动Val   ->直接赋给nums[not_valuenums] -> 慢指针
// 5 重复
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