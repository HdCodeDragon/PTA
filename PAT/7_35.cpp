/*
本题要求编写程序，计算N个有理数的平均值。

输入格式：
输入第一行给出正整数N（≤100）；
第二行中按照a1/b1 a2/b2 …的格式给出N个分数形式的有理数，其中分子和分母全是整形范围内的整数；
如果是负数，则负号一定出现在最前面。

输出格式：
在一行中按照a/b的格式输出N个有理数的平均值。注意必须是该有理数的最简分数形式，若分母为1，则只输出分子。

输入样例1：
4
1/2 1/6 3/6 -5/10
输出样例1：
1/6
*/
#include <iostream>
using namespace std;

    static int final_up;
    static int final_down;
void Func()
{
        int flag;
    if (final_up > final_down)
    {
        flag = final_up;
    }
    else
    {
        flag = final_down;
    }

    for (int i = 2; i < flag; i++)
    {
        if ((final_up / i >= 1 && final_up % i == 0) && (final_down / i >= 1 && final_down % i == 0))
        {
            final_up /= i;
            final_down /= i;
            // flag /= i;
            i = 2;
        }
    }
}
int main()
{
    int N;
    cin >> N;
    int up, down;
    char c1;

    for (int i = 0; i < N; i++)
    {
        cin >> up >> c1 >> down;
        if (i == 0)
        {
            final_up = up;
            final_down = down;
        }
        else
        {
            if (final_down == down)
            {
                final_up += up;
                Func();
            }
            else
            {

                final_up = up * final_down + final_up * down;
                final_down *= down;
                Func();
            }
        }
    }
    // 化简Final_down && final_up;
    final_down *= N;
    Func();
// 输出
    if (final_up == final_down)
    {
        cout << 1;
    }
    else if (final_down == 1)
    {
        cout << final_up;
    }
    else
    {
        cout << final_up << c1 << final_down;
    }
    return 0;
}