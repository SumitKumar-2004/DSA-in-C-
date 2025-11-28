//Calculate nCr binomial coefficient for n & r.
//nCr = n fact/r fact(n-r)fact
//eg : 8C2 = 28
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;  
} 
int nCr(int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}
int main(){
    int n, r ;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Binominal Coffeicient of "<<n<<"C"<<r<<" is : "<<nCr(n,r);
    return 0;
}