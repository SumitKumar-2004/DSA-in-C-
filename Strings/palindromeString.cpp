// program to find if a string is Palindrome
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// this gives TC:O(n) and SC:O(n)
//  int main()
//  {
//     string str;
//     cout << "Enter a string : ";
//     getline(cin, str);

//    string rev = str;
//    reverse(rev.begin(), rev.end());
//    if (str == rev)
//    {
//       cout << str << " is a palindrome srting.";
//    }
//    else
//    {
//       cout << str << " is not a palindrome string.";
//    }
//    return 0;
// }

// more optimal aaaproach using two pointers TC:O(n) and SC:O(1)
int main()
{
   string str;
   cout << "Enter a string :";
   getline(cin, str);
   int i = 0, j = str.length() - 1;
   bool isPlaindrome = true;

   while (i < j)
   {
      if (tolower(str[i]) != tolower(str[j]))
      {
         isPlaindrome = false;
         break;
      }
      i++;
      j--;
   }

   if (isPlaindrome)
   {
      cout << str << " is palindrome.";
   }
   else
   {
      cout << str << " is not a palindrome.";
   }
}