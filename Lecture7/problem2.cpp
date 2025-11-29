// WAP to check the number is power of 2
#include <iostream>
using namespace std;
int main()
{
    int n = 16;

    // using bits
    bool isPower = false;
    if ((n > 0) && ((n & (n - 1)) == 0))
    {
        isPower = true;
    }
    else
    {
        isPower = false;
    }

    // using for loop

    // bool isPower = false;
    // for (int i = 1; i <= n; i *= 2)
    // {
    //     if (i == n)
    //     {
    //         isPower = true;
    //         break;
    //     }
    // }
    if (isPower)
    {
        cout << n << " is a power of 2." << endl;
    }
    else
    {
        cout << n << " is not a power of 2." << endl;
    }
}