/*
如果已知英制长度的英尺foot和英寸inch的值，那么对应的米是(foot+inch/12)×0.3048。现在，如果用户输入的是厘米数，
那么对应英制长度的英尺和英寸是多少呢？别忘了1英尺等于12英寸。

输入格式：
输入在一行中给出1个正整数，单位是厘米。

输出格式：
在一行中输出这个厘米数对应英制长度的英尺和英寸的整数值，中间用空格分开。英寸的值应小于12。

输入样例：
170
输出样例：
5 6
*/
#include <iostream>
using namespace std;
int main()
{
    int sm;
    int cm;
    cin >> cm;
    int foot, inch;
    double all_inch;
    // (foot  + inch/12) * 0.3048 * 100 = cm
    // (all_inch - inch)/12 = foot;
    // ((all_inch - inch)/12 + inch/12) * 0.3048 * 100 = cm;
    all_inch = static_cast<double> (cm) / 100 / 0.3048 *12;
    foot = static_cast<int> (all_inch)/12;
    inch = static_cast<int> (all_inch)%12;
    cout << foot << " " << inch << endl;
    return 0;
}
