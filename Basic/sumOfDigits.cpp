//  program to calculate the sum of digits of a number

#include <iostream>
using namespace std;
int main()
{
   int num, rev = 0, rem = 0, sum = 0, originalNum ;
   cout << "Enter a num :";
   cin >> num;
   originalNum  = num;
   while (num > 0)
   {
      rem = num % 10;
      sum = sum + rem;
      num = num / 10;
   }
   cout << "Sum of digits of " << originalNum << " is :" << sum;
}