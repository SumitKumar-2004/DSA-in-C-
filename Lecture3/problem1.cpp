// Find character lowercase and uppercase
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;
    // if(ch >= 'a' && ch <= 'z'){
    //     cout<<ch<<" is lowercase.";
    // }else{
    //     cout<<ch<<" is uppercase.";
    // }

    if (ch >= 65 && ch <= 90)
    {
        cout << ch << " is uppercase.";
    }
    else
    {
        cout << ch << " is lowercase.";
    }
    return 0;
}