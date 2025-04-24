#include<iostream>
#include<vector>
using namespace std;

void binarySearch(int target){
    vector<int> vec={1,1,1,1,1,1,1,1,1,5,5,5,5,7};
    int start = 0 , end = vec.size()-1;

    while(start <= end){

        int mid = start + (end - start)/2;  // optiomization for INT_MAX values at coding platforms

        if(vec[mid] == target){
            cout<<"Target is present at index "<<mid;
            return;
        } else if(vec[mid] > target){
            end = mid-1;
        } else if(vec[mid] < target){
            start = mid+1;
        }
    }

    cout<<"Target is absent";
}

int main(){
    binarySearch(5);
    return 0;
}