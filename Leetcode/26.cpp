// 唯一化，计算_size
// 双指针法唯一化
#include <vector>
class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        auto begin = nums.begin();
        auto end = nums.end();
        auto begin_next = (nums.begin() + 1);
        while (begin_next != end)
        {
            if ((*begin_next) == (*begin))
            {
                begin_next = nums.erase(begin_next);
            }
            else
            {
                begin++;
                begin_next++;
            }
        }
        return nums.size();
    }
};
// 迭代器失效 erase()返回一个迭代器已经失效的迭代器不能进行++操作，所以程序中断了。
// 不过vector的erase操作可以返回下一个有效的迭代器，所以只要我们每次执行删除操作的时候，将下一个有效迭代器返回
