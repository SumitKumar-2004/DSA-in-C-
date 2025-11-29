//WAP to convert Binary number to Decimal
#include<iostream>
using namespace std;
int binToDecimal(int binNum){
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans;//decimal form
}
int main(){
    int binNum = 110;
    cout << "Decimal of " << binNum << " is : " << binToDecimal(binNum) << endl;

    return 0;
}

//Some Common Numbers
/*
0 -> 0
1 -> 01
2 -> 10
3 -> 11
4 -> 100
5 -> 101
6 -> 110
7 -> 111
8 -> 1000
9 -> 1001
10-> 1010
*/