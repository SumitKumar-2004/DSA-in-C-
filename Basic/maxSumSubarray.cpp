// Maximum Sum Subarray of Size K (Sliding Window)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> nums = {1, 2, 3, 4, 5};
   int k = 3;
   int sum = 0, maxSum = 0;

   for (int i = 0; i < k; i++)
   {
      sum += nums[i];
   }
   maxSum = sum;

   for (int i = k; i < nums.size(); i++)
   {
      sum += nums[i] - nums[i - k]; // sliding window
      maxSum = max(maxSum, sum);
   }
   cout << maxSum;
}