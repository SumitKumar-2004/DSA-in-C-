// Inverted Alphabetical Triangle Pattern
/*
AAAA
 BBB
  CC
   D
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++) // lines
    {
        char ch = 'A' + i;
        for (int j = 0; j < i; j++) // spaces
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) // print
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}