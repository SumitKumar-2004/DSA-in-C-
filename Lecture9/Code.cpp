#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec;//size = 0
    // vector<int> vec = {1,2,3};
    // vector<int> vec(5, 3);
    // cout<<vec[0];
    // cout<<vec[1];
    // cout<<vec[2];

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    // cout << "size = " << vec.size() << endl;

    // for (char val : vec)
    // {
    //     cout << val << endl;
    // }

    vector<int> vec;
    cout << "size before = " << vec.size() << endl;
    vec.push_back(30);//add element to vector
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);

    cout << "size after= " << vec.size() << endl;
    vec.pop_back();// remove the last element

    cout<<"Front : "<<vec.front()<<endl;

    cout<<"Back : "<<vec.back()<<endl;

    cout<<"Value at idx 2 : "<<vec.at(2)<<endl;

    for (int val : vec)
    {
        cout << val << endl;
    }

    return 0;
}