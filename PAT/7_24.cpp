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
    unsigned numerator, denominator;
    char slash;
    cin >> numerator >> slash >> denominator;
    if (numerator < denominator)
    {
        for (unsigned i = 2; i <= numerator; i++)
        {
            if (((numerator % i) == 0) && ((denominator % i) == 0))
            {
                numerator /= i;
                denominator /= i;
                i = 1; // 由于表达式最后会i++
            }
        }
        cout << numerator << slash << denominator << endl;
    }
    else if (numerator == denominator)
    {
        cout << "1/1" << endl;
    }
    else if (numerator > denominator)
    {
        cout << numerator << slash << denominator << endl;
    }
    return 0;
}
/*
更好的做法是在找到一个公约数后继续从当前的i值开始检查下一个可能的公约数。
然而，由于您已经使用了从2到numerator的循环，
并且每次找到公约数后都进行了除法操作，这实际上已经隐含地跳过了那些已经被约掉的因子
*/
// 化简用的辗转相除法