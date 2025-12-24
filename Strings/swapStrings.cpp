// program to swap two string without using 3rd variable
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// int main()
// {
//    string str1, str2;
//    cout << "Enter a string 1: ";
//    getline(cin, str1);
//    cout << "Enter a string 2: ";
//    getline(cin, str2);

//    cout << "Befor swaping : ";
//    cout << str1 << " :" << str2 << endl;

//    swap(str1, str2);
//    cout << "After swaping : ";

//    cout << str1 << " :" << str2;
// }

int main()
{
   string str1, str2;
   cout << "Enter a string 1: ";
   getline(cin, str1);
   cout << "Enter a string 2: ";
   getline(cin, str2);

   cout << "Befor swaping : ";
   cout << str1 << " :" << str2 << endl;

   // sumit kumar
   str1 = str1 + str2;//sumit kumar
   str2 = str1.substr(0,str1.length() - str2.length());//sumit
   str1 = str1.substr(str2.length());//kumar

   cout << "After swaping : ";
   cout << str1 << " :" << str2;
}