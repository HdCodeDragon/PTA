#include <vector>
// 排序 双指针
// 两个指针固定记录当前值，去寻找剩下之后的值，如果后面的值没有小于当前的和继续走
// O(N*N*N)
class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        int _size = nums.size();
        int sum = 0;
        for (int i = 0; i < (_size - 1); i++)
        {
            for (int j = i + 1; j < _size; j++)
            {
                // 前面增后面减
                int ptr = _size;
            }
        }
    }
};