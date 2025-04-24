#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,44,0,2,5};
    
    for(int i=1 ; i<vec.size() ; i++){
        int prev = i-1, current = vec[i];

        while(prev >= 0 && vec[prev] > current){
            vec[prev+1] = vec[prev];
            prev--;
        }

        vec[prev+1] = current;
    }

    for(int val : vec){
        cout<<val<<" ";
    }

    return 0;
}
