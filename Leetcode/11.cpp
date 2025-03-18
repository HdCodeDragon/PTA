#include <vector>
// 找到两个值，用小的值*两值水平距离
// 暴力遍历记录最大，O(N*N)
// 相向指针
// 选择面积较大的移动（是贪心吗）
class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {
        auto _begin = height.begin();
        auto _end = height.end() - 1;
        auto _bottom = std::distance(_begin, _end);
        auto area = ((*_end) > (*_begin)) ? _bottom * (*_end) : _bottom * (*_begin);
        while (_begin != _end)
        {
            // 相向指针移动步骤
            if ()
        }
    }
};