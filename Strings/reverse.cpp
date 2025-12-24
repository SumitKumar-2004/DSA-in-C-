// program to reverse a string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// using for loop
//  int main()
//  {
//     string str, rev = "";
//     cout << "Enter a string : ";
//     getline(cin, str);

//    for (int i = str.length() - 1; i >= 0; i--)
//    {
//       rev += str[i];
//    }
//    cout << "Reversed String : " << rev;
//    return 0;
// }

// using built in reverse method
// int main()
// {
//    string str;
//    cout << "Enter a string : ";
//    getline(cin, str);

//    reverse(str.begin(), str.end());
//    cout << "Reversed String : " << str;
//    return 0;
// }

// using swap
int main()
{
   string str;
   cout << "Enter a string : ";
   getline(cin, str);

   int start = 0;
   int end = str.length() - 1;

   while (start < end)
   {
      swap(str[start], str[end]);
      start++;
      end--;
   }
   cout << "Reversed String : " << str;
   return 0;
}