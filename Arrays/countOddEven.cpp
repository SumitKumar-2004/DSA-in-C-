// program to count Odd and Even number from given array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int odd = 0, even = 0;

   for (int i = 0; i < arr.size(); i++)
   {
      if (arr[i] % 2 == 0)
      {
         even++;
      }
      if (arr[i] % 2 != 0)
      {
         odd++;
      }
   }
   cout << "Odd numbers count : " << odd << endl;
   cout << "Even numbers count : " << even << endl;
}