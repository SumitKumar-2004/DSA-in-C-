// program to determine if Two Strings are Anagrams

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool areAnagrams(string s1, string s2)
{
   if (s1.length() != s2.length())
   {
      return false;
   }
   sort(s1.begin(), s1.end());
   sort(s2.begin(), s2.end());

   return s1 == s2;
}
int main()
{
   string s1, s2;
   cout << "Enter string1 :";
   getline(cin, s1);
   cout << "Enter string2 :";
   getline(cin, s2);

   if (areAnagrams(s1, s2))
   {
      cout << s1 << " and " << s2 << " are anagrams string.";
   }
   else
   {
      cout << s1 << " and " << s2 << " are not an anagrams string.";
   }
   return 0;
}