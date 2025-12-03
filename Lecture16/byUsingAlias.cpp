// Pass by referance using alias
#include <iostream>
using namespace std;
void changeA(int &b)
{ // pass by referance using alias
   b = 20;
}
int main()
{
   int a = 10;
   changeA(a);
   cout << "Inside main function : " << a << endl; // 20
}