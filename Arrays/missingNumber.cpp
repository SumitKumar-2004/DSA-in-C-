// Find the missing number in an Array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> arr = {1,5, 6}; // missing is 2,3,4
   int missing = 1;
   for (int i = 0; i < arr.size(); i++)
   {
      cout << arr[i] << " ";
   }

   for (int i = 0; i < arr.size(); i++)
   {
      while(arr[i] != missing)
      {
         cout << "\nMissing value is : " << missing << endl;
         missing++;
      }
      missing++;
   }
}