//  program to remove space from a given string
#include <iostream>
#include <string>
using namespace std;

// TC : O(n) and SC:O(1)
// int main()
// {
//    string str;
//    cout << "Enter a string : ";
//    getline(cin, str);
//    int k = 0;
//    for (int i = 0; i < str.length(); i++)
//       if (str[i] != ' ')
//          str[k++] = str[i];

//    str.resize(k);
//    cout << str;
// }


// TC : O(n) and SC:O(n)
int main()
{
   string str, result = "";
   cout << "Enter a string :";
   getline(cin, str);

   for (int i = 0; i < str.size(); i++)
   {
      if (str[i] != ' ')
      {
         result = result + str[i];
      }
   }
   cout << result;
   return 0;
}