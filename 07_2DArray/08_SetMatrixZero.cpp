#include<iostream>
#include<vector>
using namespace std;

void setMatrixZero(){
    vector<vector<int>> matrix = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};
    int row = matrix.size(), column = matrix[0].size();
    vector<int> setRow(row, 0), setColumn(column, 0);

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(matrix[i][j] == 0){
                setRow[i] = 1;
                setColumn[j] = 1;
            }
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(setRow[i] == 1 || setColumn[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    setMatrixZero();
    return 0;
}
