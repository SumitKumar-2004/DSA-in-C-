// Search element in an Array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr = {21, 53, 5, 6, 8, 13, 15, 26};
   int target = 103;
   bool found = false;

   for (int i = 0; i < arr.size(); i++)
   {
      if (arr[i] == target)
      {
         cout << target << " is found at index : " << i;
         found = true;
         break;
      }
   }

   if (!found)
   {
      cout << target << " is not found in array.";
   }
}
