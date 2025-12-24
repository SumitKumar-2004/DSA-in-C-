//  program to print each letter twice from a given string
#include <iostream>
#include <string>
using namespace std;
// TC: O(n) & SC:O(n)
//  int main(){
//     string str,result="";
//     cout<<"Enter a string : ";
//     getline(cin,str);

//    for (int i = 0; i < str.size(); i++)
//    {
//       result.push_back(str[i]);
//       result.push_back(str[i]);
//    }
//    cout<<result;
// }

// TC:O(n) & SC:O(1)
int main() {
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int originalSize = str.size();

    str.resize(originalSize * 2);//store the size 

    int i = originalSize - 1;
    int j = 2 * originalSize - 1;

    while (i >= 0) {
        str[j--] = str[i];
        str[j--] = str[i];//second copy
      //   str[j--] = str[i];//third copy
        i--;
    }

    cout << str;
    return 0;
}
