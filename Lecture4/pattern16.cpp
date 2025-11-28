//// Pyramid Alphabetical Pattern
/*
   A
  BBC
 CCCEE
DDDDGGG
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for left
        for (int j = 1; j <= i + 1; j++)
        {
            cout << ch;
        }
        // for right
        for (int j = i; j >= 1; j--)
        {
            cout << char(ch + i);
        }
        cout << endl;
    }

    return 0;
}