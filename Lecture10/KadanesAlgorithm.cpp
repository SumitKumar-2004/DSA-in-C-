// Maximum Subarray Sum
// Bruteforce Approach
// Kadane's algoroithm

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};
    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = st; end < n; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // bruteforce approach
    // int maxSum = INT16_MIN;
    // for (int st = 0; st < n; st++)
    // {
    //     int currSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout << "max subarray sum : " << maxSum;

    // Kadane's algoroithm
    vector<int> nums = {3,-4,5,4,-1,7,-8};
    int currSum = 0, maxSum = INT16_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << currSum;

    return 0;
}