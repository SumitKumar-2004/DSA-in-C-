// Reverse Array two pointer approach : Time Complexity => O(n)
#include <iostream>
using namespace std;
void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5,12,42,2,64,4};
    int size = sizeof(arr)/sizeof(int);

    reverseArr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;







    // another way to solve this problem.

    // cout << "Before\n";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\nAfter\n";
    // for (int i = 6; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}