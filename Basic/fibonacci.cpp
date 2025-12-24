// program to find Fibonacci series upto a given number range
#include <iostream>
using namespace std;
int main()
{
   int num;
   cout << "Enter a num : ";
   cin >> num;
   int first = 0, second = 1, next;
   cout << first << " " << second << " ";
   for (int i = 2; i <= num; i++)
   {
      next = second + first;
      cout << next << " ";
      first = second;
      second = next;
   }
}