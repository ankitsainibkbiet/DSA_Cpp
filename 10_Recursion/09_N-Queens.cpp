#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<string>& board, int n, int row, int column){
    for(int i=0; i<n; i++){  // Row
        if(board[i][column] == 'Q'){
            return false;
        }
    }

    for(int i=0; i<n; i++){  // Column
        if(board[row][i] == 'Q'){
            return false;
        }
    }

    for(int i=row, j=column; i>=0 && j>=0; i--, j--){  // Left Diagonal
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    for(int i=row, j=column; i>=0 && j<n; i--, j++){  // Right Diagonal
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

void nQueens(vector<string>& board, vector<vector<string>>& ans, int n, int row){
    if(row == n){
        ans.push_back(board);
        return;
    }

    for(int j=0; j<n; j++){
        if(isSafe(board, n, row, j)){
            board[row][j] = 'Q';
            nQueens(board, ans, n, row+1);
            board[row][j] = '.';
        }
    }
}

int main(){
    int n = 4;
    vector<string> board(n, string(n, '.')); // string is also a 1D array
    vector<vector<string>> ans;

    nQueens(board, ans, n, 0);

    for(auto val : ans){
        for(auto key : val){
            cout<<key<<" "<<endl;
        }
        cout<<endl;
    }

    return 0;
}