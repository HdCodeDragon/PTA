#include <iostream>
// #include <array>
#include <vector>
template <typename T, std::size_t N>
void reserse(std::vector<T> &vec, int begin, int end)
{
    while (end > begin)
    {
        vec.swap(begin, end);
        begin++;
        end--;
    }
}
int main()
{
    unsigned int N, M;
    std::cin >> N >> M;
    std::vector<int> vec;
    while ((N--) != 0)
    {
        int number;
        std::cin >> number;
        vec.push_back(number);
    }
    reserse(vec, 0, N - 1);

    // array不能用变量  动态创建的话用new或者vector
    //  std::array<unsigned int, N> arr;

    return 0;
}