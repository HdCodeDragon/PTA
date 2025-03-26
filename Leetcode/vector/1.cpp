/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。

你可以按任意顺序返回答案。
*/
// 有序左右指针必然可以复杂，排序，左右指针找到数，查找数
// 无序左右指针可以吗 不可以
// 哈希表了
#include <iostream>
#include <array>
#include <vector>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int fast = 0;
        int slow = 0;
        while (fast < nums.size())
        {
            int sum = nums[fast] + nums[slow];
            if (sum < target)
            {
            }
            else if (sum > target)
            {
            }
        }
        return {slow, fast};
    }
};
int main()
{

    return 0;
}