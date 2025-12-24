// program to find Armstrong Number
#include <iostream>
using namespace std;
int main()
{
   int num, arm = 0, a,originalNum;
   cout << "Enter a number : ";
   cin >> num;

   originalNum = num;
   while (num > 0)
   {
      a = num % 10;
      num = num / 10;
      arm = arm + a * a * a;
   }
   if (arm == originalNum)
   {
      cout << originalNum << " is an armstrong number.";
   }
   else
   {
      cout << originalNum << " is not an armstrong number.";
   }
}