/*
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：
输入在一行中给出一个整数，如：1234。
提示：整数包括负数、零和正数。
输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如
yi er san si。
输入样例：
-600
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int num;
    vector<string> vec{"ling", "yi", "er", "san", "si",
                       "wu", "liu", "qi", "ba", "jiu"};
    cin >> num;
    unsigned flag = 0;
    string str = to_string(num);
    for (auto &i : str)
    {
        if (i == '-')
        {
            cout << "fu ";
        }
        else
        {       
            int c = i - '0';
            if (flag != 0)
            {
                cout << " ";
            }
            cout << vec[c];
            flag++;
        }
    }

    /*
    unsigned flag = 0;
    num = (string[0] == '-') ? -num : num;
        num
    for (int i = 0;;i++)
    {
        if (str[i] == '-')
        {
            cout << "fu ";
        }
        else
        {
            if (flag != 0)
            {
                cout << " ";
            }
            vec[i];
            flag++;
        }
    }

    */
    // array[10] = {"ling", "yi", "er","san""si","wu","liu","qi","ba',"jiu"};
    // string array[10];

    return 0;
}