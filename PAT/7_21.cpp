/*
本题要求对任意给定的正整数N，求方程X
2
 +Y
2
 =N的全部正整数解。
输入格式：
输入在一行中给出正整数N（≤10000）。
输出格式：
输出方程X
2
 +Y
2
 =N的全部正整数解，其中X≤Y。每组解占1行，两数字间以1空格分隔，按X的递增顺序输出。如果没有解，则输出No Solution。
输入样例1：
884
输出样例1：
10 28
20 22
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned N;
    cin >> N;
    // X**2 + Y**2 = N  X<= Y;
        unsigned flag = 0;
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = i ; j <= 10000  ; j++)
        {
            if ((i * i) + (j * j) == N )
            {
                flag++;
                cout << i << " " << j << endl;
                break;
            }    
        }
    }
    if (flag == 0)
    {
        cout << "No Solution";
    }
    

    return 0;
}