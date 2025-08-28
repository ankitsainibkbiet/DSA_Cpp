#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    int K = 9;
    K = 9%vec.size();

    vector<int> temp;
    for(int i=0; i<K; i++){
        temp.push_back(vec[i]);
    }

    for(int i=K; i<vec.size(); i++){
        vec[i-K] = vec[i];
    }

    int j = 0;
    for(int i=vec.size()-K; i<vec.size(); i++){
        vec[i] = temp[j++];
    }

    for(int i : vec){
        cout<<i<<" ";
    }

    return 0;
}