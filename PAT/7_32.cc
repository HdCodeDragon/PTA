/*
测试输入包含一个测试用例，在一行内给出总长度不超过500 000的字符串。
字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用若干个空格分开。

输出格式：
每个测试用例的输出占一行，输出倒序后的句子，并且保证单词间只有1个空格。

输入样例：
Hello World   Here I Come
输出样例：
Come I Here World Hello
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    vector<string> vec_str;
    int flag = 0;
    // 开始就是空格，需要判断空格前是否不是空格,格式化字符串
    while (str[flag] == ' ')
    {
        str = str.substr(flag + 1);
    }   
    while (str != "\0")
    {
        if ((str[flag] != ' ') && (str[flag] != '\0'))
        {
            flag++;
        }
        else if (str[flag] == ' ')
        {
            vec_str.push_back(str.substr(0, flag));
            str = str.substr(flag);
            flag = 0;
            while (str[flag] == ' ')
            {
                flag++;
                str = str.substr(flag);
                flag = 0;
            }
        }
        else if (str[flag] == '\0')
        {
            vec_str.push_back(str.substr(0, flag));
            str = str.substr(flag);
        }
    }
    // i--后无符号整数报错
    for (int i =static_cast<int> (vec_str.size() - 1); i >= 0; i--)
    {
        if (i == 0)
        {
            cout << vec_str[i];
        }
        else
        {
            cout << vec_str[i] << " ";
        }
    }

    return 0;
}

// 并不用 int i = (static_cast<int> (vec_str.size()) - 1);  用decltype(vec.size()) i = vec.size();  
// int i = (vec_str.size() - 1)发生了隐式转换，用size_t更好 
/*
    // 去除前导和尾随空格（更高效的方法）
    size_t start = 0, end = str.size() - 1;
    while (start <= end && str[start] == ' ') ++start;
    while (end >= start && str[end] == ' ') --end;
    str = str.substr(start, end - start + 1);
*/