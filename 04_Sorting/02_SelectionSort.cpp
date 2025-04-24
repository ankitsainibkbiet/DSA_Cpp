#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,44,0,2,5};

    for(int i=0 ; i<vec.size() ; i++){
        int index = i;
        for(int j=i+1 ; j<vec.size() ; j++){
            if(vec[i] > vec[j]){
                index = j;
            }
        }
        swap(vec[index], vec[i]);
    }

    for(int val : vec){
        cout<<val<<" ";
    }

    return 0;
}
