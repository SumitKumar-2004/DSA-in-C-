// Find the largest and smallest element in an Array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> arr = {3, 5, 6, 12, 3, 5, 7, 9};
   int smallest = arr[0];
   int largest = arr[0];
   for (int i = 0; i < arr.size(); i++)
   {
      if (arr[i] > largest)
      {
         largest = arr[i];
      }
      if (arr[i] < smallest)
      {
         smallest = arr[i];
      }
   }

   cout << "Smallest : " << smallest << endl;
   cout << "Largest : " << largest << endl;
}