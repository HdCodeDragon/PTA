/*
分数可以表示为分子/分母的形式。编写一个程序，要求用户输入一个分数，然后将其约分为最简分式。
最简分式是指分子和分母不具有可以约分的成分了。如6/12可以被约分为1/2。
当分子大于分母时，不需要表达为整数又分数的形式，即11/8还是11/8；而当分子分母相等时，仍然表达为1/1的分数形式。

输入格式：
输入在一行中给出一个分数，分子和分母中间以斜杠/分隔，如：12/34表示34分之12。
分子和分母都是正整数（不包含0，如果不清楚正整数的定义的话）。

提示：

对于C语言，在scanf的格式字符串中加入/，让scanf来处理这个斜杠。
对于Python语言，用a,b=map(int, input().split('/'))这样的代码来处理这个斜杠。
输出格式：
在一行中输出这个分数对应的最简分式，格式与输入的相同，即采用分子/分母的形式表示分数。如
5/6表示6分之5。

输入样例：
66/120
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned up, down;
    char c1;
    cin >> up >> c1 >> down;
    if (up > down)
    {
        cout << up << c1 << down;
    }
    else if (up == down)
    {
        cout << 1 << c1 << 1;
    }
    else
    {
        int i = 2;
        while (i < down)
        {
            if ((up / i > 1 && up % i == 0) && (down / i > 1 && down % i == 0))
            {
                up /= i;
                down /= i;
                i = 1;
            }
            i++;
        }
        cout << up << c1 << down;
    }
    return 0;
}