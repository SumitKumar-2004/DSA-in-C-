//Predict the output of this code
#include<iostream>
using namespace std;
int main(){
   int a = 5;
   int *p = &a;
   int **q = &p;


   cout<<*p<<endl;//5
   cout<<**q<<endl;//value at address p which is 5
   cout<<p<<endl;//address of a
   cout<<*q<<endl;//address of a
}