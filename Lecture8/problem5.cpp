// WAF to print intersection of 2 arrays
#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {2, 4, 7, 9, 12};
    int arr2[5] = {7, 9, 15, 45, 70};
    cout <<"Intersection of arr1 and arr2 is : ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout<< arr1[i] << " ";
            }
        }
    }
    return 0;
}