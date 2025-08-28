#include<iostream>
using namespace std;

int main(){
    int arr[] = {11,10,8,50};
    int l = 0, l2 = 0;
    for(int i=0; i<4; i++){
        if(arr[i] > l){
            l2 = l;
            l = max(l, arr[i]);
        } else if(arr[i] > l2 && arr[i] < l){
            l2 = arr[i];
        }
    }
    cout<<l2;
    return 0;
}