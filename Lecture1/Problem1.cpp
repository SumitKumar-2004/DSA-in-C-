//Calculate "Simple Interest" from principle(p), rate (r) and time(t)
#include <iostream>
using namespace std;

int main() {
    float p, r, t, si;

    cout << "Enter Principle Amount (P): ";
    cin >> p;

    cout << "Enter Rate of Interest (R): ";
    cin >> r;

    cout << "Enter Time (T in years): ";
    cin >> t;

    si = (p * r * t) / 100;

    cout << "Simple Interest = " << si << endl;

    return 0;
}


