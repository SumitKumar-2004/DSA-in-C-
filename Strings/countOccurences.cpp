// program to count Occurrences of Each Character in String : O(n)

#include <iostream>
#include <string>
using namespace std;
int main()
{
   string str;
   cout << "Enter a string : ";
   getline(cin, str);
   int freq[256] = {0}; // array to store count of each words
   for (int i = 0; i < str.length(); i++)
   {
      freq[(unsigned char)str[i]]++;
   }

   // print characters
   cout << "Occurances :\n";
   for (int i = 0; i < 256; i++)
   {
      if (freq[i] && i != ' ')
      {
         cout << (char)i << "->" << freq[i] << endl;
      }
   }
}
