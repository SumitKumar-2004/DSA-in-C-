//STL IN C++
//Vectors 
#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector<int> vec;//0
   // vec.push_back(1);
   // vec.push_back(2);
   // vec.push_back(3);
   // vec.push_back(4);
   // vec.push_back(5);
   // vec.emplace_back(6);
   // vec.pop_back();

   vector<int> vec = {1,2,3,4,5};

   // vector<int> vec(4,23);//dynamic programming  - tabulation DP[][]
   vec.erase(vec.begin());
   cout<<"Elements of vector : ";
   for(int val : vec){
      cout<<val<<" ";
   }
   cout<<endl;
   cout<<"Size of vector is : "<<vec.size()<<endl;//5
   cout<<"Capacity of vector is : "<<vec.capacity()<<endl;//8
   cout<<"Value at idx 3 : "<<vec.at(3)<<endl;
   cout<<"Front : "<<vec.front()<<endl;
   cout<<"Back : "<<vec.back()<<endl;
   return 0;
}

