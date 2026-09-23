#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector <int> &arr, int n, int m, int maxAllowedTime){
    int painters =1, time =0;
    for(int i=0; i<n; i++){
        if(time + arr[i]<= maxAllowedTime){
            time +=arr[i];
        } else{
            painters++;
            time = arr[i];
        }
    }
    return painters <=m? true : false;
}

int minTimeToPaint (vector <int> & arr, int n, int m){
    int sum =0, maxVal = INT16_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while(st<=end){
        int mid = st + (end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>> n;
    vector <int> arr (n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter no. of painters: "<<endl;
    cin>>m;

    cout<<"Final Answer: "<< minTimeToPaint(arr,n,m)<<endl;
    return 0;
    
}