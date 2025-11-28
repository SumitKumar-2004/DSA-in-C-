// Butterfly pattern
/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *


*/

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // top left
    for (int i = 0; i < n; i++) // lines
    {
        // left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i = n; i >= 1; i--) // lines
    {
        // left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // rigth stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}