#include <iostream>
#include <vector>
using namespace std;

int maxSubarray(vector <int> vec){
int currSum =0, maxSum = INT32_MIN;
for(int val : vec ){
    currSum+= val;
    maxSum = max(currSum,maxSum);

    if(currSum<0){
        currSum=0;
    }
}
return maxSum;
}

int main(){
cout<<"Enter the size of the vector: "<<endl;
int n;
cin>>n;
vector <int> vec (n);
cout<<"Enter the elements of the vector: "<<endl;
for(int i=0; i<n;i++){
    cin>>vec[i];
}
cout<<"Maximum sub array sub for the given vector is "<<maxSubarray(vec)<<endl;
return 0;
}