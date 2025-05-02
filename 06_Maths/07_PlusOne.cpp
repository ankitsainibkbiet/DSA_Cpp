#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> withNine(vector<int> &vec, int n){
    bool change = true;
    if(n == 1){
        vec[0] = 1;
        vec.push_back(0);
        return vec;
    }
    for(int i=n-1; i>=0; i--){
        if(vec[i] == 9 && change){
            vec[i] = 0;
        }else if(vec[i] != 9 && vec[i+1] == 0 && change){
            vec[i] = vec[i]+1;
            change = false;
        }else{
            continue;
        }
    }
    if(vec[0] == 0 && change){
        vec[0] = 1;
        vec.push_back(0);
    }
    return vec;
}

vector<int> withoutNine(vector<int> &vec, int n){
    for(int i=0; i<n; i++){
        if(i != n-1){
            continue;
        }else{
            vec[i] = vec[n-1] + 1;
        }
    }
    return vec;
}

int main() {
    vector<int> vec = {9,9};
    int n = vec.size();
    if(vec[n-1] == 9){
        withNine(vec, n);
    }else{
        withoutNine(vec, n);
    }
    for(int val : vec){
        cout<<val;
    }
    return 0;
}