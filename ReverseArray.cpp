#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
reverse(arr , size);
return 0;
}