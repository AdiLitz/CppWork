#include <iostream>
using namespace std;

double myPow (double x, int n){
    double ans = 1;
    while (n<0){
        x= 1/x;
        n = -n;
    }
    while(n>0){
        if(n%2 == 1){
            ans*=x;
        }
        x*=x;
        n/=2;
    }
return ans;
}

int main(){
    double x;
    cout<<"Enter the base value: "<<endl;
    cin>> x;
    int n;
    cout<<"Enter the exponent: "<<endl;
    cin>>n;
    cout<< x << " raised to the power "<< n << " is equal to: "<<myPow(x,n)<<endl;
}