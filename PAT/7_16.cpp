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
#include <vector>
using namespace std;
int main()
{
    int A;
    cin >> A;
    vector<int> vec(4);
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = A + i;
    }
    // 4个数字无重复组合 C14*C13*C12
    for (int i = 0; i < vec.size(); i++)
    {
        int flag = 0;
        int num1 = vec[i] * 100;
        for (int j = 0; j < vec.size(); j++)
        {
            if (j == i)
            {
                continue;
            }
            int num2 = vec[j] * 10;
            num2 += num1;
            for (int k = 0; k < vec.size(); k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                int num3 = vec[k];
                num3 = num3 + num2;
                if (flag == 5)
                {
                    cout << num3;
                }
                else
                {
                    cout << num3 << " ";
                    flag++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}