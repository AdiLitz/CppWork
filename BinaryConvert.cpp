#include <iostream>
using namespace std;
int convert (int decnum){
    int ans=0;
    int power=1;
    while(decnum>0){
        int remainder = decnum%2;
        ans+= remainder*power;
        decnum/=2;
        power*=10;
    }
return ans;

}
int main(){
    int decnum;
    cout<<"Enter the number that you to to convert to binary: "<<endl;
    cin>> decnum;
    cout<<"The binary number for "<<decnum<<" is: "<<endl;
    cout<<convert(decnum)<<endl;
    return 0;
}