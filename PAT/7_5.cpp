/*
本题要求编写程序，按照规定格式输出表格。

输入格式：
本题目没有输入。

输出格式：
要求严格按照给出的格式输出下列表格：

------------------------------------
Province      Area(km2)   Pop.(10K)
------------------------------------
Anhui         139600.00   6461.00
Beijing        16410.54   1180.70
Chongqing      82400.00   3144.23
Shanghai        6340.50   1360.26
Zhejiang      101800.00   4894.00
------------------------------------
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "------------------------------------" << endl;
    cout << "Province      Area(km2)   Pop.(10K)" << endl;
    cout << "Anhui         139600.00   6461.00" << endl;
    cout << "Beijing        16410.54   1180.70" << endl;
    cout << "Chongqing      82400.00   3144.23" << endl;
    cout << "Shanghai        6340.50   1360.26" << endl;
    cout << "Zhejiang      101800.00   4894.00" << endl;
    cout << "------------------------------------";
    return 0;
}