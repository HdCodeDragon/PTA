/*
本题要求编写程序，顺序读入浮点数1、整数、字符、浮点数2，再按照字符、整数、浮点数1、浮点数2的顺序输出。

输入格式：
输入在一行中顺序给出浮点数1、整数、字符、浮点数2，其间以1个空格分隔。

输出格式：
在一行中按照字符、整数、浮点数1、浮点数2的顺序输出，其中浮点数保留小数点后2位。

输入样例：
2.12 88 c 4.7
输出样例：
c 88 2.12 4.70
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float f1, f2;
    char c1;
    int num1;
    cin >> f1 >> num1 >> c1 >> f2;
    cout << c1 << " " << num1 << " " << setprecision(3) << f1 << " " << setprecision(3) << f2 <<endl;

    return 0;
}
// C++保留小数点后位数