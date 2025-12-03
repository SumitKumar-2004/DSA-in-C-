// Pointers Arithmetic
#include <iostream>
using namespace std;
int main()
{
   int arr[] = {1, 32, 23, 54, 35};
   // int a = 10;
   // int *ptr = &a;
   // cout << ptr << endl;
   // // ptr++;
   // ptr = ptr+2;//2int => 8Bytes
   // cout << ptr << endl; //+4

   // cout<<*arr<<endl;//1
   // cout<<*(arr+1)<<endl;//32
   // cout<<*(arr+2)<<endl;//23
   // cout<<*(arr+3)<<endl;//54
   // cout<<*(arr+4)<<endl;//35

   // compare pointer
   int *ptr1;
   int *ptr2;

   cout << ptr1 << endl;
   cout << ptr2 << endl;

   cout << (ptr1 > ptr2) << endl;

   return 0;
}