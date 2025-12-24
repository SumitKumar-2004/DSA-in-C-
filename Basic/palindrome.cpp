// program to find Palindrome number
#include <iostream>
using namespace std;
int main()
{
   int num, rev = 0, rem = 0;
   cout << "Enter a number : ";
   cin >> num;
   int originalNum = num;
   while (num > 0)
   {
      rem = num % 10;
      rev = rev * 10 + rem;
      num = num / 10;
   }
   if (originalNum == rev)
   {
      cout << originalNum << " is a plaindrome number.";
   }
   else
   {
      cout << originalNum << " is not a plaindrome number.";
   }
}