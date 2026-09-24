#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid (vector <int>& arr, int n, int c, int minAllowedDist){
    int cows = 1, lastCowPosition = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]-lastCowPosition >= minAllowedDist){
            cows++;
            lastCowPosition = arr[i];
        }

        if(cows== c){
            return true;
        }
    }
    return false;
}

int getDistance (vector <int> &arr, int n, int c){
    sort(arr.begin(), arr.end());

    int st = 1, end = arr[n-1]-arr[0], ans = -1;

    while (st <= end){
        int mid = st + (end-st)/2;
        if(isValid(arr,n,c,mid)){
            ans = mid;
            st = mid+1;
        } else {
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    int n,c;
    cout<<"Enter the size of the aray: "<<endl;
    cin>>n;

    cout<<"Enter the no of cows: "<<endl;
    cin>>c;

    vector <int> arr(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    cout<<"Maximum Possible minimum Distance between two stalls: "<<getDistance(arr, n, c)<<endl;
    return 0;
}