// WAF to print all unique values in an array.
#include <iostream>
using namespace std;
int uniqueValues(int arr[], int size)
{
    bool isUnique;

    cout << "Unique elements are : ";
    for (int i = 0; i < size; i++)
    {
        isUnique = true;
        // check if element appear anywhere else
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 1, 4, 5, 2, 3, 4, 6, 7, 4, 3, 2};
    int size = sizeof(arr) / sizeof(int);
    uniqueValues(arr, size);
    return 0;
}