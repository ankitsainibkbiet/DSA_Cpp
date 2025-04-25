#include<iostream> 
#include<vector>
using namespace std; 

pair<int, int>searchRow(vector<vector<int>> vec, int midRow, int row, int column, int target){
    int start = 0, end = column-1;

    while(start <= end){
        int midColumn = start + (end-start)/2;

        if(vec[midRow][midColumn] == target){
            return {midRow, midColumn};
        }
        if(vec[midRow][midColumn] < target){
            start = ++midColumn;  
        }else{
            end = --midColumn;
        }
    }
}

void search2DArray(){
    vector<vector<int>> vec = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int row = vec.size(), column = vec[0].size(), target = 100;
    int startRow = 0, endRow = row-1;

    while(startRow <= endRow){
        int midRow = startRow + (endRow - startRow)/2;

        if(vec[midRow][0] <= target && target <= vec[midRow][column-1]){
            pair<int, int> result = searchRow(vec, midRow, row, column, target);
            cout<<"Target Index :- "<<result.first<<","<<result.second;
            return;
        }
        if(vec[midRow][0] > target){
            endRow = --midRow; // this while make infinite loop if postfix are used the assign first then dec/inc
        }else{
            startRow = ++midRow;
        }
    }

    cout<<"Target Not found";
}

int main(){
    search2DArray();
    return 0;
}