// Linear Search using vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {4, 1, 2, 1, 2, 13, 2, 45, 65};
    int target = 13;
    bool found = false;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            cout << "Target " << target << " is found on idx : " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Target " << target << " is not found in the vector." << endl;
    }
    return 0;
}