/*我们已经知道了将N个整数按从小到大排序的冒泡排序法。本题要求将此方法用于字符串序列，
并对任意给定的K（<N），输出扫描完第K遍后的中间结果序列。

输入格式：
输入在第1行中给出N和K（1≤K<N≤100），此后N行，每行包含一个长度不超过10的、仅由小写英文字母组成的非空字符串。

输出格式：
输出冒泡排序法扫描完第K遍后的中间结果序列，每行包含一个字符串
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    unsigned N, K;
    cin >> N >> K;
    vector<string> vec;
    for (auto i = N; i != 0; i--)
    {
        string str;
        cin >> str;
        vec.push_back(str);
    }
    for (unsigned j = 1; j <= K; j++)
    {
        for (int i = 0; i < (N - j); i++)
        {
            if (vec[i] > vec[i + 1])
            {
                string tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
            }
        }
    }
    for (auto &i : vec)
    {
        cout << i << endl;
    }

    return 0;
}
// 字符串> >=等被重载了，可以比较