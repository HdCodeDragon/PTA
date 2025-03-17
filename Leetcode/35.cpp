// 遍历寻找目标值 n次 O(logn)
// 找到或没找到
// 找到返回
// 没找到按顺序插入O(logn)
// 二分查找
#include <vector>
class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
    {
        auto begin = nums.begin();
        auto end = nums.end() - 1;
        auto mid = begin + (end - begin) / 2;

        while (lo < hi)
        {
            int mi = (lo + hi) >> 1;
            if(e<A[mi]) hi = mi;
            else if (A[mi]) lo =mi + 1;
            else  return mi;
            /* code */
        }
        
        // low == hi时，指向最后一个元素
    }
};

// 本体主要考虑查找，O(logn)时间复杂度的查找 二分查找
/*
        auto hi = nums.size() - 1;
decltype(nums.size()) low = 0;
while (low <= hi)
{
    auto mid = low + (hi - low) / 2;
    if (nums[mid] == target)
    {
        return mid;
    }
    else if (nums[mid] < target)
    {
        low = mid + 1;
    }
    else
    {
        hi = mid - 1;
    }
}
// 没找到 按顺序插入
return low;
*/