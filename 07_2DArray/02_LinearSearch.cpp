#include<iostream>
using namespace std;

pair<int, int> linearSearch2D(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int target = 8, row = 3, column = 3;

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(target == arr[i][j]){
                return {i, j}; // to return pain in cpp
            }
        }
    }
    cout<<"Target Not Found";
}

int main(){
    pair<int, int> index = linearSearch2D();
    cout<<index.first<<","<<index.second; // to access pain in cpp
    return 0;
}