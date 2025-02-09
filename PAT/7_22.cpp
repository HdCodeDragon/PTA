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
    int speedR = 9, speedT = 3;
    int distanceR = 0, distanceT = 0;
    unsigned time;
    cin >> time;
    unsigned timeInterval = time / 10;
    while (timeInterval != 0)
    {
        if (distanceR > distanceT)
        {
            speedR = 0;
        }
        else
        {
            speedR = 9;
        }
        distanceR += speedR * 10;
        distanceT += speedT * 10;
        timeInterval--;
    }
    if (distanceR > distanceT)
    {
        distanceT += (time % 10) * speedT;
    }
    else
    {
        distanceR += (time % 10) * speedR;
        distanceT += (time % 10) * speedT;
    }
    if (distanceR > distanceT)
    {
        cout << "^_^ " << distanceR << endl;
    }
    else if (distanceT > distanceR)
    {
        cout << "@_@ " << distanceT << endl;
    }
    else
    {
        cout << "-_- " << distanceT << endl;
    }
    return 0;
}