#include <vector>
#include <algorithm>
// 数组非增序，直接输出0 -> 遍历一次
// 数组乱序，遍历所有情况O(n*n) 暴力解
// 两个指针，边记录最小值，边记录最大值
class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int max_profit = 0;
        int min_price = prices.at(0);

        for (auto i : prices)
        {
            max_profit = std::max(max_profit, i - min_price);
            min_price = std::min(i, min_price);
        }
        return max_profit;
    }
};
