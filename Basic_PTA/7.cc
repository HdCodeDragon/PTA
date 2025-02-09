/*
现给定任意正整数N(<10
5
 )，请计算不超过N的满足猜想的素数对的个数。
输入格式:
输入在一行给出正整数N。
输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。
*/
// 一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<unsigned> vec;
    unsigned N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        int test_case = 0;
        for (int j = 2; j <= (int)sqrt(i); j++)
        {
            if ((i % j) == 0)
            {
                test_case = 1;
                break;
            }
        }
        if (test_case == 0)
        {
            vec.push_back(i);
        }
    }
    int sum = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        if ((vec[i] - vec[i - 1]) == 2)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}