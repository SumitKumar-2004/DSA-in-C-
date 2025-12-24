// program to count the occurance of each word in a string
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
   string str;
   cout << "Enter a string : ";
   getline(cin, str);

   unordered_map<string, int> freq;
   string word = "";

   for (int i = 0; i <= str.length(); i++)
   {
      if (i == str.length() || str[i] == ' ')
      {
         if (word != " ")
         {
            freq[word]++;
            word = "";
         }
      }
      else
      {
         word += str[i];
      }
   }
   cout << "Occurances of word\n";
   for (auto &p : freq)
   {
      cout << p.first << "->" << p.second << endl;
   }
}