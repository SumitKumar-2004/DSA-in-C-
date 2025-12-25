// Remove duplicates from an ArrayList
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   vector<string> name = {"amit", "sumit", "anil", "ankit", "anil", "sumit"};
   sort(name.begin(), name.end());
   int j = 0; // pointer

   for (int i = 1; i < name.size(); i++)
   {
      if (name[i] != name[j])
      {
         j++;
         name[j] = name[i];
      }
   }
   cout << "After removing duplicates: ";
   for (int i = 0; i <= j; i++)
   {
      cout << name[i] << " ";
   }
}