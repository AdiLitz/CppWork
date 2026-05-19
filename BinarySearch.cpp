#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector <int> arr, int target){
    int start =0, end = arr.size()-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(target > arr[mid]){
            start = mid+1;
        } else if(target < arr[mid]){
            end = mid-1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>size;
    vector <int> arr(size);

    cout<<"Enter the values of the array in ascending order: "<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target: "<<endl;
    cin>>target;

    int answer= BinarySearch(arr, target);

    if(answer!= -1){
        cout<<"Target found at: "<<answer<<endl;
    } else {
        cout<<"Target could not be found"<<endl;
    }

    return 0;
}