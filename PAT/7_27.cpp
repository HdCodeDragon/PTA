#include <iostream>
#include <vector>
using namespace std;
int main()
{
    unsigned N, K;
    cin >> N >> K;
    vector<int> vec;
    for (auto i = N; i != 0; i--)
    {
        int num = 0;
        cin >> num;
        vec.push_back(num);
    }

    for (auto j = 1; j <= K; j++)
    {
        for (int i = 0; i < (vec.size() - j); i++)
        {
            if (vec[i] > vec[i + 1])
            {
                int tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (i == 0)
        {
            cout << vec[i];
        }
        else
        {
            cout << " " << vec[i];
        }
    }
    return 0;
}