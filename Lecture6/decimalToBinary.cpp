// WAP to convert decimal numbers to binary
#include <iostream>
using namespace std;

int decimalToBinary(int decNum)
{
    int ans = 0, pow = 1, rem;
    while (decNum > 0)
    {
        rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans; // return binary
}
int main()
{
    // int decNum = 50;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Binary of " << i << " is : " << decimalToBinary(i) << endl;
    }
    return 0;
}
