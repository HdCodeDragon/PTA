/*
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：
测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。
字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。

输出格式：
每个测试用例的输出占一行，输出倒序后的句子。
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
template <typename T>
void reverse(std::vector<T> &vec, int begin, int end)
{
    while (end > begin)
    {
        //  Using vec.at() can add boundry check
        std::swap(vec.at(begin), vec.at(end));
        begin++;
        end--;
    }
}
int main()
{
    // 通过设计寻找空字符来截断字串。
    std::string str;
    std::getline(std::cin, str);
    std::vector<std::string> vec_str;
    while (str.find(" ", 0) != std::string::npos)
    {
        auto number = str.find(" ", 0);
        std::string temp_str = str.substr(0, number);
        vec_str.push_back(temp_str);
        str = str.substr((number + 1), (str.size() - number));
    }
    vec_str.push_back(str);
    reverse(vec_str, 0, (vec_str.size() - 1));
    for (auto i = 0; i < (vec_str.size() - 1); i++)
    {
        std::cout << vec_str.at(i) << " ";
    }
    std::cout << vec_str.back();
    return 0;
}