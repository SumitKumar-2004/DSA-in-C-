//  Find common elements between  two arrays
#include <iostream>
#include <vector>
#include <set>
using namespace std;
// int main()
// {
//    vector<int> array1 = {1, 2, 3, 4, 5, 6};
//    vector<int> array2 = {3, 4, 5, 6, 7, 8};
//    set<int> s;

//    for (int i = 0; i < array1.size(); i++)
//    {
//       s.insert(array1[i]);
//    }
//    cout << "Common elements : ";

//    for (int i = 0; i < array2.size(); i++)
//    {
//       if (s.find(array2[i]) != s.end())
//       {
//          cout << array2[i] << " ";
//       }
//    }

//    return 0;
// }

// using two pointers apporach SC:O(1) TC: O(n + m)
int main()
{
   vector<int> array1 = {1, 2, 3, 4, 5, 6};
   vector<int> array2 = {3, 4, 5, 6, 7, 8};
   int i = 0, j = 0;
   cout << "Common elements : ";
   while (i < array1.size() && j < array2.size())
   {
      if (array1[i] == array2[j])
      {
         cout << array1[i] << " ";
         i++;
         j++;
      }
      else if (array1[i] < array2[j])
      {
         i++;
      }
      else
      {
         j++;
      }
   }
}