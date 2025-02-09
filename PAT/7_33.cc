/*
本题要求编写程序，计算两个有理数的和。

输入格式：
输入在一行中按照a1/b1 a2/b2的格式给出两个分数形式的有理数，其中分子和分母全是整形范围内的正整数。

输出格式：
在一行中按照a/b的格式输出两个有理数的和。注意必须是该有理数的最简分数形式，若分母为1，则只输出分子。
*/
#include <iostream>
#include <string>
using namespace std;
long GCD(long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}
int main()
{
    string str;
    getline(cin, str);

    int numerator_A, numerator_B;
    long numerator;
    int denominator_A, denominator_B;
    long denominator;
    string right_str, left_str;
    // 写一个分割函数出来了
    for (int i = 0; i < (str.size() - 1); i++)
    {
        if (str[i] == ' ')
        {
            left_str = str.substr(0, i);
            right_str = str.substr(i + 1);
        }
    }
    for (int i = 0; i < (left_str.size() - 1); i++)
    {
        if (left_str[i] == '/')
        {
            numerator_A = stoi(left_str.substr(0, i));
            denominator_A = stoi(left_str.substr(i + 1));
        }
    }
    for (int i = 0; i < (right_str.size() - 1); i++)
    {
        if (right_str[i] == '/')
        {
            numerator_B = stoi(right_str.substr(0, i));
            denominator_B = stoi(right_str.substr(i + 1));
        }
    }
    numerator = (numerator_A * denominator_B) + (numerator_B * denominator_A);
    denominator = denominator_A * denominator_B;
    long num = GCD(numerator, denominator);
    numerator /= num;
    denominator /= num;
    if (denominator == 1)
    {
        cout << numerator;
    }
    else
    {
        cout << numerator << "/" << denominator;
    }
    return 0;
}
// 对几个分离 函数的封装！