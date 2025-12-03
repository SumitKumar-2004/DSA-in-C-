#include <iostream>
using namespace std;
int main()
{
   int a = 10;
   // int *ptr = &a;
   // int **parPtr = &ptr;
   // cout<<ptr<<endl;//value of ptr which is same as the adress of a
   // cout << &a << endl;//address of a
   // cout<<&ptr<<endl; //address of pointer

   // pointer to pointer
   //  int ** parentPtr = &ptr;
   //  cout<<&ptr<<endl;
   //  cout<<parentPtr<<endl;

   // Dereferance operatror(*)
   // cout << *(&a) << endl;
   // cout << *ptr << endl;

   // cout << (ptr) << endl;
   // cout << *(parPtr) << endl;
   // cout << **parPtr << endl;

   // Null Pointer
   int **ptr = NULL;
   cout << ptr << endl;
   return 0;
}