// Function to calculate the sum of numbers  from 1 to N.
#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "The sum of numbers from 1 to " << n << " is : " << sum(n) << endl;
    return 0;
}