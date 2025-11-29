/*
Bitwise operators, Data Types Modifiers

1)Bitwise And(&) --> 0 & 0 = 0
                   0 & 1 = 0
                   1 & 0 = 0
                   1 & 1 = 1
eg: a = 4 b = 8
    100    1000
    0100
    1000
  = 0000

2)Bitwise Or(|) --> 0 | 0 = 0
                    0 | 1 = 1
                    1 | 0 = 1
                    1 | 1 = 1
eg: a = 4 b = 8
    100    1000
    0100
    1000
  = 1100 = 12


3)Bitwise XOR(^) --> 0 ^ 0 = 0
                     0 ^ 1 = 1
                     1 ^ 1 = 0
                     1 ^ 0 = 1
    same -> 0
    diff -> 1

eg: a = 4 b = 8
    100    1000
    0100
    1000
  = 1100 = 12


 4) Bitwise left shift (<<)
    n = 4
    i = 1
    n << i
    4 << 1
    100 << 1
    1000 = 8


5) Bitwise Right Shift (>>)
    n = 4 //100
    i = 1
    n >> i
    4 >> 1
    100 >> 1
    10 = 2
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 8, n = 4, i = 1;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (n << i) << endl;
    cout << (n >> i) << endl;
    return 0;
}
