// Single Number

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {4, 1, 2, 1, 2};
    int ans = 0;
    for (int val : vec)
    {
        ans = ans ^ val;
    }
    cout << "Unique value : " << ans;
    return 0;
}
