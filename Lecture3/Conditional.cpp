#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter num : ";
    cin >> num;
    // if (num > 0)
    // {
    //     cout << num << " is positive number.";
    // }
    // else if (num < 0)
    // {
    //     cout << num << " is negative number.";
    // }
    // else
    // {
    //     cout << num << " is zero.";
    // }

    // if (num % 2 == 0)
    // {
    //     cout << num << " is even";
    // }
    // else
    // {
    //     cout << num << " is odd";
    // }

    // int marks;
    // cout << "Enter marks : ";
    // cin >> marks;
    // if (marks >= 90)
    // {
    //     cout << "A\n";
    // }
    // else if (marks >= 80 && marks < 90)
    // {
    //     cout << "B\n";
    // }
    // else
    // {
    //     cout << "C\n";
    // }



    // ternary
    num > 0 ? cout<<"Positive" : cout<<"Negative";

    return 0;
}