// program – input array was given [ 1,1,2,2,3,4,5,5,6,6], Output – [3,4]
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr = {1, 1, 2, 2, 3, 4, 5, 5, 6, 6};

   for (int i = 0; i < arr.size(); i++)
   {
      // check if current element is unique
      if ((i == 0 || arr[i] != arr[i - 1]) &&
          (i == arr.size() - 1 || arr[i] != arr[i + 1]))
      {
         cout << arr[i] << " ";
      }
   }
}
