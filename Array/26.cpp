#include <vector>
#include <iostream>
#include <algorithm>
// 对数组先进行排序，唯一化，截断数组后面，返回数组长度
// 唯一化的底层实现，比较，涉及数据结构向量的删除，通过库函数学习，并掌握库函数

class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        // 双指针法
        auto first = nums.begin();
        auto last = nums.begin();
        while (first != nums.end())
        {
            first++;
            if (first != last)
            {
                last++;
                *last = *first;
            }
        }
        // 向量的删除
    }
};

int main()
{
    Solution obj;
    std::vector<int> numbers{1, 1, 2, 3, 5, 5, 7, 9};
    int out = obj.removeDuplicates(numbers);
    for (auto &i : numbers)
    {
        std::cout << i << std::endl;
    }
    return 0;
}