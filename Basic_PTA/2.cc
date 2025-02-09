    #include <iostream>
    #include <string>
    using namespace std;
    int main()
    {
        string str;
        cin >> str;
        unsigned sum = 0;
        for (auto &i : str)
        {
            sum += static_cast<unsigned>(i - '0');
        }
        cout << sum;
        return 0;
    }

// 枚举一个汉字解决