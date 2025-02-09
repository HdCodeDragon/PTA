/*
给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。

输入格式：
输入在一行中给出A。

输出格式：
输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。

输入样例：
2
输出样例：
234 235 243 245 253 254
324 325 342 345 352 354
423 425 432 435 452 453
523 524 532 534 542 543
*/
/*
给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数
*/
#include <iostream>
using namespace std;
int main()
{
    int A;
    int num = 0;
    cin >> A;
    unsigned flag = 0;
    for (int i = A; i < A + 4; i++)
    {
        // int counter = 0; // 计数器解决空格问题
        for (int j = A; j < A + 4; j++)
        {
            if (j == i)
            {
                continue;
            }
            for (int k = A; k < A + 4; k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                else
                {
                    num += i * 100 + j * 10 + k;
                }
                flag++; // 烧饼
                if (flag % 6 == 0)
                {
                    cout << num;
                }
                else
                {
                    cout << num << " ";
                }

                num = 0;
            }
        }
        cout << endl;
    }
    return 0;
}