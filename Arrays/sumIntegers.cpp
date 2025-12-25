// Array consists of integers and special characters,sum only integers
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;
int main()
{
   vector<string> arr = {"5", "2", "9", "a", "1", "6", "#", "3"};

   int sum = 0;

   for (int i = 0; i < arr.size(); i++)
   {
      if (isdigit(arr[i][0]))
      {
         sum += stoi(arr[i]);//stoi stands for string to integer
      }
   }
   cout << "Sum of only integers value is  : " << sum;
}