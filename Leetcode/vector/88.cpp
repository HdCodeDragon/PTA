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
        int ptr1 = m - 1;
        int ptr2 = n - 1;
        for (int i = (m + n - 1); i >= 0; i--)
        {
            if (ptr1 < 0)
            {
                nums1[i] = nums2[ptr2];
                ptr2--;
                continue;
            }
            if (ptr2 < 0)
            {
                nums1[i] = nums1[ptr1];
                ptr1--;
                continue;
            }
            if (nums1[ptr1] >= nums2[ptr2])
            {
                nums1[i] = nums1[ptr1];
                ptr1--;
            }
            else
            {
                nums1[i] = nums2[ptr2];
                ptr2--;
            }
        }
    }
};
