// Homework
/*
6  => 0110
10 => 1010
   => 0010 => 2
   => 1110 => 14
   => 1100 => 12

10 << 2
1010 << 10
101000 => 40


10 >> 1
1010 >> 1
101 => 5


*/
#include <iostream>
using namespace std;
int main()
{
    int n = 6, i = 10;
    cout << (n & i) << endl;
    cout << (n | i) << endl;
    cout << (n ^ i) << endl;
    cout << (10 << 2) << endl;
    cout << (10 >> 1) << endl;
}