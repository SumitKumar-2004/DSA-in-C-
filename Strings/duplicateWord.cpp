// program to find duplicate word in a string
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Brute force approach : O(n^2)
// int main()
// {
//    string str;
//    cout << "Enter a string : ";
//    getline(cin, str);

//    string words[100];
//    int wordCount = 0;
//    string temp = "";
//    // split words from string by space
//    for (int i = 0; i <= str.length(); i++)
//    {
//       if (str[i] == ' ' || i == str.length())
//       {
//          words[wordCount++] = temp;
//          temp = "";
//       }
//       else
//       {
//          temp += str[i];
//       }
//    }
//    for (int i = 0; i < wordCount; i++)
//    {
//       if (words[i] == "0")
//       {
//          continue;
//       }
//       int count = 1;
//       for (int j = i + 1; j < wordCount; j++)
//       {
//          if (words[i] == words[j])
//          {
//             count++;
//             words[j] = "0"; // mark visited
//          }
//       }
//       if (count > 1)
//       {
//          cout << words[i] << "->" << count << endl;
//       }
//    }
// }

// Optimized approach : O(n)
int main()
{
   string str;
   cout << "Enter a string: ";
   getline(cin, str);

   unordered_map<string, int> freq;
   string temp = "";

   // Split and count
   for (int i = 0; i <= str.length(); i++)
   {
      if (str[i] == ' ' || i == str.length())
      {
         freq[temp]++;
         temp = "";
      }
      else
         temp += str[i];
   }

   cout << "\nDuplicate words:\n";
   for (auto &w : freq)
   {
      if (w.second > 1)
         cout << w.first << " -> " << w.second << endl;
   }
}