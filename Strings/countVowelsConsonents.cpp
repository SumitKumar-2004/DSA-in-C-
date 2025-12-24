#include <iostream>
#include <string>
#include <cctype>   
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);   // convert to lowercase
        if (ch >= 'a' && ch <= 'z') { // consider only letters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << " and Consonants: " << consonants 
         << " in \"" << str << "\"." << endl;

    return 0;
}
