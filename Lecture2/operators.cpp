// operators in cpp
// 1) Arithmetic + - * / %
// 2) Relational < <= >= > == !=
// 3) Logical OR(||) AND(&&) NOT(!)
// 4) Unary  Increment(++) and Decrement(--)
#include <iostream>
using namespace std;
int main()
{
    // int a = 5, b = 8;
    // cout << "Sum : " << (a + b) << endl;
    // cout << "Diff : " << (a - b) << endl;
    // cout << "Mul : " << (a * b) << endl;
    // cout << "Div : " << (a / b) << endl;
    // cout << "Rem : " << (a % b) << endl;

    // cout << (3 > 5) << endl;
    // cout << (3 < 5) << endl;
    // cout << (3 >= 5) << endl;
    // cout << (3 <= 5) << endl;
    // cout << (3 != 5) << endl;
    // cout << (3 == 5) << endl;

    // cout << !(3 > 5) <<endl;

    // int a = 10;
    // int b = a++; // kaam : update
    // cout << "b = " << b << endl;
    // cout << "a = " << a << endl;


    // int a = 10;
    // int b = ++a; // update -> kaam
    // cout << "b = " << b << endl;
    // cout << "a = " << a << endl;


    // int a = 10;
    // int b = a--; // kaam : update
    // cout << "b = " << b << endl;
    // cout << "a = " << a << endl;
    
    int a = 10;
    int b = --a; // update -> kaam
    cout << "b = " << b << endl;
    cout << "a = " << a << endl;

    return 0;
}