// Vector iterators
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> vec = {1, 2, 3, 4, 5};
   // vector<int>::iterator it;
   // forward iterator
   for (auto it = vec.begin(); it != vec.end(); it++)
   {
      cout << *(it) << " ";
   }
   cout << endl;

   // reverse iterator
   // vector<int>::reverse_iterator it;
   for (auto it = vec.rbegin(); it != vec.rend(); it++)
   {
      cout << *(it) << " ";
   }

   cout << endl;
}