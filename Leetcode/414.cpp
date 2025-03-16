#include <vector>
#include <algorithm>
// 0 <length < 3 比较返回即可
//  length >= 3 遍历记录 第1遍可以找完 ， 三指针法
//  第一个给high 第二个比较high 和mid ， 第三个 比较三个
// 第四个来了，判断三个比值，然后分别赋值
class Solution
{
public:
    int thirdMax(std::vector<int> &nums)
    {
        int length = nums.size();

        // 遍历查找到最小值
        int index = 0;
        for (int i = 1; i < length; i++)
        {
            if (nums[index] > nums[i])
            {
                index = i;
            }
        }
        int high = index;
        int mid = index;
        int low = index;
        for (int i = 0; i < length; i++)
        {
            if ((nums[i] > nums[high]))
            {
                low = mid;
                mid = high;
                high = i;
            }
            else if ((nums[i] > nums[mid]) && (nums[i] != nums[high]))
            {
                low = mid;
                mid = i;
            }
            else if ((nums[i] > nums[low]) && (nums[i] != nums[mid]) && (nums[i] != nums[high]))
            {
                low = i;
            }
        }
        if ((high == mid) || (mid == low))
        {
            return nums[high];
        }
        else
        {
            return nums[low];
        }
    }
};
