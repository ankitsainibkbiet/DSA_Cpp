#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &vec, int start, int end){
    int pivot = vec[end];
    int i = start, j = start;

    while(j < end){
        if(vec[j] < pivot){
            swap(vec[j], vec[i]);
            i++;
        }
        j++;
    }
    swap(vec[end], vec[i]);

    return i;
}

void quickSort(vector<int> &vec, int start, int end){
    if(start < end){
        int pivotIndex = partition(vec, start, end);
        quickSort(vec, start, pivotIndex - 1);
        quickSort(vec, pivotIndex + 1, end);
    }
}

int main(){
    vector<int> vec = {1,2,8,6,5,4,9};
    quickSort(vec, 0, vec.size()-1);
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}