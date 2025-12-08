// Pair in cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   pair<int, int> p = {2, 4};
   pair<char, int> p2 = {'s', 34};
   pair<int, pair<char, int>> p3 = {1, {'a', 54}};
   cout << p.first << endl;
   cout << p.second << endl;
   cout << p2.first << " " << p2.second << endl;
   cout << p3.first << endl;
   cout << p3.second.first << endl;
   cout << p3.second.second << endl;

   // pair of vectors
   cout<<"Vector pairs : ";
   vector<pair<int, int>> vec = {{23, 34}, {45, 56}, {67, 78}};
   for (pair<int, int> p : vec)
   {
      cout << p.first << " " << p.second << endl;
   }
   return 0;
}