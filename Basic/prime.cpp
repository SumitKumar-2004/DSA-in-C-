// program to find Prime number
#include <iostream>
using namespace std;

bool isPrime(int val)
{
   if (val <= 1)
      return false; // 0 and 1 are not prime

   for (int i = 2; i <= val / 2; i++)
   {
      if (val % i == 0)
      {
         return false;
      }
   }
   return true;
}

int main()
{
   int val;
   cout << "Enter a number : ";
   cin >> val;

   if (isPrime(val))
      cout << val << " is a prime number";
   else
      cout << val << " is not a prime number";

   return 0;
}
