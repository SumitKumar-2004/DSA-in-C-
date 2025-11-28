// Calculate the sum of digits of a number
// Eg : 145 -> 1 + 4 + 5 = 10
// step 1 : num % 10 => remainder => digit
// step 2 : num = num / 10
// step 3 :
#include <iostream>
using namespace std;
int main()
{
    int num, digitSum = 0;

    cout << "Enter a number : ";
    cin >> num;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;
        digitSum += lastDig;
    }

    cout << "Sum : " << digitSum;
    return 0;
}