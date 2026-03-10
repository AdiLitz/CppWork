#include <iostream>
using namespace std;

void search(int arr[],int size, int target){
    for(int i=0;i<size;i++){
        
        if(arr[i]==target){
            cout<<"Target found at index: "<<i<<endl;
            return;
        }
    }
cout<<"Target not found"<<endl;
}

int main(){
    int target,size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the target number: ";
    cin>>target;
    for(int i=0;i<size;i++){
        cin>> arr[i];
    }
    search(arr,size,target);
    return 0;
}
