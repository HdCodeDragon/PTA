/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。

你可以按任意顺序返回答案。
*/
#include <iostream>
#include <array>
#include <vector>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((i != j) && (nums[i] + nums[j]) == target)
                {
                    return {i, j};
                    // std::cout << "[" << i << "," << j << "]" << std::endl;
                }
            }
        }
        return {};
    }
};
int main()
{

    return 0;
}