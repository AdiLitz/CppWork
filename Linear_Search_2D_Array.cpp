#include <iostream>
using namespace std;

pair<int, int> LinearSearch(int matrix [][3], int rows, int cols, int key){
    pair<int , int> ans = {-1,-1};
    for(int i=0; i<rows; i++){ 
        for(int j =0; j<cols; j++){
            if(key == matrix[i][j]){
                ans.first = i;
                ans.second = j; 
                return ans;
            }
        }
    }

    return ans;
}

int main(){
    int matrix [4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int rows = 4;
    int cols = 3;
    int key;
    cout<<"Enter a Key: ";
    cin>> key;

    pair<int, int> answer = LinearSearch(matrix, rows, cols, key);
    cout<< answer.first<<" ";
    cout<<answer.second<<endl;

    return 0;
}