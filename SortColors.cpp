#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid =0, low =0, high =n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            } else if (nums[mid] ==1){
                mid++;
            } else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }

    int main(){
        int size; 
        cout<<"Enter the size of the array: "<<endl;
        cin>>size;

        vector <int> nums (size);

        cout<<"Enter the elements of the array (0,1 and 2 only): "<<endl;
        
        for(int i =0; i<size; i++){
            cin>>nums[i];

            if(nums[i]!= 0 && nums[i]!= 1 && nums[i]!= 2){
                cout<<"Enter Valid Values"<<endl;
                return -1;
            }
        }

        sortColors(nums);
        for(int i =0; i<size; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        return 0;
    }