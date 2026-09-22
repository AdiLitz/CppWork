#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector <int> &arr,int n, int m, int maxAllowedPages){
    int students =1, pages =0;
    for(int i=0; i<n; i++){
        if(arr[i]> maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }

    return  (students > m ? false : true);
}

int allocateBooks(vector <int> &arr, int n, int m){
    if(m>n){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum+= arr[i];
    }
int start = 0, end = sum;
int ans = -1;
while(start <= end){
    int mid = start + (end-start)/2;
    if(isValid(arr, n, m, mid)){
        end = mid -1 ;
        ans = mid;
    } else {
        start = mid+1;
    }
}
return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector <int> arr (n);
    cout<<"Enter the elements of the vector: "<<endl;
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the no of students: "<<endl;
    cin>>m;
    cout<<endl;
    cout<<"Minimized Value of Max Pages allotted: "  <<allocateBooks(arr, n, m)<<endl;
    return 0;

}