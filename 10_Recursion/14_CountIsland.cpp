#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void check(vector<vector<char>>& board, int i, int j, vector<vector<int>>& ans, vector<int>& temp){
        int row = board.size();
        int col = board[0].size();

        if(i >= row || j >= col || i < 0 || j < 0 || board[i][j] != '1') return;

        temp.push_back(1);
        board[i][j] = '0';

        check(board, i, j+1, ans, temp); 
        check(board, i+1, j, ans, temp); 
        check(board, i-1, j, ans, temp); 
        check(board, i, j-1, ans, temp);

        

        return;
    }

    int numIslands(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        vector<vector<int>> ans;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(board[i][j] == '1'){
                    vector<int> temp;
                    check(board, i, j, ans, temp);
                    ans.push_back(temp);
                }
            }
        }

        for(auto val: ans){
            for(auto j: val){
                cout<<j<<" ";
            }
            cout<<endl;
        }

        return ans.size();
    }
};

int main(){
    Solution s1;
    vector<vector<char>> board = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}
    };
    int ans = s1.numIslands(board);
    cout<<ans;
    return 0;
}