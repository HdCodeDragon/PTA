#include <vector>
#include <utility>
// 找到两个值，用小的值*两值水平距离
// 暴力遍历记录最大，O(N*N)
// 相向指针
// 选择面积较大的移动（是贪心吗）
class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;
        while (left != right)
        {
            int current_area = Area(left, right, height);
            if (current_area > max_area)
            {
                max_area = current_area;
            }
            if (height[left] <= height[right])
            {
                left += 1;
            }
            else
            {
                right -= 1;
            }
        }
        return max_area;
    }
    int Area(int left, int right, std::vector<int> &height)
    {
        return (std::min(height[left], height[right])) * (right - left);
    }
};