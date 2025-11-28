// Sum of numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of "<<n<<" is : "<<sum;
}