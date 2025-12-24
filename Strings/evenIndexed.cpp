// program to print even indexed characters
#include <iostream>
#include <string>
using namespace std;
int main()
{
   string str;
   cout << "Enter a string :";
   getline(cin, str);

   for (int i = 0; i < str.length(); i++)
   {
      if (i % 2 == 0)
      {
         cout << str[i] << " ";
      }
   }
}