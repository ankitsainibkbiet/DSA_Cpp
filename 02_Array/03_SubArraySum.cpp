#include<iostream>
#include<climits>
using namespace std;

void printSubArray(){
    int arr[]={1,2,-1,9,-1,-10,8,-6};
    int size = sizeof(arr)/4;
    for(int start=0; start<size ; start++){
        for(int end=start; end<size ; end++){
            for(int i=start ; i<end ; i++){
                cout<<arr[i]<<",";
            }
            cout<<endl;
        }
    }
}

void subArraySum(){
    
    int arr[]={2,3,-1,10,-1,-10,8,-6};
    int size = sizeof(arr)/4;
    int largest = INT_MIN;

    for(int start=0; start<size ; start++){
        int sum = 0;
        for(int end=start; end<size ; end++){
            sum += arr[end];
            largest = max(sum,largest);
        }
    }
    cout<<largest<<endl;
}

void kadansAlgorithm(){

    int arr[]={2,3,4,-1};
    int size = sizeof(arr)/4;
    int largest = INT_MIN;
    int sum = 0;

    for(int i=0 ; i<size ; i++){
        sum += arr[i];
        largest = max(sum , largest);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<largest<<endl;
}

int main(){
    // printSubArray();
    // subArraySum();
    kadansAlgorithm();
    return 0;
}