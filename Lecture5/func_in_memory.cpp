//function in memory
//heep --> Dynamic allocation
//stack --> Static allocation
//eg
#include<iostream>
using namespace std;
int sum(int a, int b){
    return a + b;
}
int main(){
    cout<<"Sum : "<<sum(4,5)<<endl;
    cout<<"Sum : "<<sum(14,52);

}