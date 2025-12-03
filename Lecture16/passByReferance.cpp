// Pass By Referance
#include <iostream>
using namespace std;
void changeA(int *a)//pass by referance using pointers
{
   *a = 20;
}
int main()
{
   int a = 10;
   changeA(&a);
   cout << "Inside main function : " << a << endl; // 20
}