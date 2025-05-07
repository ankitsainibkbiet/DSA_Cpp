#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int n, int row, int column, int digit){
    for(int i=0; i<n; i++){  // Row
        if(board[i][column] == digit){
            return false;
        }
    }

    for(int i=0; i<n; i++){  // Column
        if(board[row][i] == digit){
            return false;
        }
    }

    int sr = (row/3)*3, sc = (column/3)*3;  // Grid
    for(int i=sr; i < sr+3; i++){  
        for(int j=sc; j < sc+3; j++){
            if(board[i][j] == digit){
                return false;
            }
        }
    }

    return true;
}

bool sudokuSolver(vector<vector<char>>& board, int n, int row, int column){
    if(row == 9){
        for(auto val : board){
            for(auto key : val){
                cout<<key<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    int nextRow = row;
    int nextColumn = column + 1;
    if(nextColumn == 9){
        nextRow = row + 1;
        nextColumn = 0; 
    }

    if(board[row][column] != '.'){
        return sudokuSolver(board, n, nextRow, nextColumn);
    }

    for(int digit = '1'; digit <= '9'; digit++){  // pass char not integer and from 1 to 9
        if(isSafe(board, n, row, column, digit)){
            board[row][column] = digit;
            if(sudokuSolver(board, n, nextRow, nextColumn)) return true;  // this is used to check the backtracking condition
            board[row][column] = '.';  
        }  
    }

    return false;
}

int main(){
    int n = 9;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    sudokuSolver(board, n, 0, 0);

    return 0;
}