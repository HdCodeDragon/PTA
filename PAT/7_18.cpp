#include <iostream>
#include <cmath>
using namespace std;
// 存在唯一单根
double a3, a2, a1, a0;
double Func(double x)
{
    double y = a3 * pow(x, 3) + a2 * pow(x, 2) + a1 * x + a0;
    return y;
}
double BinaryRoot(double a, double b, double threshold)
{
    // f1 * f2 < 0的情况
    double f1 = Func(a);
    double f2 = Func(b);
    double root = 0;
    double midPoint = (a + b) / 2.0;
    double func_midPoint = Func((a + b) / 2.0);
    if (f1*f2 == 0)
    {
        root = 0;
        return root;
    }
    if (func_midPoint == 0)
    {
        root = midPoint;
    }

    return root;
}

int main()
{
    double endPoint1, endPoint2;
    cin >> a3 >> a2 >> a1 >> a0;
    cin >> endPoint1 >> endPoint2;

    double root = BinaryRoot(endPoint1, endPoint2, threshold);
    return 0;
}
// 全局函数的使用 当中点很小，运行超时问题（精度问题） inline函数全局函数 
// 递归写的不是很好，有很多缺陷
