// 个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M
// 可以用多余数组的情况下，我们将右移的内容放入新数组即可
#include <iostream>
#include <vector>
#include <algorithm>
template <typename T>
void reserse(std::vector<T> &vec, int begin, int end)
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
    unsigned int N, M;
    std::cin >> N >> M;
    std::vector<int> vec;
    unsigned int originalN = N;
    // forcycle simplify input
    /*
    while ((originalN--) != 0)
    {
        int number;
        std::cin >> number;
        vec.push_back(number);
    }
    */
    // Value of N N-- 0--
    for (int i = 0; i < N; i++)
    {
        int number;
        std::cin >> number;
        vec.push_back(number);
    }

    // use a variable to simplify M % N
    reserse(vec, 0, vec.size() - 1);
    reserse(vec, 0, (M % N) - 1);
    reserse(vec, (M % N), (vec.size() - 1));
    for (int i = 0; i < (vec.size() - 1); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << vec.back();
    // std::cout << std::endl;
    // array不能用变量  动态创建的话用new或者vector
    //  std::array<unsigned int, N> arr;
    return 0;
}