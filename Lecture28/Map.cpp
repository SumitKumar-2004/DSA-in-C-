//Map in cpp
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
   map<string,int> m;
   m["tv"] = 50;
   m["laptop"] = 1000;
   m["headphones"] = 50;

   m.insert({"Camera",25});

   m.erase("tv");

   // for(auto p:m){
   //    cout<<p.first<<" "<<p.second<<endl;
   // }

   // cout<<"Count : "<<m.count("laptop")<<endl;

   // if(m.find("Camera") != m.end()){
   //    cout<<"Found";
   // }else{
   //    cout<<"Not found";
   // }




   //MultiMap

   // multimap<string,int> m2;
   // m2.emplace("tv",100);
   // m2.emplace("tv",100);
   // m2.emplace("tv",100);
   // m2.emplace("tv",100);

   // m2.erase("tv");

   // for(auto p : m2){
   //    cout<<p.first<<" "<<p.second<<endl;
   // }


   //Unordered Map
   unordered_map<string,int> m3;

   m3.emplace("tv",100);
   m3.emplace("laptop",100);
   m3.emplace("fridge",100);
   m3.emplace("fan",100);
   
   for(auto p:m3){
      cout<<p.first<<" "<<p.second<<endl;
   }

   return 0;
}