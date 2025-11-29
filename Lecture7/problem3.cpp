// WAF to reverse an integer n
#include <iostream>
using namespace std;

int reverseNumber(int n)
{

    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10; //get the last digit
        rev = rev * 10 + digit; // append the last digit to reveresed number
        n = n / 10; //remove the last digit
    }

    return rev;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int result = reverseNumber(num);
    cout << "Reversed Number : " << result << endl;
    return 0;
}