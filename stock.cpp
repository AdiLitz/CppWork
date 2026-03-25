#include <iostream>
#include <vector>
using namespace std;

int maxProfit (vector<int> prices){
    int maxProfit =0 , bestBuy = prices[0];
    for(int i = 1; i< prices.size(); i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    return maxProfit;
}

int main(){
    
    cout<<"Enter the size of the array: "<<endl;
    int size;
    cin>>size;
    vector <int> prices (size);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size ; i++){
        cin >> prices[i];
    }
    cout<<"Maximum profit that can be obtained is: "<<maxProfit(prices)<<endl;
    return 0;
}