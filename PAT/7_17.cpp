/*一条蠕虫长1寸，在一口深为N寸的井的底部。已知蠕虫每1分钟可以向上爬U寸，但必须休息1分钟才能接着往上爬。
在休息的过程中，蠕虫又下滑了D寸。就这样，上爬和下滑重复进行。请问，蠕虫需要多长时间才能爬出井？
这里要求不足1分钟按1分钟计，并且假定只要在某次上爬过程中蠕虫的头部到达了井的顶部，那么蠕虫就完成任务了
。初始时，蠕虫是趴在井底的（即高度为0）。
输入格式：
输入在一行中顺序给出3个正整数N、U、D，其中D<U，N不超过100。
输出格式：
在一行中输出蠕虫爬出井的时间，以分钟为单位。
输入样例：
12 3 1
输出样例：
11
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float N, U, D;
    cin >> N >> U >> D;
    float same_time = 0;
    // N <= same_time*U - same_time*D + U;
    // same_time >= (N - U)/(U - D);
    same_time = (N - U) / (U - D); // 向上取整
    // same_time<=0
    same_time = ceil(same_time);
    // float com_time = static_cast<int>(same_time);
    /*
    if (same_time > com_time)
    {
        same_time = com_time + 1;
    }
    */
    float all_time;
    all_time = same_time < 0 ? 1 : 2 * same_time + 1;
    /*
    if (same_time < 0)
    {
        all_time = 1;
    }
    else
    {
        all_time = 2 * same_time + 1;
    }
    */
    cout << all_time;
    return 0;
}
