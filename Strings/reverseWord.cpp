// program to reverse each word of a given string
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// using for loop
// int main()
// {
//    string str;
//    cout << "Enter a string  :";
//    getline(cin, str);
//    string word = "";
//    for (int i = 0; i <= str.length(); i++)
//    {
//       if (str[i] == ' ' || i == str.length())
//       {
//          for (int j = word.length() - 1; j >= 0; j--)
//          {
//             cout << word[j];
//          }
//          cout<<" ";
//          word = "";
//       }
//       else
//       {
//          word += str[i];
//       }
//    }
// }

// using built in reverse method

int main()
{
   string str;
   cout << "Enter a string  :";
   getline(cin, str);
   string word = "";
   int start = 0;
   for (int i = 0; i <= str.length(); i++)
   {
      if (str[i] == ' ' || i == str.length())
      {
         reverse(str.begin() + start, str.begin() + i);
         start = i + 1;
      }
   }
   cout << "Reversed each word: " << str;
   return 0;
}