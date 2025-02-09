/*
乌龟与兔子进行赛跑，跑场是一个矩型跑道，跑道边可以随地进行休息。乌龟每分钟可以前进3米，兔子每分钟前进9米；
兔子嫌乌龟跑得慢，觉得肯定能跑赢乌龟，于是，每跑10分钟回头看一下乌龟，若发现自己超过乌龟，就在路边休息，每次休息30分钟，
否则继续跑10分钟；
而乌龟非常努力，一直跑，不休息。假定乌龟与兔子在同一起点同一时刻开始起跑，请问T分钟后乌龟和兔子谁跑得快？

输入格式：
输入在一行中给出比赛时间T（分钟）。

输出格式：
在一行中输出比赛的结果：乌龟赢输出@_@，兔子赢输出^_^，平局则输出-_-；后跟1空格，再输出胜利者跑完的距离。

输入样例：
242
输出样例：
@_@ 726
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned distance_R = 0, distance_T = 0;
    unsigned T;
    cin >> T;
    unsigned flag = 0;

    for (int i = 1; i <=T; i++)
    {
        distance_T += 3;
        if (flag == 0)
        {
            distance_R += 9;
        }
        else
        {
            flag--;
        }
        if (i % 10 == 0 && (distance_R > distance_T))
        {
            flag += 30;
        }
    }
    if (distance_R > distance_T)
    {
        cout << "^_^ " << distance_R;
    }
    else if (distance_T > distance_R)
    {
        cout << "@_@ " << distance_T;
    }
    else
    {
        cout << "-_- " << distance_T;
    }

    return 0;
}