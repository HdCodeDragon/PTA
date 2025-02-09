/*
输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。

输入格式：
输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。

输出格式：
在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。

输入样例：
Tomcat is a male ccatat
cat
输出样例：
Tom is a male
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int len2 = s2.size();
    for(int i = 0; i < s2.szie() ; i++)
    {
        for(int j = 0; j < s1.szie() ; j++)
        {
            if (s1[j] == s2[i])
            {
                
            }
            
        }
    }
    
    // cin >> s1 >> s2;

    return 0;
}