#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> vec{1,2,3};
    vector<int>::iterator it = vec.begin();
    int a = vec[1 + 1];
    cout << a;    

    return 0;
}