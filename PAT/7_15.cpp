/*
根据下面关系式，求圆周率的值，直到最后一项的值小于给定阈值。


输入格式：
输入在一行中给出小于1的阈值。

输出格式：
在一行中输出满足阈值条件的近似圆周率，输出到小数点后6位。

输入样例：
0.01
输出样例：
3.132157
*/
#include <iostream>
#include <iomanip>
using namespace std;
long Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return Factorial(n - 1) * n;
    }
}
long Function(int n)
{
    int num = 1;
    for (int i = 0; i <= n; i++)
    {
        num *= 2 * i + 1;
    }
    return num;
}
int main()
{
    double threshold;
    double pai = 0;
    cin >> threshold;
    int flag;
    for (int i = 0; static_cast<double>(Factorial(i)) / static_cast<double>(Function(i)) >= threshold; i++)
    {
        pai += static_cast<double>(Factorial(i)) / static_cast<double>(Function(i));
        flag = i;
    }
    flag++;
    pai += static_cast<double>(Factorial(flag)) / static_cast<double>(Function(flag));
    pai *= 2.0;
    cout.precision(6);
    cout << fixed << pai;
    return 0;
}
// 本文递归如何找尾递归问题 N会超长整型