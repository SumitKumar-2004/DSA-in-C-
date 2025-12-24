// Permutations of number

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int num;
   cout << "Enter a num : ";
   cin >> num;
   string data = to_string(num);

   sort(data.begin(), data.end());
   do
   {
      cout << data << endl;
   } while (next_permutation(data.begin(), data.end()));
}