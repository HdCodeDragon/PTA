/*
程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。
比如输入700，输出应该是7。

输入格式：
每个测试是一个3位的正整数。

输出格式：
输出按位逆序的数。

输入样例：
123
输出样例：
321
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned num;
    cin >> num;
    num = (num / 100) + (num % 100 - (num % 10)) + (num % 10) * 100;
    cout << num;
    return 0;
}
//单纯数字上数学解法，没有设计string和vector的转换问题