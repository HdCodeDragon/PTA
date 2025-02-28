/*
为鼓励居民节约用水，自来水公司采取按用水量阶梯式计价的办法，居民应交水费y（元）与月用水量x（吨）相关：
当x不超过15吨时，y=4x/3；超过后，y=2.5x?17.5。请编写程序实现水费的计算。

输入格式：
输入在一行中给出非负实数x。

输出格式：
在一行输出应交的水费，精确到小数点后2位。

输入样例1：
12
输出样例1：
16.00
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned num;
    cin >> num;
    double waterRate;
    if (num <= 15)  
    {
        waterRate = 4 * num / 3;
    }
    else
    {
        waterRate =2.5 * num  - 17.5;
    }
    cout.precision(2);
    cout << fixed << waterRate;
    return 0;
}