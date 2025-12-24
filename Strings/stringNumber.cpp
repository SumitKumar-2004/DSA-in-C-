// program to gives two Output: “Subburaj”, “123” for the Input String Str = “Subbu123raj”
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
   string str;
   cout << "Enter a string : ";
   getline(cin, str);

   string data = "",number;

   for (int i = 0; i < str.size(); i++)
   {
      if (isdigit(str[i]))
      {
         number += str[i];
      }
      else
      {
         data += str[i];
      }
   }
   cout << number << endl;
   cout << data << endl;
}