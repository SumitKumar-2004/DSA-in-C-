// WAP to print all prime numbers from 1 to N.
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    // 1 is not prime
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        // check if the current number is prime or not
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}