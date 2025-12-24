// Find two numbers in sorted array that sum to target.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> nums = {1, 2, 3, 4, 5, 6};
   int target = 6;
   int start = 0, end = nums.size() - 1;
   while (start < end)
   {
      int sum = nums[start] + nums[end];
      if (sum == target)
      {
         cout << nums[start] << " " << nums[end];
         break;
      }
      else if (sum > target)
      {
         end--;
      }
      else
      {
         start++;
      }
   }
}