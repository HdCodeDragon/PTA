
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// 存在唯一单根
static double coefficient1, coefficient2, coefficient3, coefficient4;
double Func(double x)
{
    return (coefficient1 * x * x * x) + (coefficient2 * x * x) + (coefficient3 * x) + coefficient4;
}
int main()
{
    double border_dot1, border_dot2;
    // 全局变量
    cin >> coefficient1 >> coefficient2 >> coefficient3 >> coefficient4;
    cin >> border_dot1 >> border_dot2;
    double Func_A, Func_B;
    Func_A = Func(border_dot1);
    Func_B = Func(border_dot2);
    // 判断端点是否有根
    while ((Func_A * Func_B) < 0)
    {
        double mid_dot = (border_dot1 + border_dot2) / 2;
        double Func_mid = Func(mid_dot);
        if (Func_mid != 0)
        {
            if (Func_mid * Func_A < 0)
            {
                border_dot2 = mid_dot;
                Func_B = Func(border_dot2);
                // Func_A = mid_dot;
            }
            else
            {
                border_dot1 = mid_dot;
                Func_A = Func(border_dot1);
            }
        }
        else
        {
            cout << fixed << setprecision(2) << mid_dot;
            break;
        }
    }
    if (Func_A == 0)
    {
        cout << fixed << setprecision(2) << border_dot1;
    }
    if (Func_B == 0)
    {
        cout << fixed << setprecision(2) << border_dot2;
    }

    return 0;
}
