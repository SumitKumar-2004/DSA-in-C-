// Set in cpp
#include <iostream>
#include <set>
#include<unordered_set>
using namespace std;
int main()
{
   // set
   //  set<int> s;
   //  s.insert(1);
   //  s.insert(2);
   //  s.insert(3);
   //  s.insert(4);
   //  s.insert(5);

   // cout<<"Lower Bound : "<<*(s.lower_bound(4))<<endl;
   // cout<<"Upper Bound : "<<*(s.upper_bound(4))<<endl;

   // cout<<s.size()<<endl;
   // for (auto val : s)
   // {
   //    cout << val << " ";
   // }
   // cout << endl;

   // // Multiset
   // multiset<int> s;
   // s.insert(1);
   // s.insert(2);
   // s.insert(3);
   // s.insert(4);
   // s.insert(5);
   // s.insert(4);
   // s.insert(5);

   // cout<<"Size : "<<s.size()<<endl;
   // for (auto val : s)
   // {
   //    cout << val << " ";
   // }
   // cout << endl;


   // Unordered set
   unordered_set<int> s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);
   s.insert(4);
   s.insert(5);

   cout<<"Size : "<<s.size()<<endl;
   for (auto val : s)
   {
      cout << val << " ";
   }
   cout << endl;

   return 0;
}