// Reverse a vector using function

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverseVector(vector<int> &nums)
{

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        reverse(nums.begin(), nums.end());
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    reverseVector(nums);

    cout << "Reversed Vector: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
