#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> vec, int n){
    if(n == 0) return true;
    if(vec[n] < vec[n-1]) return false;
    return isSorted(vec, n-1);
}

int main(){
    vector<int> vec = {1,2};
    int n = vec.size()-1;
    cout<<isSorted(vec, n);
    return 0;
}