#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int size = end - start + 1;
    int temp[size];
    int i = start, j = mid + 1, index = 0;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp[index] = arr[i];
            index++; i++;
        }else{
            temp[index] = arr[j];
            index++; j++;
        }
    }

    while(i <= mid){
        temp[index] = arr[i];
        index++; i++;
    }

    while(j <= end){
        temp[index] = arr[j];
        index++; j++;
    }

    for(int k=0; k<size; k++){
        arr[k + start] = temp[k];
    }
}

void mergeSort(int arr[], int start, int end){
    int mid = start + (end - start)/2;
    if(start < end){
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main(){
    int arr[] = {1,5,3,2,6,7,4};
    int end = sizeof(arr)/4 - 1;

    mergeSort(arr, 0, end);

    for(int k=0; k<7; k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;
}