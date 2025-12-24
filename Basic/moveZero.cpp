// Move Zeros to End
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> nums = {
       1,
       4,
       2,
       0,
       5,
       0,
       3,
       0,
       0,
       2,
       3,
       5,
       7,
   };
   int slow = 0;
   for (int i = 0; i < nums.size(); i++)
   {
      if (nums[i] != 0)
      {
         nums[slow++] = nums[i];
      }
   }
   while (slow < nums.size())
   {
      nums[slow++] = 0;
   }
   for (int x : nums)
   {
      cout << x << " ";
   }
}