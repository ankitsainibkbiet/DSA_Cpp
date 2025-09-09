#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> gas = {3,2,1};
    vector<int> cost = {3, 2, 1};

    int start = 0, gasLeft = 0;
    int g = 0, c = 0;

    for(int i=0; i<gas.size(); i++){
        g += gas[i]; c += cost[i];
        gasLeft = gasLeft + gas[i] - cost[i];
        if(gasLeft < 0){
            start = i + 1;
            gasLeft = 0;
        }
    }

    if(g < c){
        cout<<-1;
    }else{
        cout<<start;
    }

    return 0;
}