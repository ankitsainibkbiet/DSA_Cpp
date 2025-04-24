#include<iostream>
#include<vector>
using namespace std;

bool isValid(int mid, int totalBooks, int totalStudent, vector<int> vec){
    int pages = 0, studentCount = 1;

    for(int i=0 ;i<totalBooks ; i++){
        if(vec[i] > mid) return false; //edge case check
        if(pages+vec[i] <= mid){
            pages += vec[i];
        }else{
            studentCount++;
            pages = vec[i];
        }
    }

    if(studentCount == totalStudent){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<int> vec={15,17,20};
    int totalBooks = 3 , totalStudent = 2;

    int sum = 0;
    for(int val : vec){
        sum += val;
    }
    int start = 0 , end = sum , ans = 0; // range of total pages one student can have

    while(start <= end){
        int mid = start + (end-start)/2;
        if(isValid(mid, totalBooks, totalStudent, vec)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    cout<<ans;


    return 0;
}
