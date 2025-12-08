#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// custom compartor
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
   if (p1.second < p2.second)
      return true;

   if (p1.second > p2.second)
      return false;

   if (p1.first < p2.first)
      return true;
   else
      return false;
}
int main()
{
   // int arr[5] = {3, 5, 1, 8, 2};
   // vector<int> vec = {3, 5, 1, 8, 2};

   vector<pair<int, int>> vec = {{13, 26}, {35, 41}, {15, 41}, {43, 64}};

   // sort(arr, arr + 5);
   // sort(vec.begin(),vec.end(),greater<int>());
   sort(vec.begin(), vec.end(), comparator);
   for (auto p : vec)
   {
      cout << p.first << " " << p.second << endl;
   }

   // Next Permutation
   string s = "bca";
   // next_permutation(s.begin(), s.end());
   prev_permutation(s.begin(), s.end());

   cout << s << endl;

   cout << endl;
   return 0;
}