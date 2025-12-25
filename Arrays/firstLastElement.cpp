// Find first and last element of Arraylist
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<string> data = {"aman", "ravi", "sumit", "raj", "pankaj"};

   cout << data[0] << endl;
   cout << data[data.size() - 1] << endl;
}