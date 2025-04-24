#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

bool isValid(int mid, int totalBoard, int totalPainter , vector<int> vec){
    int painterCount = 1 , time = 0;
    for(int i=0 ; i<totalBoard ; i++){
        if(vec[i] > mid) return false; //edge case check
        if(time+vec[i] <= mid){
            time += vec[i];
        }else{
            painterCount++;
            time = vec[i];
        }
    }
    if(painterCount == totalPainter){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<int> vec={10,20,50,20};
    int totalBoard = 4 , totalPainter = 2;

    int largest = INT_MIN;
    int sum = 0;
    for(int val : vec){
        largest = max(largest , val);
        sum += val;
    }

    int start = largest , end = sum , ans = 0; // range of time required to paint the board

    while(start <= end){
        int mid = start + (end-start)/2;

        if(isValid(mid, totalBoard, totalPainter, vec)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    cout<<ans;

    return 0;
}