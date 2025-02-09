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
int main()
{
    float threshold;
    cin >> threshold;
    double factorial = 1;
    double odd_factorial = 1;
    float hlaf_pai = 0;
    float first_item = 1;
    float end_item = first_item;
    for (int i = 1; end_item >= threshold; i++)
    {
        factorial *= i;
        odd_factorial *= 2 * i + 1;
        hlaf_pai += factorial / odd_factorial;
        // cout << hlaf_pai << " ";
        end_item = factorial / odd_factorial;
    }
    hlaf_pai += first_item;

    cout.setf(ios::fixed);

    cout << setprecision(6) << 2 * hlaf_pai;
    return 0;
}