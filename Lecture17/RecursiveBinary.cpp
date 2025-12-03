// Recursive code for binary search
// Time Complexity : O(log n)
// Space Complexity : O(1)
#include <iostream>
#include <vector>
using namespace std;
int recBinarySearch(vector<int> arr, int tar, int start, int end)
{
   if (start <= end)
   {
      int mid = start + (end - start) / 2;
      if (tar > arr[mid]) // 1st half
      {
         return recBinarySearch(arr, tar, mid + 1, end);
      }
      else if (tar < arr[mid]) // 2nd half
      {
         return recBinarySearch(arr, tar, start, mid - 1);
      }
      else
      {
         return mid;
      }
   }
   return -1;
}
int main()
{
   vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd size array
   int tar1 = 0, start = -1, end = 12;
   cout << "Index : " << recBinarySearch(arr1, tar1, start, end) << endl;

   vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even size array
   int tar2 = 5, start2 = -1, end2 = 12;
   cout << "Index : " << recBinarySearch(arr2, tar2, start2, end2);
}