#include <iostream>
using namespace std;

int RotatedSearch (int arr[], int size, int target){
    int start =0, end = size-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(target == arr[mid]){
            return mid;
        }
        if(arr[start]<= arr[mid]){
            if(arr[start]<=target && target<arr[mid]){
                end= mid-1;
            }
            else{
                start= mid+1;
            }
        }
        else{
            if(arr[mid]<target && target<arr[end]){
                start= mid+1;
            }
            else{
                end = mid-1;
            }
        }
        
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of the array: \n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the target element: "<<endl;
    int target;
    cin>>target;

    int ans = RotatedSearch(arr, size, target);

    if(ans!= -1){ 
    cout<<"Target found at index: "<<ans<<endl;
    }
    else{
        cout<<"Target couldnt be found"<<endl;
    }
    return 0;
}