// Alphabetic Square Pattern
/*
A B C 
D E F
G H I
J K L
*/
#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}