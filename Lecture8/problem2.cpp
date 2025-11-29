// WAF to calculate the sum & product of all numbers in an array
#include <iostream>
using namespace std;
int calSumProd(int arr[], int size)
{
    int sum = 0, prod = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "Sum is : " << sum << endl;
    cout << "Product is : " << prod << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    calSumProd(arr, size);
    return 0;
}