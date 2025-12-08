// Chech for valid palindrome string
// eg : madam, racecar
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   string str = "racecar";
   string rev = str;
   reverse(rev.begin(), rev.end());
   if (str == rev)
   {
      cout << str << " is a palindrome string.";
   }
   else
   {
      cout << str << " is a not a palindrome string.";
   }
}