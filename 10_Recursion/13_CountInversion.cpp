#include<iostream>
#include<vector>
using namespace std;

int merge( vector<int> &arr, int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    int countInv = 0;
    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            countInv += mid-i+1;
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }

    while(j <= end){
        temp.push_back(arr[j++]);
    }

    for(int k=0; k<temp.size(); k++){
        arr[k + start] = temp[k];
    }

    return countInv;
}

int mergeSort( vector<int> &arr, int start, int end){
    if(start < end){
        int mid = start + (end - start)/2;
        int leftCount = mergeSort(arr, start, mid);
        int rightCount = mergeSort(arr, mid+1, end);
        int mergeCount = merge(arr, start, mid, end);
        return leftCount + rightCount + mergeCount;
    }
    return 0;
}

int main(){
    vector<int> arr = {6, 3, 5, 2, 7};
    int start = 0, end = arr.size()-1;
    int ans = mergeSort(arr, start, end);
    cout<<ans;
    return 0;
}