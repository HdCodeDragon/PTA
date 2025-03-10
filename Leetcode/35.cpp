// 遍历寻找目标值 n次 O(logn)
// 找到或没找到
// 找到返回
// 没找到按顺序插入O(logn)
#include <vector>
class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
    {
        auto _size = nums.size();
        for (int i = 0; i < _size; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        // 没找到 按顺序插入
    }
};

// 本体主要考虑查找，O(logn)时间复杂度的查找