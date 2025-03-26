// 给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
// 最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
// 你可以假设除了整数 0 之外，这个整数不会以零开头。
//
// 选择末位
// 末位为9时加一，本位置1，末尾加0
//  题目分析不对
#include <vector>
class Solution
{
public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {
        auto end = digits.size() - 1;
        if (digits[end] != 9)
        {
            digits[end]++;
        }
        else
        {
            digits[end]++;
            digits.push_back(0);
        }
    }
};