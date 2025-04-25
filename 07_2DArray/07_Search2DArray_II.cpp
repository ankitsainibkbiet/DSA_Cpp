#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> vec = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {18,21,23,26,30}};
    int target = 21, m = vec.size(), n = vec[0].size();
    int row = 0, column = n-1;
    bool found = false;

    while(row < m &&  column >= 0){
        if(vec[row][column] == target){
            cout<<"Target found at index "<<row<<","<<column;
            found = true;
        }
        if(vec[row][column] < target){
            row++;
        }else{
            column--;
        }
    }

    if(!found){
        cout<<"Target Not Found";
    }

    return 0;
}