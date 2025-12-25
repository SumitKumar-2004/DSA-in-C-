// Remove duplicates from an Array
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
// int main()
// {
//    int arr[] = {2, 3, 5, 6, 7, 5, 7, 6};
//    set<int> s;
//    for (int i = 0; i < 8; i++)
//    {
//       s.insert(arr[i]);
//    }
//    cout << "unique elements :";
//    for (int x : s)
//    {
//       cout << x << " ";
//    }
// }

// using two pointers apporach
int main()
{
   vector<int> arr = {12, 4, 5, 6, 23, 4, 5, 12};

   sort(arr.begin(), arr.end());
   int j = 0; // pointer

   for (int i = 1; i < arr.size(); i++)
   {
      if (arr[i] != arr[j])
      {
         j++;
         arr[j] = arr[i];
      }
   }
   cout << "After removing duplicates : ";
   for (int i = 0; i <= j; i++)
   {
      cout << arr[i] << " ";
   }
}