#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,1,1,0,2,5};
    int n = sizeof(arr)/4;
    int indexReach = 0, count = 0;
    bool flag = true;

    for(int i=0; i<n; i++){
        int idx = i + arr[i];
        if(indexReach < i){
            cout<<"False";
            flag = false;
        };
        if(indexReach < idx){
            count++;
            indexReach = idx;
        }
        if(indexReach >= n) break;
    }
    
    if(flag){
        cout<<"True "<<count;
    }

    return 0;
}