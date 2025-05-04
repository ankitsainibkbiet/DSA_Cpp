#include<iostream>
#include<vector>
using namespace std;

int recursiveBinary(vector<int> vec, int start, int end, int target){
    if(start > end) return false;
    int mid = start + (end - start)/2;
    if(vec[mid] == target) return true;
    if(vec[mid] < target){
        return recursiveBinary(vec, start = mid+1, end, target);
    }else{
        return recursiveBinary(vec, start, end = mid-1, target);
    }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};
    int n = vec.size(), start = 0, end = n-1, target = 100;
    cout<<recursiveBinary(vec, start, end, target);
    return 0;
}