// program to find duplicate characters in a string

#include <iostream>
#include <string>
using namespace std;

// Brute force approach : O(n^2)
// int main()
// {
//    string str;
//    cout << "Enter a string : ";
//    getline(cin, str);

//    for (int i = 0; i < str.length(); i++)
//    {
//       if (str[i] == '0' || str[i] == ' ')
//       {
//          continue;
//       }
//       int count = 1;
//       for (int j = i + 1; j < str.length(); j++)
//       {
//          if (str[i] == str[j])
//          {
//             count++;
//             str[j] = '0';
//          }
//       }
//       if (count > 1)
//       {
//          cout << str[i] << " -> " << count << endl;
//       }
//    }
// }

// optimized approach : O(n)
int main()
{
   string str;
   cout << "Enter a string: ";
   getline(cin, str);

   int freq[256] = {0};
   for (char c : str)
   {
      if (c != ' ')
         freq[(unsigned char)c]++;
   }

   cout << "Duplicate characters and their counts:\n";
   for (int i = 0; i < 256; ++i)
   {
      if (freq[i] > 1)
         cout << (char)i << " -> " << freq[i] << endl;
   }
   return 0;
}