#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> stockPrice = {7,1,3,2,6,5,10};
    int maxProfit = 0;
    int bestBuy = stockPrice[0];

    for(int i=1 ; i<stockPrice.size() ; i++){
        maxProfit = max(maxProfit , stockPrice[i] - bestBuy); 
        if(bestBuy > stockPrice[i]){  
            bestBuy = stockPrice[i];
        }
    }

    cout<<maxProfit;

    return 0;
}