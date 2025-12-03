// Peak Index in Mountain Array
#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &A)
{
   int start = 1, end = A.size() - 2;
   while (start <= end)
   {
      int mid = start + (end - start) / 2;

      if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
      {
         return mid;
      }
      else if (A[mid - 1] < A[mid])
      { // right 
         start = mid + 1;
      }
      else
      { // left
         end = mid - 1;
      }
   }
   return -1;
}
int main()
{
   vector<int> arr = {0, 10, 55, 2};
   cout << "Index of peak element in arr : " << peakIndexInMountainArray(arr);
   return 0;
}