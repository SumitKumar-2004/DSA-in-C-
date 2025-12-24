// program to Reverse Number
#include <iostream>
using namespace std;
int main()
{
   int num, rem = 0, rev = 0;
   cout << "Enter a num : ";
   cin >> num;
   cout << "Before reverse : " << num << endl;
   while (num > 0)
   {
      rem = num % 10;
      rev = rev * 10 + rem;
      num = num / 10;
   }
   cout << "After reverse : " << rev;
}