// Check if a number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0) // non prime
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime number.";
    }
    else
    {
        cout << "Non prime number.";
    }
    return 0;
}