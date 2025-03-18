// 遍历N次 二分查找排进去
// 找到数组2第1个数和最后一个数，遍历看确定在数组1哪个范围插入
// 每次在之后的区域二分查找插入 太复杂，时间复杂度相当高
// 双指针，比较，插入第三个容器中遍历O（M+N）
#include <vector>
class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
        {
        }
    }
    int Binaryfind(std::vector<int> &nums, int lo, int hi, int target)
    {
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return lo;
    }
};
