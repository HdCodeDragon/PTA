/*
一个采购员去银行兑换一张y元f分的支票，结果出纳员错给了f元y分。采购员用去了n分之后才发觉有错，于是清点了余额尚有2y元2f分
，问该支票面额是多少？

输入格式：
输入在一行中给出小于100的正整数n。

输出格式：
在一行中按格式y.f输出该支票的原始面额。如果无解，则输出No Solution。

输入样例1：
23
输出样例1：
25.51
输入样例2：
22
输出样例2：
No Solution
*/
#include <iostream>
using namespace std;
int main()
{
    // 直接数学不一定能解，遍历反而最好
    unsigned n; 
    double y, f;
    cin >> n;
        for(int i = 0; i <= 100 ; i++)
        {
            for(int j = 0; j <= 100 ; j++)
            {
            }
        }
            // y*200 + 2f = f*100 + y - n
            // y.f   (f.y-n) = 2y.2f; 
            // 100*f + y - n = 200 *y + 2f;单位分
            // (100 - 2) f = (200 - 1) y + n
            // f = (199/98)y + n/98;

    return 0;
}