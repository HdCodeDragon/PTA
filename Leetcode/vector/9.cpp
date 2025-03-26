/*
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
回文数
是指正序（从左向右）和倒序（从右向左）读都是一样的整数
*/
#include <string>
#include <algorithm>
// 1.数字转字符串，逆序字符串，新旧字符串比较
class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::string x_str = std::to_string(x);
        std::string r_str;
        std::reverse_copy(x_str.begin(), x_str.end(), r_str.begin());
        if (x_str == r_str)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};