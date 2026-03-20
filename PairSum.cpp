#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum (vector <int> nums, int target){
    vector <int> ans;
    int n = nums.size();
    int i=0, j =n-1;

    while(i<j){
        int pairSum = nums[i] + nums[j];
        if (pairSum>target){
            j--;
        } else if (pairSum<target){
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>> size;
    vector <int> nums (size);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>> nums[i];
    }
    int target;
    cout<<"What's the target value? "<<endl;
    cin>>target;
    vector <int> ans = pairSum(nums,target);

    if(ans.size()==2){ 
        
    cout<< ans[0]<<", "<< ans[1]<<endl;
    } else { 
        cout<<"Target could not be found: "<<endl;
    }
    return 0;
}