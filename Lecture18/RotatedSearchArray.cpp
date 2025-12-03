// Search in rotated sorted
#include <iostream>
#include <vector>
using namespace std;
int searchInRotatedArray(vector<int> A, int tar)
{
   int start = 0, end = A.size() - 1;
   while (start <= end)
   {
      int mid = start + (end - start) / 2;
      if (A[mid] == tar)
      {
         return mid;
      }
      if (A[start] <= A[mid]) // left sorted
      {
         if (A[start] <= tar && tar <= A[mid])
         {
            end = mid - 1;
         }
         else
         {
            start = mid + 1;
         }
      }
      else
      { // right sorted
         if (A[mid] <= tar && tar <= A[end])
         {
            start = mid + 1;
         }
         else
         {
            end = mid - 1;
         }
      }
   }
   return -1;
}

int main()
{
   vector<int> arr1 = {4, 5, 6, 7,8,9, 0, 1, 2};
   int tar = 9;
   cout << "Index : " << searchInRotatedArray(arr1, tar);
}