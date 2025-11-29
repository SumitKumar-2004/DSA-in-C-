// WAF to  swap th max &  min number of array
#include <iostream>
#include <climits>
using namespace std;
int swapMinMax(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Before swap\n";
    cout << "Smallest : " << smallest << " and largest : " << largest << endl;
    swap(smallest, largest);
    cout << "After swap\n";
    cout << "Smallest : " << smallest << " and largest : " << largest << endl;
}
int main()
{
    int arr[] = {1, 4, 3, 6, 12, -87, 3, 43};
    int size = sizeof(arr) / sizeof(int);
    swapMinMax(arr, size);
    return 0;
}