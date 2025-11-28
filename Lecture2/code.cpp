// Data Types
// Primitive Data Types
// int      -> 4Bytes
// char     -> 1Byte
// float    -> 4Bytes
// boolean  -> 1Byte
// double   -> 8Bytes


// #include <iostream>
// using namespace std;
// int main()
// {
//     int age = 22;
//     char grade = 'a';
//     float PI = 3.14f;
//     bool isSafe = false;
//     cout << age <<endl;
//     return 0;
// }


// Type Casting -> Converting data from one type to another
// implict(conversion) & explicit(casting)

// #include <iostream>
// using namespace std;
// int main(){
    // implicit
    // char grade = 'A';
    // int value = grade;
    // cout << value <<endl;


// Explicit
    // double price = 100.99;
    // int newPrice = (int)price;
    // cout << newPrice <<endl;
    // return 0;
// }







// input in cpp
#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter age : ";
    cin >> age;
    cout<<"Your age is : "<<age;
    return 0;
}