// 给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。子数组是数组中的一个连续部分。
#include <vector>
#include <climits>
// 遍历所有组合()包含1到包含n的所有O(N*N)
// 动态规划更加简单
class Solution
{
public:
    int maxSubArray(std::vector<int> &nums)
    {
        int _size = nums.size();
        int max_sum = INT_MIN;
        for (int i = 0; i < _size; i++)
        {
            int sum = 0;
            for (int j = i; j < _size; j++)
            {
                sum += nums[j];
                if (sum > max_sum)
                {
                    max_sum = sum;
                }
            }
        }
        return max_sum;
    }
};