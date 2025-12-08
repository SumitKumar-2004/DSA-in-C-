//Reverse a string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){

   //Reverse a char

   // char ch[] = "hello";
   // int st=0,end=(sizeof(ch)/sizeof(ch[0]))-2;
   // while (st < end)
   // {
   //    swap(ch[st++],ch[end--]);
   // }
   // cout<<ch;

   //Reverse a string
   string str = "apna college";
   reverse(str.begin(),str.end());
   cout<<str<<endl;
}