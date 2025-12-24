// program to print unqiue characters
#include <iostream>
#include <string>
using namespace std;
// Brute force approach :  TC:O(n^2) and SC:O(1)
//  int main()
//  {
//     string str;
//     cout << "Enter a string : ";
//     getline(cin, str);

//    cout<<"Unique characters are : ";
//    for (int i = 0; i < str.length(); i++)
//    {
//       bool isUnique = true;
//       for (int j = 0; j < str.length(); j++)
//       {
//          if (i != j && str[i] == str[j])
//          {
//             isUnique = false;
//             break;
//          }
//       }
//       if (isUnique)
//       {
//          cout << str[i] << " ";
//       }
//    }
//    return 0;
// }

// Optimized Approach : TC:O(n) and SC:O(1)
int main()
{
   string str;
   cout << "Enter a string : ";
   getline(cin, str);

   int freq[256] = {0}; // ascii characters
   for (int i = 0; i < str.length(); i++)
   {
      freq[str[i]]++;
   }

   cout << "Unique characters are : ";
   for (int i = 0; i < str.length(); i++)
   {
      if (freq[str[i]] == 1)
      {
         cout << str[i] << " ";
      }
   }
}