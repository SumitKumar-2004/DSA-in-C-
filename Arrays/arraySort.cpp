// Sort an array without using in-built method
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> array = {2, 4, 2, 3, 4, 6, 4, 5, 543, 2, 3};
   for (int i = 0; i < array.size() - 1; i++)
   {
      int minIndex = i;
      for (int j = i + 1; j < array.size(); j++)
      {
         if (array[j] < array[minIndex])
         {
            minIndex = j;
         }
      }
      int temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
   }
   for (int i = 0; i < array.size(); i++)
   {
      cout << array[i] << " ";
   }
}