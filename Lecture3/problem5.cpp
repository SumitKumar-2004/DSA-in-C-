// Sum of all numbers from 1 to N which are divisible by 3
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of " << n << " is : " << sum;
}
// 1 2 3 4 5 6 7 8 9
// 