#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string lowerStr = "", upperStr = "";

    for (int i = 0; i < str.size(); i++) {
        if (islower(str[i])) {
            lowerStr += str[i]; // append to lowercase string
        } else if (isupper(str[i])) {
            upperStr += str[i]; // append to uppercase string
        }
    }

    cout << lowerStr << endl; // abcde
    cout << upperStr << endl; // BACED

    return 0;
}
