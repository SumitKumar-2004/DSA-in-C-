// program to find all permutations of a given string
//TC: O(n × n!) and SC:O(1)

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
   string str;
   cout << "Enter a string : ";
   getline(cin, str);

   sort(str.begin(), str.end());

   cout << "All permutations of " << str << endl;
   do
   {
      cout << str << endl;
   } while (next_permutation(str.begin(), str.end()));
   return 0;
}