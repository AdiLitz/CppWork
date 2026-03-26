#include <iostream>
#include<vector>

using namespace std;

int maxArea(vector<int> height) {
       int maxWater = 0;
       int leftEdge = 0, rightEdge = height.size() -1;
       while(leftEdge < rightEdge){
        int width = rightEdge - leftEdge;
        int ht = min(height[leftEdge],height[rightEdge]);
        int currWater = width*ht;
        maxWater = max(maxWater,currWater);
        height[leftEdge]<height[rightEdge] ? leftEdge++ : rightEdge--;
       }
       return maxWater;
    }

       int main(){
        cout<<"Enter the size of array: "<<endl;
        int size;
        cin>>size;
        vector <int> heights (size);
        cout<<"Enter the elements of the array: "<<endl;
        for(int i=0; i<size; i++){
            cin>>heights[i];
        }
        cout<<"Maximum water that can be stored is: "<< maxArea(heights) <<" square units"<<endl;
        return 0;
       }