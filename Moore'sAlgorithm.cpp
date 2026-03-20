#include <iostream>
#include <vector>
using namespace std;

int findCandidate(vector <int> nums){
    int freq= 0, ans= 0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans==nums[i]){
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int majorityElement(vector<int> nums){
    int candidate = findCandidate(nums);
    int freq= 0;
    for(int val:nums){
        if (val==candidate){
            freq++;
        }
    }
    if(freq>nums.size()/2){
        return candidate;
    } else {
        return -1;
    }
}

int main(){
    cout<<"Enter the size of the vector: "<<endl;
    int size;
    cin>> size;
    vector<int> nums (size);
    cout<<"Enter the elements of the vector: "<<endl;
    for(int i=0;i<size;i++){
        cin>> nums[i];
    }
    if(majorityElement(nums)!= -1){ 
    cout<<"The majority element for the given vector is: "<<majorityElement(nums)<<endl;
    } else {
        cout<<"There is no majority element in the given vector"<<endl;
    }
    return 0;
}