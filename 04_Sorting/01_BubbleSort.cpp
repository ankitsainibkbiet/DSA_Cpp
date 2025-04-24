#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,5,4,8,7,0,2,5};

    for(int i=0; i<vec.size()-1 ; i++){
        for(int j=0 ;j<vec.size()-1-i ; j++ ){
            if(vec[j] > vec[j+1]){
                swap(vec[j] , vec[j+1]);
            }
        }
    }

    for(int val : vec){
        cout<<val<<" ";
    }

    return 0;
}
