// Find the smallest / laregest element in array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[6] = {5, 15, 22, 1, -15, 24};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
    }
    cout << "Smallest : " << smallest << " at index : " << smallestIndex << endl;
    cout << "Largest : " << largest << " at index : " << largestIndex << endl;
}
