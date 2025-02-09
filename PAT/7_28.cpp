/*
一群猴子要选新猴王。新猴王的选择方法是：让N只候选猴子围成一圈，从某位置起顺序编号为1~N号。
从第1号开始报数，每轮从1报到3，凡报到3的猴子即退出圈子，接着又从紧邻的下一只猴子开始同样的报数。
如此不断循环，最后剩下的一只猴子就选为猴王。请问是原来第几号猴子当选猴王？

输入格式：
输入在一行中给一个正整数N（≤1000）。

输出格式：
在一行中输出当选猴王的编号。

输入样例：
11
输出样例：
7
*/
// 环形链表可以秒
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<unsigned> vec;

    unsigned N;
    cin >> N;
    for (unsigned i = 1; i <= N; i++)
    {
        // vec[i] = i;
        vec.push_back(i);
    }
    unsigned flag = 0;
    unsigned num = 0;
    auto b = vec.begin();
    while (N != 1)
    {

        if (b != vec.end())
        {
            if (vec[num] == 0)
            {
                num++;
                b++;
            }
            else
            {

                flag++;
                if (flag % 3 == 0)
                {
                    vec[num] = 0;
                    N--;
                }
                    b++;
                    num++;
            }
        }
        else
        {
            b = vec.begin();
            num = 0;
        }
    }
    for (auto &i : vec)
    {
        if (i != 0)
        {
            cout << i;
        }
    }

    return 0;
}