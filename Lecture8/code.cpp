#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {99, 100, 54, 36, 88};
    for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}